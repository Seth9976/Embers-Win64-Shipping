// 函数: sub_14220c130
// 地址: 0x14220c130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int128_t* rax_2 = *arg1
int128_t* rdx = arg1[1]
float zmm8[0x4] = *rdx
float temp0[0x4] = _mm_unpacklo_ps(*(rdx + 4), 0)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm8, *(rdx + 8))
int64_t zmm0 = data_14399f670
zmm8 = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float zmm12[0x4] = *rax_2
float zmm13[0x4] = data_14399f668
float temp0_3[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
zmm13 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, zmm0), temp0_3[0].q)
float var_258[0x4] = zmm8
void* var_118 = nullptr
int32_t result_1 = 0
int32_t var_10c = 0x20
void var_218
sub_142258fe0(arg2, &var_218)
void* rcx_1 = var_118
void* rsi = &var_218
int64_t result = sx.q(result_1)

if (rcx_1 != 0)
    rsi = rcx_1

void* r12 = rsi + (result << 3)

if (rsi != r12)
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    float zmm14[0x4]
    float var_b8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_c8_1[0x4] = zmm15
    
    do
        result.b = sub_14226e880(rsi).b - 5
        
        if (result.b u> 1)
            void var_108
            int128_t* rax_3 = sub_14226de10(&var_108, rsi)
            zmm14 = data_143f51030
            uint32_t zmm5_1[0x4] = data_143f51040
            zmm14[0].q = zx.o(0) u>> 0x40
            float var_248[0x4] = _mm_shuffle_ps(zx.o(0), zmm14, 0xc4)
            float var_228_1[0x4] = _mm_and_ps(zmm14, zmm5_1)
            float zmm1_1[0x4] = data_143f51110
            int128_t var_238_1 = zx.o(0)
            zmm15 = rax_3[2]
            float var_268_1[0x4] = zmm1_1
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, zmm13), zmm1_1, 1)) == 0)
                float zmm2_1[0x4] = *rax_3
                float zmm4_1[0x4] = rax_3[1]
                float temp0_140[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b)
                zmm5_1 = _mm_mul_ps(zmm13, zmm4_1)
                float temp0_142[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                float temp0_144[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), temp0_140)
                float temp0_145[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                float temp0_146[0x4] = _mm_mul_ps(zmm2_1, temp0_145)
                float temp0_147[0x4] = __mulps_xmmps_memps(temp0_144, data_143f51070)
                float temp0_148[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                float temp0_149[0x4] = _mm_add_ps(temp0_147, temp0_146)
                float temp0_151[0x4] = _mm_mul_ps(temp0_142, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
                float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xaa), 
                    _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
                float temp0_155[0x4] = __mulps_xmmps_memps(temp0_151, data_143f51060)
                float temp0_156[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                float temp0_157[0x4] = __mulps_xmmps_memps(temp0_154, data_143f51050)
                float temp0_158[0x4] = _mm_add_ps(temp0_149, temp0_155)
                float temp0_159[0x4] = _mm_mul_ps(temp0_148, temp0_156)
                float temp0_160[0x4] = _mm_add_ps(temp0_158, temp0_157)
                float temp0_161[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                var_248 = temp0_160
                float temp0_162[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
                float temp0_164[0x4] = _mm_sub_ps(temp0_159, _mm_mul_ps(temp0_161, temp0_162))
                float temp0_165[0x4] = _mm_add_ps(temp0_164, temp0_164)
                float temp0_166[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0xd2)
                float temp0_167[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0xc9)
                float temp0_168[0x4] = _mm_mul_ps(temp0_166, temp0_156)
                float temp0_169[0x4] = _mm_mul_ps(temp0_167, temp0_162)
                float temp0_170[0x4] = _mm_mul_ps(temp0_165, temp0_145)
                float temp0_171[0x4] = _mm_sub_ps(temp0_168, temp0_169)
                float var_228_3[0x4] = _mm_mul_ps(zmm13, zmm15)
                float var_238_3[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_171, _mm_add_ps(temp0_170, zmm5_1)), zmm8)
            else
                float temp0_11[0x4] = _mm_add_ps(zmm12, zmm12)
                float temp0_12[0x4] = _mm_shuffle_ps(zmm12, zmm12, 4)
                float temp0_13[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                _mm_mul_ps(zmm13, zmm15)
                float temp0_15[0x4] = _mm_mul_ps(zmm12, temp0_11)
                float temp0_17[0x4] = _mm_mul_ps(temp0_12, _mm_shuffle_ps(temp0_11, temp0_11, 0x29))
                float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xff), 
                    _mm_shuffle_ps(temp0_11, temp0_11, 0x12))
                float temp0_21[0x4] = _mm_add_ps(temp0_20, temp0_17)
                float temp0_22[0x4] = _mm_sub_ps(temp0_17, temp0_20)
                float temp0_25[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0x1a), 
                    _mm_shuffle_ps(temp0_15, temp0_15, 1))
                float temp0_26[0x4] = _mm_mul_ps(temp0_21, zmm13)
                float temp0_27[0x4] = _mm_mul_ps(temp0_13, temp0_22)
                zmm1_1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm14, temp0_25), zmm13), zmm5_1)
                float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, zmm1_1, 0x32)
                float temp0_33[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1_1, 0), temp0_31, 0x82)
                float temp0_34[0x4] = _mm_shuffle_ps(temp0_26, zmm1_1, 0x31)
                float temp0_35[0x4] = _mm_shuffle_ps(temp0_26, temp0_27, 0x12)
                float temp0_37[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, zmm1_1, 0x10), temp0_34, 0x88)
                float temp0_38[0x4] = _mm_shuffle_ps(temp0_35, zmm1_1, 0xe8)
                zmm1_1 = *rax_3
                zmm14[0].q = zmm8 u>> 0x40
                float temp0_39[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
                float temp0_40[0x4] = _mm_shuffle_ps(zmm8, zmm14, 0xc4)
                zmm5_1 = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                float temp0_42[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                float temp0_43[0x4] = _mm_mul_ps(temp0_39, zmm1_1)
                float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0x29), temp0_42)
                float temp0_46[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                float temp0_47[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x1a)
                float temp0_49[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0x12), temp0_46)
                float temp0_51[0x4] = _mm_add_ps(temp0_47, _mm_shuffle_ps(temp0_43, temp0_43, 1))
                float temp0_52[0x4] = _mm_add_ps(temp0_49, temp0_45)
                float temp0_53[0x4] = _mm_sub_ps(temp0_45, temp0_49)
                float temp0_54[0x4] = _mm_sub_ps(zmm14, temp0_51)
                float temp0_55[0x4] = _mm_mul_ps(temp0_52, zmm15)
                zmm5_1 = _mm_mul_ps(zmm5_1, temp0_53)
                zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_54, zmm15), data_143f51040)
                float temp0_59[0x4] = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32)
                float temp0_61[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_55, zmm1_1, 0), temp0_59, 0x82)
                float temp0_62[0x4] = _mm_shuffle_ps(temp0_55, zmm1_1, 0x31)
                float temp0_64[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_1, 0x10), temp0_62, 0x88)
                float temp0_65[0x4] = _mm_shuffle_ps(temp0_55, zmm5_1, 0x12)
                zmm5_1 = rax_3[1]
                float temp0_66[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
                float temp0_67[0x4] = _mm_shuffle_ps(temp0_65, zmm1_1, 0xe8)
                float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_38)
                float temp0_70[0x4] = _mm_mul_ps(temp0_66, temp0_37)
                zmm14[0].q = zmm5_1 u>> 0x40
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm14, 0xc4)
                float temp0_72[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
                float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xff), temp0_40)
                float temp0_76[0x4] = _mm_add_ps(temp0_70, _mm_mul_ps(temp0_72, temp0_33))
                float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0), temp0_33)
                float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_69)
                float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_38)
                float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_74)
                float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0x55), temp0_37)
                float temp0_85[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xff)
                float var_2c8[0x4] = temp0_82
                float temp0_86[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x55)
                float temp0_87[0x4] = _mm_add_ps(temp0_84, temp0_78)
                float temp0_88[0x4] = _mm_mul_ps(temp0_86, temp0_37)
                float temp0_89[0x4] = _mm_mul_ps(temp0_85, temp0_40)
                float temp0_90[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0)
                float temp0_91[0x4] = _mm_add_ps(temp0_87, temp0_81)
                float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_33)
                float temp0_94[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xaa), temp0_38)
                float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_89)
                float temp0_96[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
                float temp0_97[0x4] = _mm_add_ps(temp0_88, temp0_92)
                float temp0_98[0x4] = _mm_mul_ps(temp0_96, temp0_40)
                float temp0_99[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                int96_t var_2b8_1 = temp0_95[0].12
                float temp0_100[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                float temp0_101[0x4] = _mm_add_ps(temp0_97, temp0_94)
                float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_37)
                float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), temp0_38)
                float temp0_105[0x4] = _mm_mul_ps(temp0_99, temp0_33)
                float temp0_106[0x4] = _mm_add_ps(temp0_101, temp0_98)
                zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), temp0_40)
                float temp0_109[0x4] = _mm_add_ps(temp0_102, temp0_105)
                int96_t var_2a8_1 = temp0_106[0].12
                int96_t var_298_1 = _mm_add_ps(_mm_add_ps(temp0_109, temp0_104), zmm5_1)[0].12
                zmm11, zmm12, zmm13, zmm14 = sub_1407740e0(&var_2c8, 0x322bcc77)
                float zmm2_2[0x4] = var_2c8[0]
                float zmm1_2 = var_2c8[1]
                float zmm4_2[0x4] =
                    _mm_and_ps(_mm_cmpeq_ps(var_268_1, zmm11, 2), data_143f51100 ^ zmm14)
                uint32_t zmm0_2[0x4] = var_2c8[2]
                zmm4_2 ^= data_143f51100
                zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                zmm1_2 = zmm1_2 * zmm4_2[0]
                zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
                var_2c8[0] = zmm2_2[0]
                var_2c8[1] = zmm1_2
                float temp0_114[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                zmm1_2 = var_2b8_1:4.d * temp0_114[0]
                var_2c8[2] = zmm0_2[0]
                zmm0_2 = var_2b8_1:8.d
                zmm0_2[0] = zmm0_2[0] f* temp0_114[0]
                float zmm3_2 = var_2b8_1.d * temp0_114[0]
                zmm2_2 = var_2a8_1.d
                float temp0_115[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                var_2b8_1:4.d = zmm1_2
                var_2b8_1:8.d = zmm0_2[0]
                zmm0_2 = var_2a8_1:8.d
                zmm1_2 = var_2a8_1:4.d * temp0_115[0]
                zmm0_2[0] = zmm0_2[0] f* temp0_115[0]
                zmm2_2[0] = zmm2_2[0] * temp0_115[0]
                var_2a8_1:4.d = zmm1_2
                var_2a8_1:8.d = zmm0_2[0]
                var_2b8_1.d = zmm3_2
                var_2a8_1.d = zmm2_2[0]
                uint32_t var_278[0x4]
                sub_14077e4a0(&var_278, &var_2c8)
                uint32_t zmm5_2[0x4] = var_278
                zmm6 = data_143f50de0
                zmm8 = var_258
                uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                float var_228_2[0x4] = zmm11
                zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
                uint32_t zmm4_3[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
                zmm1_3 = _mm_rsqrt_ps(zmm4_3)
                float temp0_122[0x4] = _mm_mul_ps(zmm4_3, zmm6)
                float temp0_127[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), temp0_122)), 
                        zmm1_3), 
                    zmm1_3)
                float temp0_130[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_127, temp0_127), temp0_122))
                uint32_t zmm0_3[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_3, 2)
                float temp0_134[0x4] = _mm_add_ps(_mm_mul_ps(temp0_130, temp0_127), temp0_127)
                float temp0_135[0x4] = _mm_unpacklo_ps(var_298_1:4.d, 0)
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_134, zmm5_2) ^ data_143f50dd0, zmm0_3)
                    ^ data_143f50dd0
                float var_238_2[0x4] = _mm_unpacklo_ps(
                    _mm_unpacklo_ps(var_298_1.d, var_298_1:8.d[0].q), temp0_135[0].q)
                var_278 = zmm6
                var_248 = zmm6
            
            void* rcx_7 = arg1[2]
            void* rdi_1 = rcx_7
            void* rax_5 = *(rcx_7 + 8)
            
            if (rax_5 != 0)
                rdi_1 = rax_5
            
            result = sx.q(*(rcx_7 + 0x10))
            void* r15_1 = rdi_1 + (result << 3)
            
            if (rdi_1 != r15_1)
                while (true)
                    void var_288
                    char rax_7
                    rax_7, zmm8, zmm12, zmm13 =
                        sub_142273260(*rdi_1, sub_14226c680(&var_288, rsi), &var_248, nullptr)
                    *arg1[3] = rax_7
                    sub_14225b2b0(&var_288)
                    result = arg1[3]
                    
                    if (*result != 0)
                        break
                    
                    rdi_1 += 8
                    
                    if (rdi_1 == r15_1)
                        goto label_14220c7e4
                
                break
        
    label_14220c7e4:
        rsi += 8
    while (rsi != r12)
    
    rcx_1 = var_118

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
