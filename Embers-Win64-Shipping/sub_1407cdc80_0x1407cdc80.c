// 函数: sub_1407cdc80
// 地址: 0x1407cdc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t result = sub_140d3c6e0(arg1)
int32_t i = 0
int64_t result_2 = result

if (result == 0)
    result_2 = nullptr
else
    void* rax_2 = sub_142591550()
    void* rdx_1 = *(result_2 + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s> *(rdx_1 + 0x38))
        result_2 = nullptr
    else
        int64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) != rax_2 + 0x30)
            result_2 = nullptr

uint64_t r12 = zx.q(arg1[0x71])

if (arg1[0x6e] s> 0)
    float (* rbx_1)[0x4] = nullptr
    int128_t* rdi_1 = nullptr
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    uint32_t zmm12[0x4]
    uint32_t var_98_1[0x4] = zmm12
    float zmm13[0x4]
    float var_a8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_b8_1[0x4] = zmm14
    uint32_t zmm15[0x4] = data_143ce0350
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    
    do
        int64_t rsi_1 = *(arg1 + 0x1b0)
        int32_t r8_2 = *(rbx_1 + rsi_1 + 0x30)
        float var_148[0x4]
        float (* rax_3)[0x4]
        float zmm1[0x4]
        
        if (r8_2 == 0xffffffff)
            float var_108[0x4]
            rax_3 = &var_108
            zmm1 = data_143dbb0d0
            var_108 = data_143dbb0c0
            uint32_t var_e8_1[0x4] = data_143dbb0e0
            float var_f8_1[0x4] = zmm1
        else
            rax_3 = sub_141f5e7d0(result_2, &var_148, r8_2, &data_143dbb0c0)
            zmm15 = data_143ce0350
        
        zmm8 = rax_3[2]
        float zmm5[0x4] = *rax_3
        zmm12 = *(rbx_1 + rsi_1 + 0x20)
        zmm14 = rax_3[1]
        uint32_t zmm0[0x4]
        float zmm3[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm8), data_143ce07b0, 1)) == 0)
            float zmm2[0x4] = *(rbx_1 + rsi_1)
            zmm3 = *(rbx_1 + rsi_1 + 0x10)
            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
            float temp0_134[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm0)
            float temp0_137[0x4] = _mm_mul_ps(zmm3, zmm8)
            float temp0_138[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            float temp0_139[0x4] = __mulps_xmmps_memps(temp0_136, data_143ce0330)
            zmm0 = _mm_mul_ps(temp0_138, zmm2)
            zmm11 = _mm_mul_ps(zmm8, zmm12)
            float temp0_142[0x4] = _mm_add_ps(temp0_139, zmm0)
            float temp0_144[0x4] = _mm_mul_ps(temp0_134, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143ce0320)
            float temp0_149[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
            zmm0 = __mulps_xmmps_memps(zmm0, data_143ce0310)
            float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_148)
            float temp0_152[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
            float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xd2), temp0_152)
            zmm6 = _mm_add_ps(temp0_151, zmm0)
            float temp0_158[0x4] = _mm_sub_ps(temp0_154, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_149))
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_mul_ps(temp0_138, temp0_159)
            float temp0_162[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_159, temp0_159, 0xd2), temp0_152)
            zmm0 = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_164[0x4] = _mm_add_ps(temp0_160, temp0_137)
            zmm7 = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(temp0_162, _mm_mul_ps(zmm0, temp0_149)), temp0_164), zmm14)
        else
            zmm9 = data_143ce0340
            float temp0_4[0x4] = _mm_add_ps(zmm5, zmm5)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            float temp0_8[0x4] = _mm_mul_ps(zmm5, temp0_4)
            float temp0_10[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
            zmm0 = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
            float temp0_13[0x4] = _mm_mul_ps(temp0_7, temp0_11)
            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_8, temp0_8, 1))
            _mm_mul_ps(zmm8, zmm12)
            zmm3 = *(rbx_1 + rsi_1)
            float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_10)
            float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_13)
            float temp0_19[0x4] = _mm_sub_ps(zmm9, zmm0)
            float temp0_20[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
            float temp0_21[0x4] = _mm_mul_ps(temp0_17, zmm8)
            float temp0_22[0x4] = _mm_mul_ps(temp0_6, temp0_18)
            float temp0_23[0x4] = _mm_mul_ps(temp0_19, zmm8)
            float temp0_24[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
            zmm1 = _mm_and_ps(temp0_23, zmm15)
            zmm0 = _mm_shuffle_ps(temp0_22, zmm1, 0x32)
            float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0), zmm0, 0x82)
            zmm0 = _mm_shuffle_ps(temp0_21, zmm1, 0x31)
            float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0x10), zmm0, 0x88)
            zmm0 = zmm9
            float temp0_33[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_22, 0x12), zmm1, 0xe8)
            float temp0_34[0x4] = _mm_add_ps(zmm3, zmm3)
            zmm0[0].q = zmm14 u>> 0x40
            float temp0_35[0x4] = _mm_shuffle_ps(zmm14, zmm0, 0xc4)
            float temp0_36[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            float temp0_37[0x4] = _mm_mul_ps(zmm3, temp0_34)
            float temp0_39[0x4] = _mm_mul_ps(temp0_24, _mm_shuffle_ps(temp0_34, temp0_34, 0x29))
            float temp0_41[0x4] = _mm_mul_ps(temp0_36, _mm_shuffle_ps(temp0_34, temp0_34, 0x12))
            zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                _mm_shuffle_ps(temp0_37, temp0_37, 1))
            float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
            float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
            float temp0_47[0x4] = _mm_sub_ps(zmm9, zmm0)
            float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm12)
            float temp0_49[0x4] = _mm_mul_ps(temp0_20, temp0_46)
            zmm1 = _mm_and_ps(_mm_mul_ps(temp0_47, zmm12), zmm15)
            zmm0 = _mm_shuffle_ps(temp0_49, zmm1, 0x32)
            float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), zmm0, 0x82)
            zmm0 = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
            float temp0_57[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0x10), zmm0, 0x88)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
            zmm5 = *(rbx_1 + rsi_1 + 0x10)
            zmm0 = zmm9
            float temp0_59[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, zmm1, 0xe8)
            float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_33)
            float temp0_63[0x4] = _mm_mul_ps(temp0_59, temp0_31)
            zmm0[0].q = zmm5 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm0, 0xc4)
            zmm0 = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_35)
            float temp0_69[0x4] = _mm_add_ps(temp0_63, _mm_mul_ps(zmm0, temp0_28))
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_28)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_62)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_33)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_31)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
            var_148 = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, zmm0)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_31)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_35)
            zmm0 = _mm_shuffle_ps(temp0_60, temp0_60, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            zmm0 = _mm_mul_ps(zmm0, temp0_28)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_33)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, zmm0)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_35)
            zmm0 = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            int96_t var_138_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_31)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_33)
            zmm0 = _mm_mul_ps(zmm0, temp0_28)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_35)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, zmm0)
            int96_t var_128_1 = temp0_99[0].12
            int96_t var_118_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            zmm9, zmm11, zmm13, zmm15 = sub_1407740e0(&var_148, 0x322bcc77)
            float zmm2_1[0x4] = var_148[0]
            float zmm1_1 = var_148[1]
            zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, zmm11, 2), data_143ce0390 ^ zmm9)
            uint32_t zmm0_1[0x4] = var_148[2]
            zmm13 ^= data_143ce0390
            zmm2_1[0] = zmm2_1[0] * zmm13[0]
            zmm1_1 = zmm1_1 * zmm13[0]
            zmm0_1[0] = zmm0_1[0] f* zmm13[0]
            var_148[0] = zmm2_1[0]
            var_148[1] = zmm1_1
            float temp0_107[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
            zmm1_1 = var_138_1:4.d * temp0_107[0]
            var_148[2] = zmm0_1[0]
            zmm0_1 = var_138_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
            float zmm3_1 = var_138_1.d * temp0_107[0]
            zmm2_1 = var_128_1.d
            var_138_1:4.d = zmm1_1
            var_138_1:8.d = zmm0_1[0]
            zmm0_1 = var_128_1:8.d
            float temp0_108[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
            zmm1_1 = var_128_1:4.d * temp0_108[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
            zmm2_1[0] = zmm2_1[0] * temp0_108[0]
            var_128_1:4.d = zmm1_1
            var_128_1:8.d = zmm0_1[0]
            var_138_1.d = zmm3_1
            var_128_1.d = zmm2_1[0]
            uint32_t var_158[0x4]
            sub_14077e4a0(&var_158, &var_148)
            zmm5 = var_158
            zmm6 = data_143ce07a0
            float temp0_109[0x4] = _mm_mul_ps(zmm5, zmm5)
            float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
            float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
            float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
            float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm6)
            float temp0_120[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                    temp0_114), 
                temp0_114)
            float temp0_123[0x4] =
                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
            zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_118_1:4.d, 0)
            zmm6 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5) ^ data_143ce0790, zmm0) ^ data_143ce0790
            zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_118_1.d, var_118_1:8.d[0].q), temp0_128[0].q)
            var_158 = zmm6
        result = *(arg1 + r12 * 0x10 + 0x1c8)
        i += 1
        rbx_1 = &rbx_1[4]
        *(rdi_1 + result) = zmm6
        *(rdi_1 + result + 0x10) = zmm7
        *(rdi_1 + result + 0x20) = zmm11
        rdi_1 = &rdi_1[3]
    while (i s< arg1[0x6e])

__security_check_cookie(rax_1 ^ &var_188)
return result
