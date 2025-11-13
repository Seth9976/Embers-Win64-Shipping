// 函数: sub_141a3a270
// 地址: 0x141a3a270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
sub_14229e040()
sub_1422acd20(&data_143f53590, arg2, arg3)
int64_t r14 = 0
void** rsi = arg2[0x1a]
void* result = &rsi[arg2[0x1b]]
uint64_t r13_1 = sx.q(arg2[0x1b].d) << 3 u>> 3

if (rsi u> result)
    r13_1 = 0

if (r13_1 != 0)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4] = zx.o(0)
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    
    do
        void* rdi_1 = *rsi
        int64_t rbx_1 = *(rdi_1 + 0xc8)
        uint32_t rcx_2
        rcx_2.b = (rbx_1 u>> 0x20).d == 0
        float var_188[0x4]
        float var_148[0x4]
        int128_t* rax_4
        float zmm1_1[0x4]
        
        if ((rcx_2.b & sub_140b5b8a0(rbx_1.d, 0)) == 0)
            rax_4 = sub_141a52d40(arg1, &var_188, arg2, rbx_1)
        else
            rax_4 = &var_148
            zmm1_1 = data_143dbb0d0
            var_148 = data_143dbb0c0
            float var_128_1[0x4] = data_143dbb0e0
            float var_138_1[0x4] = zmm1_1
        
        zmm1_1 = data_143f2a080
        zmm14 = rax_4[2]
        float zmm5_1[0x4] = *arg3
        zmm7 = arg3[2]
        zmm6 = *rax_4
        zmm12 = rax_4[1]
        float var_1c8_1[0x4] = zmm1_1
        int32_t var_1d8
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm7), zmm1_1, 1)) == 0)
            float temp0_133[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
            float temp0_134[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x1b)
            float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_134)
            float temp0_137[0x4] = _mm_mul_ps(zmm12, zmm7)
            float temp0_138[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_139[0x4] = __mulps_xmmps_memps(temp0_136, data_143f2a040)
            float temp0_140[0x4] = _mm_mul_ps(temp0_138, zmm6)
            float temp0_141[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
            zmm13 = _mm_mul_ps(zmm14, zmm7)
            float temp0_143[0x4] = _mm_add_ps(temp0_139, temp0_140)
            float temp0_145[0x4] = _mm_mul_ps(temp0_133, _mm_shuffle_ps(zmm6, zmm6, 0x4e))
            float temp0_148[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), _mm_shuffle_ps(zmm6, zmm6, 0xb1))
            float temp0_149[0x4] = __mulps_xmmps_memps(temp0_145, data_143f2a030)
            float temp0_150[0x4] = __mulps_xmmps_memps(temp0_148, data_143f2a020)
            float temp0_151[0x4] = _mm_add_ps(temp0_143, temp0_149)
            float temp0_152[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_153[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            float temp0_154[0x4] = _mm_mul_ps(temp0_141, temp0_153)
            _mm_add_ps(temp0_151, temp0_150)
            float temp0_158[0x4] = _mm_sub_ps(temp0_154, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_152))
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
            float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_138)
            zmm6 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), 
                arg3[1])
        else
            zmm10 = data_143f29fc0
            float temp0_4[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
            zmm8 = arg3[1]
            float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_8[0x4] = _mm_mul_ps(zmm5_1, temp0_4)
            float temp0_10[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
            float temp0_13[0x4] = _mm_mul_ps(temp0_7, temp0_11)
            float temp0_15[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
            _mm_mul_ps(zmm14, zmm7)
            float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_10)
            float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_13)
            float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_15)
            float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm7)
            float temp0_21[0x4] = _mm_mul_ps(temp0_6, temp0_18)
            float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm7)
            float temp0_23[0x4] = _mm_add_ps(zmm6, zmm6)
            zmm1_1 = __andps_xmmxud_memxud(temp0_22, data_143f29fd0)
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x32)
            float temp0_27[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1_1, 0), temp0_25, 0x82)
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1_1, 0x31)
            float temp0_30[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0x10), temp0_28, 0x88)
            float temp0_31[0x4] = _mm_mul_ps(zmm6, temp0_23)
            float temp0_33[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1_1, 0xe8)
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x29)
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_35[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float temp0_37[0x4] = _mm_mul_ps(temp0_34, _mm_shuffle_ps(zmm6, zmm6, 4))
            float temp0_38[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x1a)
            float temp0_39[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_41[0x4] = _mm_add_ps(temp0_38, _mm_shuffle_ps(temp0_31, temp0_31, 1))
            float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x12), temp0_39)
            float temp0_44[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
            float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_37)
            float temp0_46[0x4] = _mm_sub_ps(temp0_37, temp0_43)
            float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm14)
            float temp0_48[0x4] = _mm_mul_ps(temp0_44, temp0_46)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_41), zmm14), 
                data_143f29fd0)
            float temp0_52[0x4] = _mm_shuffle_ps(temp0_48, zmm1_1, 0x32)
            float temp0_54[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1_1, 0), temp0_52, 0x82)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_47, zmm1_1, 0x31)
            float temp0_57[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1_1, 0x10), temp0_55, 0x88)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_47, temp0_48, 0x12)
            float temp0_59[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, zmm1_1, 0xe8)
            float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_30)
            float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_33)
            zmm10[0].q = zmm12 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(zmm12, zmm10, 0xc4)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_35)
            float temp0_69[0x4] = _mm_add_ps(temp0_61, _mm_mul_ps(temp0_65, temp0_27))
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_27)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_33)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_30)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
            var_188 = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_35)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_33)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_35)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            int96_t var_178_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_33)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_35)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
            int96_t var_168_1 = temp0_99[0].12
            int96_t var_158_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            zmm10, zmm13, zmm15 = sub_1407740e0(&var_188, 0x322bcc77)
            float zmm2_1[0x4] = var_188[0]
            float zmm1_2 = var_188[1]
            float zmm4_2[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(var_1c8_1, zmm13, 2), data_143f2a070 ^ zmm10)
            uint32_t zmm0_2[0x4] = var_188[2]
            zmm4_2 ^= data_143f2a070
            zmm2_1[0] = zmm2_1[0] * zmm4_2[0]
            zmm1_2 = zmm1_2 * zmm4_2[0]
            var_188[0] = zmm2_1[0]
            zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
            var_188[1] = zmm1_2
            float temp0_107[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
            zmm1_2 = var_178_1:4.d * temp0_107[0]
            var_188[2] = zmm0_2[0]
            zmm0_2 = var_178_1:8.d
            zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
            float zmm3_1 = var_178_1.d * temp0_107[0]
            zmm2_1 = var_168_1.d
            float temp0_108[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
            var_178_1:4.d = zmm1_2
            var_178_1:8.d = zmm0_2[0]
            zmm0_2 = var_168_1:8.d
            zmm1_2 = var_168_1:4.d * temp0_108[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
            zmm2_1[0] = zmm2_1[0] * temp0_108[0]
            var_168_1:4.d = zmm1_2
            var_168_1:8.d = zmm0_2[0]
            var_178_1.d = zmm3_1
            var_168_1.d = zmm2_1[0]
            uint32_t var_1a8[0x4]
            sub_14077e4a0(&var_1a8, &var_188)
            uint32_t zmm5_2[0x4] = var_1a8
            zmm8 = data_143f2a060
            float temp0_109[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            var_1d8 = 0x322bcc77
            float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
            float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
            float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
            float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm8)
            float temp0_120[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                    temp0_114), 
                temp0_114)
            float temp0_123[0x4] =
                _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
            float temp0_125[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_158_1:4.d, 0)
            zmm8 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_2) ^ data_143f2a050, temp0_125)
                ^ data_143f2a050
            zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_1.d, var_158_1:8.d[0].q), temp0_128[0].q)
            var_1a8 = zmm8
        
        char rax_6 = *(rdi_1 + 0x14c)
        zmm9 = zmm13
        float var_1c8_2[0x4] = zmm6
        
        if ((rax_6 & 4) != 0)
            var_1c8_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143dbb1f8, data_143dbb200[0].q), 
                _mm_unpacklo_ps(data_143dbb1fc, 0)[0].q)
        
        if ((rax_6 & 8) != 0)
            data_14399f720
        
        if ((rax_6 & 0x10) != 0)
            zmm13 = data_142e6da00
            zmm9 = zmm13
        
        uint128_t var_118
        zmm6, zmm7, zmm8 = sub_141a53150(arg1, &var_118, rdi_1)
        zmm12 = data_143f29fc0
        zmm14 = data_143f2a080
        float zmm5_3[0x4] = data_143f29fd0
        zmm12[0].q = zmm15 u>> 0x40
        var_148 = _mm_shuffle_ps(zmm15, zmm12, 0xc4)
        float var_138_2[0x4] = zmm15
        float var_128_2[0x4] = _mm_and_ps(zmm12, zmm5_3)
        float var_f8[0x4]
        float zmm3[0x4]
        float var_108[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_f8, zmm13), zmm14, 1)) == 0)
            float zmm2[0x4] = var_118
            float temp0_306[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
            float temp0_308[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_306)
            float temp0_309[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            float temp0_310[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
            float temp0_311[0x4] = _mm_mul_ps(zmm2, temp0_310)
            float temp0_312[0x4] = __mulps_xmmps_memps(temp0_308, data_143f2a040)
            float temp0_313[0x4] = _mm_mul_ps(var_108, zmm9)
            float temp0_314[0x4] = _mm_mul_ps(var_f8, zmm9)
            float temp0_315[0x4] = _mm_add_ps(temp0_312, temp0_311)
            float temp0_317[0x4] = _mm_mul_ps(temp0_309, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            float temp0_320[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            float temp0_321[0x4] = __mulps_xmmps_memps(temp0_317, data_143f2a030)
            float temp0_322[0x4] = _mm_shuffle_ps(temp0_313, temp0_313, 0xd2)
            float temp0_323[0x4] = __mulps_xmmps_memps(temp0_320, data_143f2a020)
            float var_128_4[0x4] = temp0_314
            float temp0_325[0x4] = _mm_add_ps(_mm_add_ps(temp0_315, temp0_321), temp0_323)
            float temp0_326[0x4] = _mm_shuffle_ps(temp0_313, temp0_313, 0xc9)
            var_148 = temp0_325
            zmm3 = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
            float temp0_328[0x4] = _mm_mul_ps(temp0_326, zmm3)
            float temp0_329[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_331[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_322, temp0_329), temp0_328)
            float temp0_332[0x4] = _mm_add_ps(temp0_331, temp0_331)
            float temp0_333[0x4] = _mm_mul_ps(temp0_310, temp0_332)
            float temp0_335[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_332, temp0_332, 0xd2), temp0_329)
            float temp0_336[0x4] = _mm_shuffle_ps(temp0_332, temp0_332, 0xc9)
            float temp0_337[0x4] = _mm_add_ps(temp0_333, temp0_313)
            zmm1_1 = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(temp0_335, _mm_mul_ps(temp0_336, zmm3)), temp0_337), zmm6)
            float var_138_4[0x4] = zmm1_1
        else
            float temp0_177[0x4] = _mm_shuffle_ps(zmm8, zmm8, 4)
            float temp0_178[0x4] = _mm_add_ps(zmm8, zmm8)
            float temp0_179[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
            _mm_mul_ps(zmm13, var_f8)
            float temp0_182[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0x29), temp0_177)
            float temp0_183[0x4] = _mm_mul_ps(temp0_178, zmm8)
            float temp0_186[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0x12), 
                _mm_shuffle_ps(zmm8, zmm8, 0xff))
            float temp0_189[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_183, temp0_183, 0x1a), 
                _mm_shuffle_ps(temp0_183, temp0_183, 1))
            float temp0_190[0x4] = _mm_add_ps(temp0_186, temp0_182)
            float temp0_191[0x4] = _mm_sub_ps(temp0_182, temp0_186)
            float temp0_192[0x4] = _mm_mul_ps(temp0_190, zmm13)
            float temp0_193[0x4] = _mm_mul_ps(temp0_179, temp0_191)
            zmm1_1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm12, temp0_189), zmm13), zmm5_3)
            float temp0_197[0x4] = _mm_shuffle_ps(temp0_193, zmm1_1, 0x32)
            float temp0_199[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_192, zmm1_1, 0), temp0_197, 0x82)
            float temp0_200[0x4] = _mm_shuffle_ps(temp0_192, zmm1_1, 0x31)
            float temp0_202[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_193, zmm1_1, 0x10), temp0_200, 0x88)
            float temp0_204[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_192, temp0_193, 0x12), zmm1_1, 0xe8)
            zmm1_1 = var_118
            zmm12[0].q = var_1c8_2 u>> 0x40
            float temp0_205[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
            float temp0_206[0x4] = _mm_shuffle_ps(var_1c8_2, zmm12, 0xc4)
            float temp0_207[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xc9)
            float temp0_208[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
            float temp0_209[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
            float temp0_210[0x4] = _mm_mul_ps(zmm1_1, temp0_205)
            float temp0_212[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_205, temp0_205, 0x29), temp0_208)
            float temp0_214[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_205, temp0_205, 0x12), temp0_209)
            float temp0_217[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_210, temp0_210, 0x1a), 
                _mm_shuffle_ps(temp0_210, temp0_210, 1))
            float temp0_218[0x4] = _mm_add_ps(temp0_214, temp0_212)
            float temp0_219[0x4] = _mm_sub_ps(temp0_212, temp0_214)
            float temp0_220[0x4] = _mm_sub_ps(zmm12, temp0_217)
            float temp0_221[0x4] = _mm_mul_ps(temp0_218, var_f8)
            float temp0_222[0x4] = _mm_mul_ps(temp0_207, temp0_219)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_220, var_f8), data_143f29fd0)
            float temp0_225[0x4] = _mm_shuffle_ps(temp0_222, zmm1_1, 0x32)
            float temp0_227[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_221, zmm1_1, 0), temp0_225, 0x82)
            float temp0_230[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_222, zmm1_1, 0x10), 
                _mm_shuffle_ps(temp0_221, zmm1_1, 0x31), 0x88)
            float temp0_232[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0x55), temp0_202)
            float temp0_234[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_221, temp0_222, 0x12), zmm1_1, 0xe8)
            float temp0_236[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xaa), temp0_204)
            zmm12[0].q = var_108 u>> 0x40
            float temp0_237[0x4] = _mm_shuffle_ps(var_108, zmm12, 0xc4)
            float temp0_238[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0)
            float temp0_240[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xff), temp0_206)
            float temp0_242[0x4] = _mm_add_ps(temp0_232, _mm_mul_ps(temp0_238, temp0_199))
            float temp0_244[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0), temp0_199)
            float temp0_245[0x4] = _mm_add_ps(temp0_242, temp0_236)
            float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0xaa), temp0_204)
            float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_240)
            float temp0_250[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0x55), temp0_202)
            float temp0_251[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0xff)
            var_188 = temp0_248
            float temp0_252[0x4] = _mm_shuffle_ps(temp0_234, temp0_234, 0x55)
            float temp0_253[0x4] = _mm_add_ps(temp0_250, temp0_244)
            float temp0_254[0x4] = _mm_mul_ps(temp0_252, temp0_202)
            float temp0_255[0x4] = _mm_mul_ps(temp0_251, temp0_206)
            float temp0_256[0x4] = _mm_shuffle_ps(temp0_234, temp0_234, 0)
            float temp0_257[0x4] = _mm_add_ps(temp0_253, temp0_247)
            float temp0_258[0x4] = _mm_mul_ps(temp0_256, temp0_199)
            float temp0_260[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_234, temp0_234, 0xaa), temp0_204)
            float temp0_261[0x4] = _mm_add_ps(temp0_257, temp0_255)
            float temp0_262[0x4] = _mm_shuffle_ps(temp0_234, temp0_234, 0xff)
            float temp0_263[0x4] = _mm_add_ps(temp0_254, temp0_258)
            float temp0_264[0x4] = _mm_mul_ps(temp0_262, temp0_206)
            float temp0_265[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0)
            int96_t var_178_2 = temp0_261[0].12
            float temp0_266[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0x55)
            float temp0_267[0x4] = _mm_add_ps(temp0_263, temp0_260)
            float temp0_268[0x4] = _mm_mul_ps(temp0_266, temp0_202)
            float temp0_270[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_237, temp0_237, 0xaa), temp0_204)
            float temp0_271[0x4] = _mm_mul_ps(temp0_265, temp0_199)
            float temp0_272[0x4] = _mm_add_ps(temp0_267, temp0_264)
            float temp0_274[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_237, temp0_237, 0xff), temp0_206)
            float temp0_275[0x4] = _mm_add_ps(temp0_268, temp0_271)
            int96_t var_168_2 = temp0_272[0].12
            int96_t var_158_2 = _mm_add_ps(_mm_add_ps(temp0_275, temp0_270), temp0_274)[0].12
            zmm10, zmm12, zmm14, zmm15 = sub_1407740e0(&var_188, 0x322bcc77)
            float zmm2_2[0x4] = var_188[0]
            float zmm1_3 = var_188[1]
            zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm10, 2), data_143f2a070 ^ zmm12)
            uint32_t zmm0_4[0x4] = var_188[2]
            zmm14 ^= data_143f2a070
            zmm2_2[0] = zmm2_2[0] * zmm14[0]
            zmm1_3 = zmm1_3 * zmm14[0]
            zmm0_4[0] = zmm0_4[0] f* zmm14[0]
            var_188[0] = zmm2_2[0]
            float temp0_280[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
            var_188[2] = zmm0_4[0]
            zmm0_4 = var_178_2:8.d
            zmm0_4[0] = zmm0_4[0] f* temp0_280[0]
            var_188[1] = zmm1_3
            zmm1_3 = var_178_2:4.d * temp0_280[0]
            float zmm3_3 = var_178_2.d * temp0_280[0]
            zmm2_2 = var_168_2.d
            var_178_2:8.d = zmm0_4[0]
            zmm0_4 = var_168_2:8.d
            var_178_2:4.d = zmm1_3
            float temp0_281[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
            zmm0_4[0] = zmm0_4[0] f* temp0_281[0]
            zmm2_2[0] = zmm2_2[0] * temp0_281[0]
            zmm1_3 = var_168_2:4.d * temp0_281[0]
            var_168_2:8.d = zmm0_4[0]
            var_178_2.d = zmm3_3
            var_168_2.d = zmm2_2[0]
            var_168_2:4.d = zmm1_3
            uint32_t var_198[0x4]
            sub_14077e4a0(&var_198, &var_188)
            uint32_t zmm5_4[0x4] = var_198
            zmm6 = data_143f2a060
            float temp0_282[0x4] = _mm_mul_ps(zmm5_4, zmm5_4)
            var_1d8 = 0x322bcc77
            float var_128_3[0x4] = zmm10
            float temp0_284[0x4] = _mm_add_ps(temp0_282, _mm_shuffle_ps(temp0_282, temp0_282, 0x4e))
            float temp0_286[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_284, temp0_284, 0x39), temp0_284)
            float temp0_287[0x4] = _mm_rsqrt_ps(temp0_286)
            float temp0_288[0x4] = _mm_mul_ps(temp0_286, zmm6)
            float temp0_293[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_287, temp0_287), temp0_288)), 
                    temp0_287), 
                temp0_287)
            zmm1_1 = zx.o(0)
            float temp0_296[0x4] =
                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_293, temp0_293), temp0_288))
            float temp0_298[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_286, 2)
            float temp0_300[0x4] = _mm_add_ps(_mm_mul_ps(temp0_296, temp0_293), temp0_293)
            float temp0_301[0x4] = _mm_unpacklo_ps(var_158_2:4.d, 0)
            zmm6 = _mm_and_ps(_mm_mul_ps(temp0_300, zmm5_4) ^ data_143f2a050, temp0_298)
                ^ data_143f2a050
            zmm3 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_2.d, var_158_2:8.d[0].q), temp0_301[0].q)
            float var_138_3[0x4] = zmm3
            var_198 = zmm6
            var_148 = zmm6
        result = sub_141a3a270(arg1, zmm1_1, &var_148, zmm3, var_1d8)
        rsi = &rsi[1]
        r14 += 1
    while (r14 != r13_1)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
