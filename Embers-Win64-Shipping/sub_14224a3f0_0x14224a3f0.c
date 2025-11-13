// 函数: sub_14224a3f0
// 地址: 0x14224a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
float zmm9[0x4]
float var_88[0x4] = zmm9
float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm11[0x4]
float var_a8[0x4] = zmm11
float zmm12[0x4]
float var_b8[0x4] = zmm12
void var_918
int64_t rax_1 = __security_cookie ^ &var_918
float zmm1[0x4] = arg2[2]
int32_t i_3 = 0
float zmm6[0x4] = data_143f515a0
float zmm14[0x4] = data_143f515b0
uint32_t zmm13[0x4] = data_143f515c0
int64_t rax_2 = sx.q(arg8)
uint32_t zmm7[0x4] = _mm_and_ps(zmm14, zmm13)
int32_t r15 = 0
float var_8bc = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
int128_t zmm15 = zx.o(0)
float var_8c0 = zmm1[0]
float var_8b8 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
float zmm5[0x4] = *arg2
float var_868[0x4] = zmm5
float zmm8[0x4] = arg2[1]
float temp0_3[0x4] = _mm_mul_ps(zmm5, zmm5)
float (* var_888)[0x4] = arg4
float var_858[0x4] = zmm8
uint32_t var_848[0x4] = zmm7
float temp0_5[0x4] = _mm_add_ps(temp0_3, _mm_shuffle_ps(temp0_3, temp0_3, 0x4e))
float var_8a8[0x4] = zmm8
float temp0_7[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x39), temp0_5)
float temp0_8[0x4] = _mm_rsqrt_ps(temp0_7)
float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm6)
float temp0_14[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_8, temp0_8), temp0_9)), temp0_8), 
    temp0_8)
float temp0_17[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_14, temp0_14), temp0_9))
float temp0_18[0x4] = _mm_cmpeq_ps(data_143f51a10, temp0_7, 2)
zmm6 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_17, temp0_14), temp0_14), zmm5) ^ data_143f51590, 
    temp0_18) ^ data_143f51590
float var_868_1[0x4] = zmm6
float (* var_8f8)[0x4]
char var_8f0
uint32_t var_898[0x4]
uint32_t var_878[0x4]
float zmm2[0x4]
float zmm4[0x4]

if (arg1[1].d s<= 0)
    zmm12 = var_8a8
else
    zmm9 = 0x7fffffff
    int64_t rbx_1 = 0
    
    while (true)
        int64_t rax_3 = *arg1
        zmm11 = var_8c0
        zmm14[0].q = zx.o(0) u>> 0x40
        zmm1 = data_143f519a0
        float temp0_23[0x4] = _mm_shuffle_ps(zx.o(0), zmm14, 0xc4)
        zmm12 = _mm_and_ps(zmm14, zmm13)
        float var_5d8[0x4] = temp0_23
        zmm2 = *(rax_3 + rbx_1 + 0x34)
        float temp0_25[0x4] =
            _mm_unpacklo_ps(*(rax_3 + rbx_1 + 0x30), (*(rax_3 + rbx_1 + 0x38))[0].q)
        float temp0_26[0x4] = _mm_unpacklo_ps(zmm11, var_8b8[0].q)
        float temp0_28[0x4] = _mm_unpacklo_ps(temp0_25, _mm_unpacklo_ps(zmm2, zmm15.q)[0].q)
        float temp0_29[0x4] = _mm_min_ps(zmm12, zmm7)
        float temp0_30[0x4] = _mm_unpacklo_ps(var_8bc, zmm15.q)
        uint32_t temp0_32 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_29, zmm1, 1))
        float temp0_34[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_26, temp0_30[0].q), temp0_28)
        float var_5b8_1[0x4] = zmm12
        var_878 = zmm1
        float var_5c8_1[0x4] = temp0_34
        
        if (temp0_32 == 0)
            float temp0_164[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_166[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x1b), temp0_164)
            float temp0_167[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x4e)
            float temp0_168[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_169[0x4] = _mm_mul_ps(temp0_23, temp0_168)
            float temp0_170[0x4] = __mulps_xmmps_memps(temp0_166, data_143f51580)
            float temp0_171[0x4] = _mm_mul_ps(temp0_34, zmm7)
            float temp0_172[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xb1)
            float temp0_173[0x4] = _mm_add_ps(temp0_170, temp0_169)
            float temp0_174[0x4] = _mm_mul_ps(zmm12, zmm7)
            float temp0_176[0x4] = _mm_mul_ps(temp0_167, _mm_shuffle_ps(zmm6, zmm6, 0x55))
            float temp0_178[0x4] = _mm_mul_ps(temp0_172, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
            float temp0_179[0x4] = __mulps_xmmps_memps(temp0_176, data_143f51570)
            float temp0_180[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0xc9)
            float temp0_181[0x4] = __mulps_xmmps_memps(temp0_178, data_143f51560)
            float temp0_182[0x4] = _mm_add_ps(temp0_173, temp0_179)
            float var_5b8_3[0x4] = temp0_174
            float temp0_183[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0xd2)
            var_5d8 = _mm_add_ps(temp0_182, temp0_181)
            float temp0_185[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            float temp0_186[0x4] = _mm_mul_ps(temp0_180, temp0_185)
            float temp0_187[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_189[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_183, temp0_187), temp0_186)
            float temp0_190[0x4] = _mm_add_ps(temp0_189, temp0_189)
            float temp0_191[0x4] = _mm_mul_ps(temp0_168, temp0_190)
            float temp0_193[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_190, temp0_190, 0xd2), temp0_187)
            float temp0_194[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0xc9)
            float temp0_195[0x4] = _mm_add_ps(temp0_191, temp0_171)
            zmm4 = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(temp0_193, _mm_mul_ps(temp0_194, temp0_185)), temp0_195), 
                zmm8)
        else
            float temp0_35[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
            float temp0_36[0x4] = _mm_add_ps(zmm6, zmm6)
            float temp0_37[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_38[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            _mm_mul_ps(zmm12, zmm7)
            float temp0_40[0x4] = _mm_mul_ps(zmm6, temp0_36)
            float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x29), temp0_35)
            float temp0_43[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x12)
            float temp0_44[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x1a)
            float temp0_45[0x4] = _mm_mul_ps(temp0_43, temp0_38)
            float temp0_47[0x4] = _mm_add_ps(temp0_44, _mm_shuffle_ps(temp0_40, temp0_40, 1))
            float temp0_48[0x4] = _mm_add_ps(temp0_45, temp0_42)
            float temp0_49[0x4] = _mm_sub_ps(temp0_42, temp0_45)
            float temp0_50[0x4] = _mm_add_ps(temp0_23, temp0_23)
            float temp0_51[0x4] = _mm_mul_ps(temp0_48, zmm7)
            float temp0_52[0x4] = _mm_mul_ps(temp0_37, temp0_49)
            float temp0_53[0x4] = _mm_sub_ps(zmm14, temp0_47)
            float temp0_54[0x4] = _mm_mul_ps(temp0_23, temp0_50)
            zmm1 = _mm_and_ps(_mm_mul_ps(temp0_53, zmm7), zmm13)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_52, zmm1, 0x32)
            float temp0_59[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, zmm1, 0), temp0_57, 0x82)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_51, zmm1, 0x31)
            zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, zmm1, 0x10), temp0_60, 0x88)
            float temp0_64[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, temp0_52, 0x12), zmm1, 0xe8)
            zmm14[0].q = var_8a8 u>> 0x40
            float temp0_65[0x4] = _mm_shuffle_ps(var_8a8, zmm14, 0xc4)
            var_8a8 = temp0_65
            float var_428_1[0x4] = temp0_65
            float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0x29), 
                _mm_shuffle_ps(temp0_23, temp0_23, 4))
            float temp0_71[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0x1a), 
                _mm_shuffle_ps(temp0_54, temp0_54, 1))
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0x12), 
                _mm_shuffle_ps(temp0_23, temp0_23, 0xff))
            float temp0_75[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
            float var_458_1[0x4] = temp0_59
            uint32_t var_448_1[0x4] = zmm7
            float var_438_1[0x4] = temp0_64
            float temp0_76[0x4] = _mm_add_ps(temp0_74, temp0_68)
            float temp0_77[0x4] = _mm_sub_ps(temp0_68, temp0_74)
            float temp0_78[0x4] = _mm_mul_ps(temp0_76, zmm12)
            float temp0_79[0x4] = _mm_mul_ps(temp0_75, temp0_77)
            zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm14, temp0_71), zmm12), zmm13)
            float temp0_85[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_78, zmm1, 0), 
                _mm_shuffle_ps(temp0_79, zmm1, 0x32), 0x82)
            float var_418_1[0x4] = temp0_85
            float temp0_86[0x4] = _mm_shuffle_ps(temp0_78, zmm1, 0x31)
            float temp0_87[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0x55)
            float temp0_89[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_79, zmm1, 0x10), temp0_86, 0x88)
            float temp0_90[0x4] = _mm_mul_ps(temp0_87, zmm7)
            zmm14[0].q = temp0_34 u>> 0x40
            float temp0_91[0x4] = _mm_shuffle_ps(temp0_34, zmm14, 0xc4)
            float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0), temp0_59)
            float temp0_95[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_78, temp0_79, 0x12), zmm1, 0xe8)
            float temp0_96[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)
            float temp0_97[0x4] = _mm_add_ps(temp0_90, temp0_93)
            float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0xff), var_8a8)
            float temp0_100[0x4] = _mm_mul_ps(temp0_96, temp0_64)
            float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0), temp0_59)
            float temp0_103[0x4] = _mm_add_ps(temp0_97, temp0_100)
            float var_408_1[0x4] = temp0_89
            float var_3f8_1[0x4] = temp0_95
            float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0xaa), temp0_64)
            float temp0_106[0x4] = _mm_add_ps(temp0_103, temp0_99)
            float var_3e8_1[0x4] = temp0_91
            float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0x55), zmm7)
            float var_7e8[0x4] = temp0_106
            float temp0_110[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0x55), zmm7)
            float temp0_111[0x4] = _mm_add_ps(temp0_108, temp0_102)
            float temp0_113[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0xff), var_8a8)
            float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0), temp0_59)
            float temp0_116[0x4] = _mm_add_ps(temp0_111, temp0_105)
            float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xaa), temp0_64)
            float temp0_119[0x4] = _mm_add_ps(temp0_110, temp0_115)
            float temp0_120[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xff)
            float temp0_121[0x4] = _mm_add_ps(temp0_116, temp0_113)
            float temp0_122[0x4] = _mm_mul_ps(temp0_120, var_8a8)
            float temp0_123[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0)
            float temp0_124[0x4] = _mm_add_ps(temp0_119, temp0_118)
            float temp0_125[0x4] = _mm_mul_ps(temp0_123, temp0_59)
            int96_t var_7d8_1 = temp0_121[0].12
            float temp0_126[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xaa)
            float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0x55), zmm7)
            float temp0_129[0x4] = _mm_add_ps(temp0_124, temp0_122)
            float temp0_130[0x4] = _mm_mul_ps(temp0_126, temp0_64)
            float temp0_131[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xff)
            float temp0_132[0x4] = _mm_add_ps(temp0_128, temp0_125)
            float temp0_133[0x4] = _mm_mul_ps(temp0_131, var_8a8)
            int96_t var_7c8_1 = temp0_129[0].12
            int96_t var_7b8_1 = _mm_add_ps(_mm_add_ps(temp0_132, temp0_130), temp0_133)[0].12
            float zmm10_1[0x4]
            int128_t zmm14_1
            int64_t zmm15_1
            zmm10_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_7e8, 0x322bcc77)
            uint32_t zmm0_1[0x4] = data_143f51990
            uint32_t zmm4_1[0x4] = _mm_cmpeq_ps(var_878, zmm10_1, 2)
            uint32_t zmm2_1[0x4] = var_7e8[0]
            float zmm1_1 = var_7e8[1]
            zmm4_1 = _mm_and_ps(zmm4_1, zmm0_1 ^ zmm14_1) ^ data_143f51990
            zmm0_1 = var_7e8[2]
            zmm2_1[0] = zmm2_1[0] f* zmm4_1[0]
            zmm1_1 = zmm1_1 f* zmm4_1[0]
            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
            var_7e8[0] = zmm2_1[0]
            zmm2_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            var_7e8[1] = zmm1_1
            zmm1_1 = var_7d8_1:4.d f* zmm2_1[0]
            var_7e8[2] = zmm0_1[0]
            zmm0_1 = var_7d8_1:8.d
            zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
            float zmm3_1 = var_7d8_1.d f* zmm2_1[0]
            zmm2_1 = var_7c8_1.d
            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
            var_7d8_1:4.d = zmm1_1
            var_7d8_1:8.d = zmm0_1[0]
            zmm0_1 = var_7c8_1:8.d
            zmm1_1 = var_7c8_1:4.d f* zmm4_1[0]
            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
            zmm2_1[0] = zmm2_1[0] f* zmm4_1[0]
            var_7c8_1:4.d = zmm1_1
            var_7c8_1:8.d = zmm0_1[0]
            var_7d8_1.d = zmm3_1
            var_7c8_1.d = zmm2_1[0]
            sub_14077e4a0(&var_898, &var_7e8)
            uint32_t zmm5_1[0x4] = var_898
            float zmm6_1[0x4] = data_143f515a0
            zmm9 = 0x7fffffff
            arg4 = var_888
            float temp0_140[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
            var_8a8[0] = 0x322bcc77
            float var_5b8_2[0x4] = zmm10_1
            float temp0_142[0x4] = _mm_add_ps(temp0_140, _mm_shuffle_ps(temp0_140, temp0_140, 0x4e))
            float temp0_144[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_142, temp0_142, 0x39), temp0_142)
            float temp0_145[0x4] = _mm_rsqrt_ps(temp0_144)
            float temp0_146[0x4] = _mm_mul_ps(temp0_144, zmm6_1)
            float temp0_151[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_145, temp0_145), temp0_146)), 
                    temp0_145), 
                temp0_145)
            float temp0_154[0x4] =
                _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_151, temp0_151), temp0_146))
            float temp0_156[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_144, 2)
            float temp0_158[0x4] = _mm_add_ps(_mm_mul_ps(temp0_154, temp0_151), temp0_151)
            float temp0_159[0x4] = _mm_unpacklo_ps(var_7b8_1:4.d, zmm15_1)
            zmm6_1 = _mm_and_ps(_mm_mul_ps(temp0_158, zmm5_1) ^ data_143f51590, temp0_156)
                ^ data_143f51590
            zmm4 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_7b8_1.d, var_7b8_1:8.d[0].q), temp0_159[0].q)
            var_898 = zmm6_1
            var_5d8 = zmm6_1
        
        float var_5c8_2[0x4] = zmm4
        
        if (arg6 == 0)
            void* rax_6 = arg9[0xc]
            void* rdx_2 = &arg9[0xa]
            
            if (rax_6 != 0)
                rdx_2 = rax_6
            
            var_8f8.d = arg_18
            zmm9, zmm15 =
                sub_1422476f0((sx.q(r15) << 6) + *arg1, *(rdx_2 + (rax_2 << 3)), &var_5d8, &var_8c0)
        else
            int64_t rax_5 = *arg1
            zmm2 = var_8c0
            float zmm0[0x4] = _mm_and_ps(var_8bc, zmm9)
            float temp0_202[0x4] = _mm_min_ss(_mm_and_ps(zmm2, zmm9)[0], zmm0[0])
            float temp0_203[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            zmm1 = _mm_and_ps(var_8b8, zmm9)
            char var_8e8_1 = 0
            var_8f0 = 0
            float temp0_205[0x4] = _mm_min_ss(temp0_202[0], zmm1[0])
            temp0_205[0] = temp0_205[0] f* *(rax_5 + rbx_1 + 0x3c)
            float var_69c = zmm4[0]
            float temp0_206[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
            float var_6a8 = temp0_205[0]
            float var_6a4_1 = temp0_205[0]
            float var_6a0_1 = temp0_205[0]
            float var_698_1 = temp0_203[0]
            float var_694_1 = temp0_206[0]
            zmm9, zmm15 =
                sub_1422a1910(&var_69c, &var_6a8, 0x10, 8, arg4, var_8f0, var_8e8_1, rax_2.d, arg9)
        
        zmm7 = var_848
        r15 += 1
        zmm6 = var_868_1
        rbx_1 += 0x40
        zmm14 = data_143f515b0
        
        if (r15 s>= arg1[1].d)
            break
        
        zmm8 = var_858
        zmm13 = data_143f515c0
        arg4 = var_888
        var_8a8 = zmm8
    
    zmm12 = var_858
    i_3 = 0

int32_t i = 0
char rbx_3

if (arg1[3].d s<= 0)
    rbx_3 = arg6
else
    int64_t r15_1 = 0
    
    do
        void* rbx_2 = arg1[2]
        float var_578[0x4]
        sub_140ade170(rbx_2 + 0x3c + r15_1, &var_578)
        float zmm1_2[0x4] = data_143f519a0
        float zmm7_1[0x4] = var_578
        float zmm6_2[0x4] = data_14399f668
        zmm14 = var_8c0
        float var_668[0x4] = zmm7_1
        float zmm2_2[0x4] = *(r15_1 + rbx_2 + 0x34)
        float temp0_207[0x4] =
            _mm_unpacklo_ps(*(r15_1 + rbx_2 + 0x30), (*(r15_1 + rbx_2 + 0x38))[0].q)
        float zmm0_2[0x4] = data_14399f670
        float temp0_209[0x4] = _mm_unpacklo_ps(temp0_207, _mm_unpacklo_ps(zmm2_2, zmm15.q)[0].q)
        zmm2_2 = data_14399f66c
        float temp0_210[0x4] = _mm_unpacklo_ps(zmm6_2, zmm0_2[0].q)
        float temp0_211[0x4] = _mm_unpacklo_ps(zmm14, var_8b8[0].q)
        float temp0_213[0x4] = _mm_unpacklo_ps(temp0_210, _mm_unpacklo_ps(zmm2_2, zmm15.q)[0].q)
        float temp0_214[0x4] = _mm_min_ps(temp0_213, var_848)
        float temp0_216[0x4] = _mm_unpacklo_ps(temp0_211, _mm_unpacklo_ps(var_8bc, zmm15.q)[0].q)
        float temp0_217[0x4] = _mm_cmpeq_ps(temp0_214, zmm1_2, 1)
        float temp0_218[0x4] = _mm_mul_ps(temp0_216, temp0_209)
        uint32_t temp0_219 = _mm_movemask_ps(temp0_217)
        var_878 = temp0_213
        float var_648_1[0x4] = temp0_213
        float var_658_1[0x4] = temp0_218
        var_8a8 = zmm1_2
        uint32_t zmm5_2[0x4]
        
        if (temp0_219 == 0)
            float temp0_349[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x1b)
            float temp0_350[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x4e)
            float temp0_352[0x4] = _mm_mul_ps(temp0_349, _mm_shuffle_ps(var_868_1, var_868_1, 0))
            float temp0_353[0x4] = _mm_mul_ps(temp0_218, var_848)
            zmm5_2 = _mm_shuffle_ps(var_868_1, var_868_1, 0xff)
            float temp0_355[0x4] = __mulps_xmmps_memps(temp0_352, data_143f51580)
            float temp0_356[0x4] = _mm_mul_ps(zmm7_1, zmm5_2)
            float temp0_357[0x4] = _mm_shuffle_ps(temp0_353, temp0_353, 0xd2)
            float temp0_358[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xb1)
            float temp0_359[0x4] = _mm_mul_ps(temp0_213, var_848)
            float temp0_360[0x4] = _mm_add_ps(temp0_355, temp0_356)
            float temp0_362[0x4] = _mm_mul_ps(temp0_350, _mm_shuffle_ps(var_868_1, var_868_1, 0x55))
            float temp0_364[0x4] = _mm_mul_ps(temp0_358, _mm_shuffle_ps(var_868_1, var_868_1, 0xaa))
            float temp0_365[0x4] = __mulps_xmmps_memps(temp0_362, data_143f51570)
            float temp0_366[0x4] = _mm_shuffle_ps(temp0_353, temp0_353, 0xc9)
            float temp0_367[0x4] = __mulps_xmmps_memps(temp0_364, data_143f51560)
            float var_648_3[0x4] = temp0_359
            var_668 = _mm_add_ps(_mm_add_ps(temp0_360, temp0_365), temp0_367)
            float temp0_370[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 0xd2)
            float temp0_371[0x4] = _mm_mul_ps(temp0_366, temp0_370)
            float temp0_372[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 0xc9)
            float temp0_374[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_357, temp0_372), temp0_371)
            float temp0_375[0x4] = _mm_add_ps(temp0_374, temp0_374)
            float temp0_376[0x4] = _mm_shuffle_ps(temp0_375, temp0_375, 0xd2)
            float temp0_377[0x4] = _mm_shuffle_ps(temp0_375, temp0_375, 0xc9)
            float temp0_378[0x4] = _mm_mul_ps(temp0_376, temp0_372)
            float temp0_379[0x4] = _mm_mul_ps(temp0_377, temp0_370)
            float temp0_380[0x4] = _mm_mul_ps(temp0_375, zmm5_2)
            float var_658_3[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_378, temp0_379), _mm_add_ps(temp0_380, temp0_353)), 
                var_858)
        else
            zmm11 = data_143f515b0
            float temp0_220[0x4] = _mm_add_ps(var_868_1, var_868_1)
            zmm5_2 = _mm_shuffle_ps(var_848, var_848, 0xc9)
            float temp0_222[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 4)
            float temp0_223[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 0xff)
            float temp0_224[0x4] = _mm_mul_ps(var_868_1, temp0_220)
            float temp0_226[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_220, temp0_220, 0x29), temp0_222)
            float temp0_228[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_220, temp0_220, 0x12), temp0_223)
            float temp0_231[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_224, temp0_224, 0x1a), 
                _mm_shuffle_ps(temp0_224, temp0_224, 1))
            _mm_mul_ps(temp0_213, var_848)
            float temp0_233[0x4] = _mm_add_ps(temp0_228, temp0_226)
            float temp0_234[0x4] = _mm_shuffle_ps(temp0_213, temp0_213, 0xc9)
            float temp0_235[0x4] = _mm_sub_ps(temp0_226, temp0_228)
            float temp0_236[0x4] = _mm_sub_ps(zmm11, temp0_231)
            float temp0_237[0x4] = _mm_mul_ps(temp0_233, var_848)
            zmm5_2 = _mm_mul_ps(zmm5_2, temp0_235)
            float temp0_239[0x4] = _mm_mul_ps(temp0_236, var_848)
            float temp0_240[0x4] = _mm_add_ps(zmm7_1, zmm7_1)
            zmm1_2 = __andps_xmmxud_memxud(temp0_239, data_143f515c0)
            float temp0_242[0x4] = _mm_shuffle_ps(zmm5_2, zmm1_2, 0x32)
            float temp0_244[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_237, zmm1_2, 0), temp0_242, 0x82)
            float temp0_245[0x4] = _mm_shuffle_ps(temp0_237, zmm1_2, 0x31)
            uint32_t zmm8_1[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_2, zmm1_2, 0x10), temp0_245, 0x88)
            float temp0_248[0x4] = _mm_mul_ps(zmm7_1, temp0_240)
            zmm11[0].q = var_858 u>> 0x40
            float temp0_249[0x4] = _mm_shuffle_ps(var_858, zmm11, 0xc4)
            float temp0_250[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 4)
            float temp0_251[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
            float temp0_253[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_237, zmm5_2, 0x12), zmm1_2, 0xe8)
            float temp0_255[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0x29), temp0_250)
            float temp0_258[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_248, temp0_248, 0x1a), 
                _mm_shuffle_ps(temp0_248, temp0_248, 1))
            float temp0_260[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0x12), temp0_251)
            float var_3d8_1[0x4] = temp0_244
            uint32_t var_3c8_1[0x4] = zmm8_1
            float var_3b8_1[0x4] = temp0_253
            float var_3a8_1[0x4] = temp0_249
            float temp0_261[0x4] = _mm_add_ps(temp0_260, temp0_255)
            float temp0_262[0x4] = _mm_sub_ps(temp0_255, temp0_260)
            float temp0_263[0x4] = _mm_mul_ps(temp0_261, temp0_213)
            float temp0_264[0x4] = _mm_mul_ps(temp0_234, temp0_262)
            zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, temp0_258), temp0_213), 
                data_143f515c0)
            float temp0_270[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_263, zmm1_2, 0), 
                _mm_shuffle_ps(temp0_264, zmm1_2, 0x32), 0x82)
            float temp0_271[0x4] = _mm_shuffle_ps(temp0_263, zmm1_2, 0x31)
            float temp0_272[0x4] = _mm_shuffle_ps(temp0_270, temp0_270, 0x55)
            zmm5_2 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_264, zmm1_2, 0x10), temp0_271, 0x88)
            float var_398_1[0x4] = temp0_270
            float temp0_275[0x4] = _mm_mul_ps(temp0_272, zmm8_1)
            zmm11[0].q = temp0_218 u>> 0x40
            float temp0_276[0x4] = _mm_shuffle_ps(temp0_218, zmm11, 0xc4)
            float temp0_278[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_270, temp0_270, 0), temp0_244)
            float temp0_280[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_263, temp0_264, 0x12), zmm1_2, 0xe8)
            float temp0_281[0x4] = _mm_shuffle_ps(temp0_270, temp0_270, 0xaa)
            float temp0_282[0x4] = _mm_add_ps(temp0_275, temp0_278)
            float temp0_284[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_270, temp0_270, 0xff), temp0_249)
            float temp0_285[0x4] = _mm_mul_ps(temp0_281, temp0_253)
            float temp0_287[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0), temp0_244)
            float temp0_288[0x4] = _mm_add_ps(temp0_282, temp0_285)
            uint32_t var_388_1[0x4] = zmm5_2
            float var_378_1[0x4] = temp0_280
            float temp0_290[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa), temp0_253)
            float temp0_291[0x4] = _mm_add_ps(temp0_288, temp0_284)
            float var_368_1[0x4] = temp0_276
            float temp0_293[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0x55), zmm8_1)
            float var_828[0x4] = temp0_291
            float temp0_295[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_280, temp0_280, 0x55), zmm8_1)
            float temp0_296[0x4] = _mm_add_ps(temp0_293, temp0_287)
            zmm5_2 = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xff), temp0_249)
            float temp0_300[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_280, temp0_280, 0), temp0_244)
            float temp0_301[0x4] = _mm_add_ps(temp0_296, temp0_290)
            float temp0_303[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_280, temp0_280, 0xaa), temp0_253)
            float temp0_304[0x4] = _mm_add_ps(temp0_295, temp0_300)
            float temp0_305[0x4] = _mm_shuffle_ps(temp0_280, temp0_280, 0xff)
            float temp0_306[0x4] = _mm_add_ps(temp0_301, zmm5_2)
            float temp0_307[0x4] = _mm_mul_ps(temp0_305, temp0_249)
            float temp0_308[0x4] = _mm_shuffle_ps(temp0_276, temp0_276, 0)
            float temp0_309[0x4] = _mm_add_ps(temp0_304, temp0_303)
            float temp0_310[0x4] = _mm_mul_ps(temp0_308, temp0_244)
            int96_t var_818_1 = temp0_306[0].12
            float temp0_311[0x4] = _mm_shuffle_ps(temp0_276, temp0_276, 0xaa)
            float temp0_313[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_276, temp0_276, 0x55), zmm8_1)
            float temp0_314[0x4] = _mm_add_ps(temp0_309, temp0_307)
            float temp0_315[0x4] = _mm_mul_ps(temp0_311, temp0_253)
            float temp0_316[0x4] = _mm_shuffle_ps(temp0_276, temp0_276, 0xff)
            float temp0_317[0x4] = _mm_add_ps(temp0_313, temp0_310)
            float temp0_318[0x4] = _mm_mul_ps(temp0_316, temp0_249)
            int96_t var_808_1 = temp0_314[0].12
            int96_t var_7f8_1 = _mm_add_ps(_mm_add_ps(temp0_317, temp0_315), temp0_318)[0].12
            int128_t zmm11_1
            float zmm13_1[0x4]
            int64_t zmm15_2
            zmm11_1, zmm13_1, zmm15_2 = sub_1407740e0(&var_828, 0x322bcc77)
            float zmm2_3[0x4] = var_828[0]
            float zmm1_3 = var_828[1]
            float zmm4_3[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(var_8a8, zmm13_1, 2), data_143f51990 ^ zmm11_1)
            uint32_t zmm0_3[0x4] = var_828[2]
            zmm4_3 ^= data_143f51990
            zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
            zmm1_3 = zmm1_3 * zmm4_3[0]
            zmm0_3[0] = zmm0_3[0] f* zmm4_3[0]
            var_828[0] = zmm2_3[0]
            float temp0_323[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
            var_828[1] = zmm1_3
            zmm1_3 = var_818_1:4.d * temp0_323[0]
            var_828[2] = zmm0_3[0]
            zmm0_3 = var_818_1:8.d
            zmm0_3[0] = zmm0_3[0] f* temp0_323[0]
            float zmm3_4 = var_818_1.d * temp0_323[0]
            zmm2_3 = var_808_1.d
            float temp0_324[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
            var_818_1:4.d = zmm1_3
            var_818_1:8.d = zmm0_3[0]
            zmm0_3 = var_808_1:8.d
            zmm1_3 = var_808_1:4.d * temp0_324[0]
            zmm0_3[0] = zmm0_3[0] f* temp0_324[0]
            zmm2_3[0] = zmm2_3[0] * temp0_324[0]
            var_808_1:4.d = zmm1_3
            var_808_1:8.d = zmm0_3[0]
            var_818_1.d = zmm3_4
            var_808_1.d = zmm2_3[0]
            sub_14077e4a0(&var_898, &var_828)
            uint32_t zmm5_3[0x4] = var_898
            float zmm6_3[0x4] = data_143f515a0
            uint32_t zmm1_4[0x4] = _mm_mul_ps(zmm5_3, zmm5_3)
            var_8a8[0] = 0x322bcc77
            float var_648_2[0x4] = zmm13_1
            zmm1_4 = _mm_add_ps(zmm1_4, _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
            uint32_t zmm4_4[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
            zmm1_4 = _mm_rsqrt_ps(zmm4_4)
            float temp0_331[0x4] = _mm_mul_ps(zmm4_4, zmm6_3)
            float temp0_336[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6_3, _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), temp0_331)), 
                    zmm1_4), 
                zmm1_4)
            float temp0_339[0x4] =
                _mm_sub_ps(zmm6_3, _mm_mul_ps(_mm_mul_ps(temp0_336, temp0_336), temp0_331))
            uint32_t zmm0_4[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_4, 2)
            float temp0_343[0x4] = _mm_add_ps(_mm_mul_ps(temp0_339, temp0_336), temp0_336)
            float temp0_344[0x4] = _mm_unpacklo_ps(var_7f8_1:4.d, zmm15_2)
            zmm6_3 =
                _mm_and_ps(_mm_mul_ps(temp0_343, zmm5_3) ^ data_143f51590, zmm0_4) ^ data_143f51590
            float temp0_348[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_7f8_1.d, var_7f8_1:8.d[0].q), temp0_344[0].q)
            var_898 = zmm6_3
            var_668 = zmm6_3
            float var_658_2[0x4] = temp0_348
        rbx_3 = arg6
        int64_t rcx_10 = sx.q(i) * 0x58
        
        if (rbx_3 == 0)
            void* rax_10 = arg9[0xc]
            void* rdx_7 = &arg9[0xa]
            
            if (rax_10 != 0)
                rdx_7 = rax_10
            
            var_8f8.d = arg_18
            zmm15 = sub_142246e60(rcx_10 + arg1[2], *(rdx_7 + (rax_2 << 3)), &var_668, &var_8c0)
        else
            var_8f0.q = arg9
            var_8f8.d = rax_2.d
            zmm15 = sub_14224e380(rcx_10 + arg1[2], &var_668, &var_8c0, var_888, var_8f8.d, var_8f0)
        
        i += 1
        r15_1 += 0x58
    while (i s< arg1[3].d)
    
    zmm7 = var_848
    i_3 = 0
    zmm12 = var_858
    zmm6 = var_868_1
    zmm14 = data_143f515b0

int32_t i_1 = 0

if (arg1[5].d s> 0)
    int64_t r15_2 = 0
    
    do
        void* rbx_4 = arg1[4]
        float var_588[0x4]
        sub_140ade170(rbx_4 + 0x3c + r15_2, &var_588)
        float zmm1_5[0x4] = data_143f519a0
        float zmm7_2[0x4] = var_588
        float zmm6_4[0x4] = data_14399f668
        zmm14 = var_8c0
        float var_638[0x4] = zmm7_2
        float zmm2_5[0x4] = *(r15_2 + rbx_4 + 0x34)
        float temp0_385[0x4] =
            _mm_unpacklo_ps(*(r15_2 + rbx_4 + 0x30), (*(r15_2 + rbx_4 + 0x38))[0].q)
        float zmm0_5[0x4] = data_14399f670
        float temp0_387[0x4] = _mm_unpacklo_ps(temp0_385, _mm_unpacklo_ps(zmm2_5, zmm15.q)[0].q)
        zmm2_5 = data_14399f66c
        float temp0_388[0x4] = _mm_unpacklo_ps(zmm6_4, zmm0_5[0].q)
        float temp0_389[0x4] = _mm_unpacklo_ps(zmm14, var_8b8[0].q)
        float temp0_391[0x4] = _mm_unpacklo_ps(temp0_388, _mm_unpacklo_ps(zmm2_5, zmm15.q)[0].q)
        float temp0_392[0x4] = _mm_min_ps(temp0_391, var_848)
        float temp0_394[0x4] = _mm_unpacklo_ps(temp0_389, _mm_unpacklo_ps(var_8bc, zmm15.q)[0].q)
        float temp0_395[0x4] = _mm_cmpeq_ps(temp0_392, zmm1_5, 1)
        float temp0_396[0x4] = _mm_mul_ps(temp0_394, temp0_387)
        uint32_t temp0_397 = _mm_movemask_ps(temp0_395)
        var_878 = temp0_391
        float var_618_1[0x4] = temp0_391
        float var_628_1[0x4] = temp0_396
        var_8a8 = zmm1_5
        uint32_t zmm5_4[0x4]
        
        if (temp0_397 == 0)
            float temp0_527[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x1b)
            float temp0_528[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x4e)
            float temp0_530[0x4] = _mm_mul_ps(temp0_527, _mm_shuffle_ps(var_868_1, var_868_1, 0))
            float temp0_531[0x4] = _mm_mul_ps(temp0_396, var_848)
            zmm5_4 = _mm_shuffle_ps(var_868_1, var_868_1, 0xff)
            float temp0_533[0x4] = __mulps_xmmps_memps(temp0_530, data_143f51580)
            float temp0_534[0x4] = _mm_mul_ps(zmm7_2, zmm5_4)
            float temp0_535[0x4] = _mm_shuffle_ps(temp0_531, temp0_531, 0xd2)
            float temp0_536[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xb1)
            zmm6_4 = _mm_mul_ps(temp0_391, var_848)
            float temp0_538[0x4] = _mm_add_ps(temp0_533, temp0_534)
            float temp0_540[0x4] = _mm_mul_ps(temp0_528, _mm_shuffle_ps(var_868_1, var_868_1, 0x55))
            float temp0_542[0x4] = _mm_mul_ps(temp0_536, _mm_shuffle_ps(var_868_1, var_868_1, 0xaa))
            float temp0_543[0x4] = __mulps_xmmps_memps(temp0_540, data_143f51570)
            float temp0_544[0x4] = _mm_shuffle_ps(temp0_531, temp0_531, 0xc9)
            float temp0_545[0x4] = __mulps_xmmps_memps(temp0_542, data_143f51560)
            float var_618_3[0x4] = zmm6_4
            var_638 = _mm_add_ps(_mm_add_ps(temp0_538, temp0_543), temp0_545)
            float temp0_548[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 0xd2)
            float temp0_549[0x4] = _mm_mul_ps(temp0_544, temp0_548)
            float temp0_550[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 0xc9)
            float temp0_552[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_535, temp0_550), temp0_549)
            float temp0_553[0x4] = _mm_add_ps(temp0_552, temp0_552)
            float temp0_554[0x4] = _mm_shuffle_ps(temp0_553, temp0_553, 0xd2)
            float temp0_555[0x4] = _mm_shuffle_ps(temp0_553, temp0_553, 0xc9)
            float temp0_556[0x4] = _mm_mul_ps(temp0_554, temp0_550)
            float temp0_557[0x4] = _mm_mul_ps(temp0_555, temp0_548)
            float temp0_558[0x4] = _mm_mul_ps(temp0_553, zmm5_4)
            float var_628_3[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_556, temp0_557), _mm_add_ps(temp0_558, temp0_531)), 
                var_858)
        else
            zmm11 = data_143f515b0
            float temp0_398[0x4] = _mm_add_ps(var_868_1, var_868_1)
            zmm5_4 = _mm_shuffle_ps(var_848, var_848, 0xc9)
            float temp0_400[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 4)
            float temp0_401[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 0xff)
            float temp0_402[0x4] = _mm_mul_ps(var_868_1, temp0_398)
            float temp0_404[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_398, temp0_398, 0x29), temp0_400)
            float temp0_406[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_398, temp0_398, 0x12), temp0_401)
            float temp0_409[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_402, temp0_402, 0x1a), 
                _mm_shuffle_ps(temp0_402, temp0_402, 1))
            _mm_mul_ps(temp0_391, var_848)
            float temp0_411[0x4] = _mm_add_ps(temp0_406, temp0_404)
            float temp0_412[0x4] = _mm_shuffle_ps(temp0_391, temp0_391, 0xc9)
            float temp0_413[0x4] = _mm_sub_ps(temp0_404, temp0_406)
            float temp0_414[0x4] = _mm_sub_ps(zmm11, temp0_409)
            float temp0_415[0x4] = _mm_mul_ps(temp0_411, var_848)
            zmm5_4 = _mm_mul_ps(zmm5_4, temp0_413)
            float temp0_417[0x4] = _mm_mul_ps(temp0_414, var_848)
            float temp0_418[0x4] = _mm_add_ps(zmm7_2, zmm7_2)
            zmm1_5 = __andps_xmmxud_memxud(temp0_417, data_143f515c0)
            float temp0_420[0x4] = _mm_shuffle_ps(zmm5_4, zmm1_5, 0x32)
            float temp0_422[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_415, zmm1_5, 0), temp0_420, 0x82)
            float temp0_423[0x4] = _mm_shuffle_ps(temp0_415, zmm1_5, 0x31)
            uint32_t zmm8_2[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(zmm5_4, zmm1_5, 0x10), temp0_423, 0x88)
            float temp0_426[0x4] = _mm_mul_ps(zmm7_2, temp0_418)
            zmm11[0].q = var_858 u>> 0x40
            float temp0_427[0x4] = _mm_shuffle_ps(var_858, zmm11, 0xc4)
            float temp0_428[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 4)
            float temp0_429[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xff)
            float temp0_431[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_415, zmm5_4, 0x12), zmm1_5, 0xe8)
            float temp0_433[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_418, temp0_418, 0x29), temp0_428)
            float temp0_436[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_426, temp0_426, 0x1a), 
                _mm_shuffle_ps(temp0_426, temp0_426, 1))
            float temp0_438[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_418, temp0_418, 0x12), temp0_429)
            float var_358_1[0x4] = temp0_422
            uint32_t var_348_1[0x4] = zmm8_2
            float var_338_1[0x4] = temp0_431
            float var_328_1[0x4] = temp0_427
            float temp0_439[0x4] = _mm_add_ps(temp0_438, temp0_433)
            float temp0_440[0x4] = _mm_sub_ps(temp0_433, temp0_438)
            float temp0_441[0x4] = _mm_mul_ps(temp0_439, temp0_391)
            float temp0_442[0x4] = _mm_mul_ps(temp0_412, temp0_440)
            zmm1_5 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, temp0_436), temp0_391), 
                data_143f515c0)
            float temp0_448[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_441, zmm1_5, 0), 
                _mm_shuffle_ps(temp0_442, zmm1_5, 0x32), 0x82)
            float temp0_449[0x4] = _mm_shuffle_ps(temp0_441, zmm1_5, 0x31)
            float temp0_450[0x4] = _mm_shuffle_ps(temp0_448, temp0_448, 0x55)
            zmm5_4 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_442, zmm1_5, 0x10), temp0_449, 0x88)
            float var_318_1[0x4] = temp0_448
            float temp0_453[0x4] = _mm_mul_ps(temp0_450, zmm8_2)
            zmm11[0].q = temp0_396 u>> 0x40
            float temp0_454[0x4] = _mm_shuffle_ps(temp0_396, zmm11, 0xc4)
            float temp0_456[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_448, temp0_448, 0), temp0_422)
            float temp0_458[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_441, temp0_442, 0x12), zmm1_5, 0xe8)
            float temp0_459[0x4] = _mm_shuffle_ps(temp0_448, temp0_448, 0xaa)
            float temp0_460[0x4] = _mm_add_ps(temp0_453, temp0_456)
            float temp0_462[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_448, temp0_448, 0xff), temp0_427)
            float temp0_463[0x4] = _mm_mul_ps(temp0_459, temp0_431)
            float temp0_465[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0), temp0_422)
            float temp0_466[0x4] = _mm_add_ps(temp0_460, temp0_463)
            uint32_t var_308_1[0x4] = zmm5_4
            float var_2f8_1[0x4] = temp0_458
            float temp0_468[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0xaa), temp0_431)
            float temp0_469[0x4] = _mm_add_ps(temp0_466, temp0_462)
            float var_2e8_1[0x4] = temp0_454
            float temp0_471[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0x55), zmm8_2)
            float var_728[0x4] = temp0_469
            float temp0_473[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_458, temp0_458, 0x55), zmm8_2)
            float temp0_474[0x4] = _mm_add_ps(temp0_471, temp0_465)
            zmm5_4 = _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0xff), temp0_427)
            float temp0_478[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_458, temp0_458, 0), temp0_422)
            float temp0_479[0x4] = _mm_add_ps(temp0_474, temp0_468)
            float temp0_481[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_458, temp0_458, 0xaa), temp0_431)
            float temp0_482[0x4] = _mm_add_ps(temp0_473, temp0_478)
            float temp0_483[0x4] = _mm_shuffle_ps(temp0_458, temp0_458, 0xff)
            float temp0_484[0x4] = _mm_add_ps(temp0_479, zmm5_4)
            float temp0_485[0x4] = _mm_mul_ps(temp0_483, temp0_427)
            float temp0_486[0x4] = _mm_shuffle_ps(temp0_454, temp0_454, 0)
            float temp0_487[0x4] = _mm_add_ps(temp0_482, temp0_481)
            float temp0_488[0x4] = _mm_mul_ps(temp0_486, temp0_422)
            int96_t var_718_1 = temp0_484[0].12
            float temp0_489[0x4] = _mm_shuffle_ps(temp0_454, temp0_454, 0xaa)
            float temp0_491[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_454, temp0_454, 0x55), zmm8_2)
            float temp0_492[0x4] = _mm_add_ps(temp0_487, temp0_485)
            float temp0_493[0x4] = _mm_mul_ps(temp0_489, temp0_431)
            float temp0_494[0x4] = _mm_shuffle_ps(temp0_454, temp0_454, 0xff)
            float temp0_495[0x4] = _mm_add_ps(temp0_491, temp0_488)
            float temp0_496[0x4] = _mm_mul_ps(temp0_494, temp0_427)
            int96_t var_708_1 = temp0_492[0].12
            int96_t var_6f8_1 = _mm_add_ps(_mm_add_ps(temp0_495, temp0_493), temp0_496)[0].12
            int128_t zmm11_2
            float zmm13_2[0x4]
            int64_t zmm15_3
            zmm11_2, zmm13_2, zmm15_3 = sub_1407740e0(&var_728, 0x322bcc77)
            float zmm2_6[0x4] = var_728[0]
            float zmm1_6 = var_728[1]
            float zmm4_6[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(var_8a8, zmm13_2, 2), data_143f51990 ^ zmm11_2)
            uint32_t zmm0_6[0x4] = var_728[2]
            zmm4_6 ^= data_143f51990
            zmm2_6[0] = zmm2_6[0] * zmm4_6[0]
            zmm1_6 = zmm1_6 * zmm4_6[0]
            zmm0_6[0] = zmm0_6[0] f* zmm4_6[0]
            var_728[0] = zmm2_6[0]
            float temp0_501[0x4] = _mm_shuffle_ps(zmm4_6, zmm4_6, 0x55)
            var_728[1] = zmm1_6
            zmm1_6 = var_718_1:4.d * temp0_501[0]
            var_728[2] = zmm0_6[0]
            zmm0_6 = var_718_1:8.d
            zmm0_6[0] = zmm0_6[0] f* temp0_501[0]
            float zmm3_7 = var_718_1.d * temp0_501[0]
            zmm2_6 = var_708_1.d
            float temp0_502[0x4] = _mm_shuffle_ps(zmm4_6, zmm4_6, 0xaa)
            var_718_1:4.d = zmm1_6
            var_718_1:8.d = zmm0_6[0]
            zmm0_6 = var_708_1:8.d
            zmm1_6 = var_708_1:4.d * temp0_502[0]
            zmm0_6[0] = zmm0_6[0] f* temp0_502[0]
            zmm2_6[0] = zmm2_6[0] * temp0_502[0]
            var_708_1:4.d = zmm1_6
            var_708_1:8.d = zmm0_6[0]
            var_718_1.d = zmm3_7
            var_708_1.d = zmm2_6[0]
            sub_14077e4a0(&var_898, &var_728)
            uint32_t zmm5_5[0x4] = var_898
            zmm6_4 = data_143f515a0
            uint32_t zmm1_7[0x4] = _mm_mul_ps(zmm5_5, zmm5_5)
            var_8a8[0] = 0x322bcc77
            float var_618_2[0x4] = zmm13_2
            zmm1_7 = _mm_add_ps(zmm1_7, _mm_shuffle_ps(zmm1_7, zmm1_7, 0x4e))
            uint32_t zmm4_7[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_7, zmm1_7, 0x39), zmm1_7)
            zmm1_7 = _mm_rsqrt_ps(zmm4_7)
            float temp0_509[0x4] = _mm_mul_ps(zmm4_7, zmm6_4)
            float temp0_514[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6_4, _mm_mul_ps(_mm_mul_ps(zmm1_7, zmm1_7), temp0_509)), 
                    zmm1_7), 
                zmm1_7)
            float temp0_517[0x4] =
                _mm_sub_ps(zmm6_4, _mm_mul_ps(_mm_mul_ps(temp0_514, temp0_514), temp0_509))
            uint32_t zmm0_7[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_7, 2)
            float temp0_521[0x4] = _mm_add_ps(_mm_mul_ps(temp0_517, temp0_514), temp0_514)
            float temp0_522[0x4] = _mm_unpacklo_ps(var_6f8_1:4.d, zmm15_3)
            zmm6_4 =
                _mm_and_ps(_mm_mul_ps(temp0_521, zmm5_5) ^ data_143f51590, zmm0_7) ^ data_143f51590
            float temp0_526[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_6f8_1.d, var_6f8_1:8.d[0].q), temp0_522[0].q)
            var_898 = zmm6_4
            var_638 = zmm6_4
            float var_628_2[0x4] = temp0_526
        rbx_3 = arg6
        int64_t rcx_18 = sx.q(i_1) * 0x50
        
        if (rbx_3 == 0)
            void* rax_14 = arg9[0xc]
            void* rdx_12 = &arg9[0xa]
            
            if (rax_14 != 0)
                rdx_12 = rax_14
            
            var_8f8.d = arg_18
            zmm15 = sub_1422479c0(rcx_18 + arg1[4], *(rdx_12 + (rax_2 << 3)), &var_638, &var_8c0)
        else
            var_8f0.q = arg9
            var_8f8.d = rax_2.d
            zmm15 = sub_14224e4d0(rcx_18 + arg1[4], &var_638, &var_8c0, var_888, zmm6_4, var_8f8.d, 
                var_8f0)
        
        i_1 += 1
        r15_2 += 0x50
    while (i_1 s< arg1[5].d)
    
    zmm7 = var_848
    i_3 = 0
    zmm12 = var_858
    zmm6 = var_868_1
    zmm14 = data_143f515b0

uint64_t result = zx.q(arg1[7].d)
int32_t r12_2

if (result.d s<= 0)
    r12_2 = rax_2.d
else if (rbx_3 == 0)
    int32_t r15_6 = 0
    
    if (result.d s> 0)
        int64_t r12_3 = 0
        
        while (true)
            void* rcx_57
            
            if (arg5 == 0)
                rcx_57 = &arg_18
            else
                int32_t rax_50 = r15_6 & 0x8000001f
                
                if (rax_50 s< 0)
                    rax_50 = ((rax_50 - 1) | 0xffffffe0) + 1
                
                rcx_57 = &data_143a2f1e0 + (sx.q(rax_50) << 2)
            
            int64_t rax_54 = arg1[6]
            int32_t rbx_11 = *rcx_57
            zmm1 = data_143f519a0
            int128_t* var_688
            var_688.o = zmm1
            zmm12 = *(r12_3 + rax_54 + 0x70)
            float var_128[0x4] = zmm12
            zmm13 = *(r12_3 + rax_54 + 0x80)
            uint32_t var_118_1[0x4] = zmm13
            zmm7 = *(r12_3 + rax_54 + 0x90)
            uint32_t var_108_1[0x4] = zmm7
            zmm8 = arg2[2]
            float temp0_789[0x4] = _mm_min_ps(zmm7, zmm8)
            var_878 = zmm7
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_789, zmm1, 1)) == 0)
                zmm4 = *arg2
                zmm6 = arg2[1]
                float temp0_921[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x1b)
                float temp0_923[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_921)
                float temp0_924[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                zmm13 = _mm_mul_ps(zmm13, zmm8)
                float temp0_926[0x4] = __mulps_xmmps_memps(temp0_923, data_143f51580)
                float temp0_927[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                float temp0_928[0x4] = _mm_mul_ps(zmm12, temp0_927)
                float temp0_929[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
                zmm7 = _mm_mul_ps(zmm7, zmm8)
                float temp0_931[0x4] = _mm_add_ps(temp0_926, temp0_928)
                float temp0_933[0x4] = _mm_mul_ps(temp0_924, _mm_shuffle_ps(zmm12, zmm12, 0x4e))
                float temp0_936[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm12, zmm12, 0xb1))
                float temp0_937[0x4] = __mulps_xmmps_memps(temp0_933, data_143f51570)
                uint32_t var_108_3[0x4] = zmm7
                float temp0_938[0x4] = __mulps_xmmps_memps(temp0_936, data_143f51560)
                float temp0_940[0x4] = _mm_add_ps(_mm_add_ps(temp0_931, temp0_937), temp0_938)
                float temp0_941[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                var_128 = temp0_940
                float temp0_942[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                float temp0_943[0x4] = _mm_mul_ps(temp0_941, temp0_942)
                float temp0_944[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                float temp0_946[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_929, temp0_944), temp0_943)
                float temp0_947[0x4] = _mm_add_ps(temp0_946, temp0_946)
                float temp0_948[0x4] = _mm_shuffle_ps(temp0_947, temp0_947, 0xd2)
                float temp0_949[0x4] = _mm_shuffle_ps(temp0_947, temp0_947, 0xc9)
                float temp0_950[0x4] = _mm_mul_ps(temp0_948, temp0_944)
                float temp0_951[0x4] = _mm_mul_ps(temp0_949, temp0_942)
                float temp0_952[0x4] = _mm_mul_ps(temp0_947, temp0_927)
                float var_118_3[0x4] = _mm_add_ps(
                    _mm_add_ps(_mm_sub_ps(temp0_950, temp0_951), _mm_add_ps(temp0_952, zmm13)), 
                    zmm6)
            else
                float zmm3[0x4] = *arg2
                _mm_mul_ps(zmm7, zmm8)
                float temp0_793[0x4] = _mm_add_ps(zmm3, zmm3)
                float temp0_794[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                float temp0_795[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                float temp0_796[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                float temp0_797[0x4] = _mm_mul_ps(zmm3, temp0_793)
                float temp0_799[0x4] =
                    _mm_mul_ps(temp0_794, _mm_shuffle_ps(temp0_793, temp0_793, 0x29))
                float temp0_801[0x4] =
                    _mm_mul_ps(temp0_795, _mm_shuffle_ps(temp0_793, temp0_793, 0x12))
                float temp0_804[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_797, temp0_797, 0x1a), 
                    _mm_shuffle_ps(temp0_797, temp0_797, 1))
                float temp0_805[0x4] = _mm_add_ps(temp0_801, temp0_799)
                float temp0_806[0x4] = _mm_sub_ps(temp0_799, temp0_801)
                float temp0_807[0x4] = _mm_sub_ps(zmm14, temp0_804)
                float temp0_808[0x4] = _mm_mul_ps(temp0_805, zmm8)
                float temp0_809[0x4] = _mm_mul_ps(temp0_796, temp0_806)
                float temp0_810[0x4] = _mm_mul_ps(temp0_807, zmm8)
                float temp0_811[0x4] = _mm_add_ps(zmm12, zmm12)
                zmm1 = __andps_xmmxud_memxud(temp0_810, data_143f515c0)
                float temp0_813[0x4] = _mm_shuffle_ps(temp0_809, zmm1, 0x32)
                float temp0_815[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_808, zmm1, 0), temp0_813, 0x82)
                float temp0_816[0x4] = _mm_shuffle_ps(temp0_808, zmm1, 0x31)
                zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_809, zmm1, 0x10), temp0_816, 0x88)
                float temp0_819[0x4] = _mm_mul_ps(zmm12, temp0_811)
                float temp0_820[0x4] = _mm_shuffle_ps(temp0_808, temp0_809, 0x12)
                zmm5 = var_878
                float temp0_821[0x4] = _mm_shuffle_ps(temp0_820, zmm1, 0xe8)
                uint32_t var_248_1[0x4] = zmm7
                float temp0_822[0x4] = _mm_shuffle_ps(temp0_811, temp0_811, 0x29)
                float var_258_1[0x4] = temp0_815
                float var_238_1[0x4] = temp0_821
                zmm8 = arg2[1]
                zmm14[0].q = zmm8 u>> 0x40
                float temp0_823[0x4] = _mm_shuffle_ps(zmm8, zmm14, 0xc4)
                float temp0_825[0x4] = _mm_mul_ps(temp0_822, _mm_shuffle_ps(zmm12, zmm12, 4))
                float temp0_828[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_819, temp0_819, 0x1a), 
                    _mm_shuffle_ps(temp0_819, temp0_819, 1))
                float temp0_829[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                float temp0_831[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_811, temp0_811, 0x12), temp0_829)
                float temp0_832[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                float var_228_1[0x4] = temp0_823
                float temp0_833[0x4] = _mm_add_ps(temp0_831, temp0_825)
                float temp0_834[0x4] = _mm_sub_ps(temp0_825, temp0_831)
                float temp0_835[0x4] = _mm_mul_ps(temp0_833, zmm5)
                float temp0_836[0x4] = _mm_mul_ps(temp0_832, temp0_834)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm14, temp0_828), zmm5), 
                    data_143f515c0)
                float temp0_842[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_835, zmm1, 0), 
                    _mm_shuffle_ps(temp0_836, zmm1, 0x32), 0x82)
                float temp0_843[0x4] = _mm_shuffle_ps(temp0_836, zmm1, 0x10)
                float temp0_844[0x4] = _mm_shuffle_ps(temp0_842, temp0_842, 0x55)
                float temp0_846[0x4] =
                    _mm_shuffle_ps(temp0_843, _mm_shuffle_ps(temp0_835, zmm1, 0x31), 0x88)
                float var_218_1[0x4] = temp0_842
                float temp0_847[0x4] = _mm_mul_ps(temp0_844, zmm7)
                zmm14[0].q = zmm13 u>> 0x40
                zmm13 = _mm_shuffle_ps(zmm13, zmm14, 0xc4)
                float temp0_850[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_842, temp0_842, 0), temp0_815)
                float temp0_852[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_835, temp0_836, 0x12), zmm1, 0xe8)
                float temp0_853[0x4] = _mm_shuffle_ps(temp0_842, temp0_842, 0xaa)
                float temp0_854[0x4] = _mm_add_ps(temp0_847, temp0_850)
                float temp0_856[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_842, temp0_842, 0xff), temp0_823)
                float temp0_857[0x4] = _mm_mul_ps(temp0_853, temp0_821)
                float temp0_859[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_846, temp0_846, 0), temp0_815)
                float temp0_860[0x4] = _mm_add_ps(temp0_854, temp0_857)
                float var_208_1[0x4] = temp0_846
                float var_1f8_1[0x4] = temp0_852
                float temp0_862[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_846, temp0_846, 0xaa), temp0_821)
                float temp0_863[0x4] = _mm_add_ps(temp0_860, temp0_856)
                uint32_t var_1e8_1[0x4] = zmm13
                float temp0_865[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_846, temp0_846, 0x55), zmm7)
                float var_7a8[0x4] = temp0_863
                float temp0_867[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_852, temp0_852, 0x55), zmm7)
                float temp0_868[0x4] = _mm_add_ps(temp0_865, temp0_859)
                float temp0_870[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_846, temp0_846, 0xff), temp0_823)
                float temp0_872[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_852, temp0_852, 0), temp0_815)
                float temp0_873[0x4] = _mm_add_ps(temp0_868, temp0_862)
                float temp0_875[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_852, temp0_852, 0xaa), temp0_821)
                float temp0_876[0x4] = _mm_add_ps(temp0_867, temp0_872)
                float temp0_877[0x4] = _mm_shuffle_ps(temp0_852, temp0_852, 0xff)
                float temp0_878[0x4] = _mm_add_ps(temp0_873, temp0_870)
                float temp0_879[0x4] = _mm_mul_ps(temp0_877, temp0_823)
                float temp0_880[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
                float temp0_881[0x4] = _mm_add_ps(temp0_876, temp0_875)
                float temp0_882[0x4] = _mm_mul_ps(temp0_880, temp0_815)
                int96_t var_798_1 = temp0_878[0].12
                float temp0_883[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                float temp0_885[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x55), zmm7)
                float temp0_886[0x4] = _mm_add_ps(temp0_881, temp0_879)
                float temp0_887[0x4] = _mm_mul_ps(temp0_883, temp0_821)
                zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                float temp0_889[0x4] = _mm_add_ps(temp0_885, temp0_882)
                zmm13 = _mm_mul_ps(zmm13, temp0_823)
                int96_t var_788_1 = temp0_886[0].12
                int96_t var_778_1 = _mm_add_ps(_mm_add_ps(temp0_889, temp0_887), zmm13)[0].12
                zmm11, zmm14, zmm15 = sub_1407740e0(&var_7a8, 0x322bcc77)
                float temp0_893[0x4] = _mm_cmpeq_ps(var_688.o, zmm11, 2)
                float zmm2_11[0x4] = var_7a8[0]
                float zmm1_12 = var_7a8[1]
                float zmm4_11[0x4] = _mm_and_ps(temp0_893, data_143f51990 ^ zmm14)
                uint32_t zmm0_12[0x4] = var_7a8[2]
                zmm4_11 ^= data_143f51990
                zmm2_11[0] = zmm2_11[0] * zmm4_11[0]
                zmm1_12 = zmm1_12 * zmm4_11[0]
                zmm0_12[0] = zmm0_12[0] f* zmm4_11[0]
                var_7a8[0] = zmm2_11[0]
                float temp0_895[0x4] = _mm_shuffle_ps(zmm4_11, zmm4_11, 0x55)
                var_7a8[1] = zmm1_12
                zmm1_12 = var_798_1:4.d * temp0_895[0]
                var_7a8[2] = zmm0_12[0]
                zmm0_12 = var_798_1:8.d
                zmm0_12[0] = zmm0_12[0] f* temp0_895[0]
                float zmm3_12 = var_798_1.d * temp0_895[0]
                zmm2_11 = var_788_1.d
                float temp0_896[0x4] = _mm_shuffle_ps(zmm4_11, zmm4_11, 0xaa)
                var_798_1:4.d = zmm1_12
                var_798_1:8.d = zmm0_12[0]
                zmm0_12 = var_788_1:8.d
                zmm1_12 = var_788_1:4.d * temp0_896[0]
                zmm0_12[0] = zmm0_12[0] f* temp0_896[0]
                zmm2_11[0] = zmm2_11[0] * temp0_896[0]
                var_788_1:4.d = zmm1_12
                var_788_1:8.d = zmm0_12[0]
                var_798_1.d = zmm3_12
                var_788_1.d = zmm2_11[0]
                sub_14077e4a0(&var_898, &var_7a8)
                uint32_t zmm5_8[0x4] = var_898
                float zmm6_6[0x4] = data_143f515a0
                float temp0_897[0x4] = _mm_mul_ps(zmm5_8, zmm5_8)
                var_8a8[0] = 0x322bcc77
                float var_108_2[0x4] = zmm11
                float temp0_899[0x4] =
                    _mm_add_ps(temp0_897, _mm_shuffle_ps(temp0_897, temp0_897, 0x4e))
                float temp0_901[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_899, temp0_899, 0x39), temp0_899)
                float temp0_902[0x4] = _mm_rsqrt_ps(temp0_901)
                float temp0_903[0x4] = _mm_mul_ps(temp0_901, zmm6_6)
                float temp0_908[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6_6, 
                            _mm_mul_ps(_mm_mul_ps(temp0_902, temp0_902), temp0_903)), 
                        temp0_902), 
                    temp0_902)
                float temp0_911[0x4] =
                    _mm_sub_ps(zmm6_6, _mm_mul_ps(_mm_mul_ps(temp0_908, temp0_908), temp0_903))
                uint32_t zmm0_13[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_901, 2)
                float temp0_915[0x4] = _mm_add_ps(_mm_mul_ps(temp0_911, temp0_908), temp0_908)
                float temp0_916[0x4] = _mm_unpacklo_ps(var_778_1:4.d, zmm15.q)
                zmm6_6 = _mm_and_ps(_mm_mul_ps(temp0_915, zmm5_8) ^ data_143f51590, zmm0_13)
                    ^ data_143f51590
                float var_118_2[0x4] = _mm_unpacklo_ps(
                    _mm_unpacklo_ps(var_778_1.d, var_778_1:8.d[0].q), temp0_916[0].q)
                var_898 = zmm6_6
                var_128 = zmm6_6
            
            void* rax_56 = arg9[0xc]
            void* rdx_32 = &arg9[0xa]
            var_8f8.d = rbx_11
            
            if (rax_56 != 0)
                rdx_32 = rax_56
            
            result = sub_142247400(sx.q(r15_6) * 0xb0 + arg1[6], *(rdx_32 + (rax_2 << 3)), &var_128)
            r15_6 += 1
            r12_3 += 0xb0
            
            if (r15_6 s>= arg1[7].d)
                break
            
            zmm14 = data_143f515b0
        
        i_3 = 0
    
    r12_2 = rax_2.d
else
    if (arg1[0xa] == 0)
        int64_t rax_16 = j_sub_140a82f30(0x18)
        
        if (rax_16 == 0)
            rax_16 = 0
        else
            __builtin_memset(rax_16, 0, 0x18)
        
        arg1[0xa] = rax_16
        void*** rax_17 = j_sub_140a82f30(0x108)
        void*** rbx_5 = rax_17
        
        if (rax_17 == 0)
            rbx_5 = nullptr
        else
            memset(rax_17, 0, 0x108)
            sub_1422b4e50(rbx_5)
            sub_142287b50(&rbx_5[0x11])
            sub_1422877b0(&rbx_5[0x19])
        
        *arg1[0xa] = rbx_5
        void*** rax_19 = j_sub_140a82f30(0x28)
        void*** rcx_25 = rax_19
        
        if (rax_19 == 0)
            rcx_25 = nullptr
        else
            __builtin_memset(rax_19 + 0xd, 0, 0x1b)
            rax_19[4] = 0
            rax_19[1].d = 0xffffffff
            *(rax_19 + 0xc) = 4
            *rcx_25 = &data_142e3cc70
        
        int32_t i_2 = 0
        *(arg1[0xa] + 8) = rcx_25
        int64_t rcx_26 = 0
        int32_t rax_21 = 0
        int64_t var_838 = 0
        int32_t var_830_1 = 0
        int32_t var_82c_1 = 0
        
        if (arg1[7].d s> 0)
            do
                data_14399f630
                zmm15 = sub_14223f510(sx.q(i_2) * 0xb0 + arg1[6], &var_838, *(arg1[0xa] + 8) + 0x18)
                i_2 += 1
            while (i_2 s< arg1[7].d)
            
            rax_21 = var_830_1
            rcx_26 = var_838
        
        int64_t* rdx_15 = arg1[0xa]
        
        if (*rdx_15 != 0)
            int64_t* rdx_16 = rdx_15[1]
            
            if (rdx_16 != 0 && rax_21 s> 0 && rdx_16[4].d s> 0)
                (*(*rdx_16 + 0x28))(rdx_16)
                void*** rax_25 = j_sub_140a82f30(0x210)
                void*** rdx_17 = rax_25
                
                if (rax_25 == 0)
                    rdx_17 = nullptr
                else
                    rax_25[1].d = 0xffffffff
                    *(rax_25 + 0xc) = (arg9[0x1d].d).b
                    rax_25[0x12] = 0
                    rax_25[0x13].d = 0
                    *(rax_25 + 0x9c) = 8
                    rax_25[0x14].b = 1
                    *(rax_25 + 0xa2) = 0xffff
                    *(rax_25 + 0xa4) = 0xff
                    rax_25[0x19] = 0
                    rax_25[0x1a].d = 0
                    *(rax_25 + 0xd4) = 2
                    rax_25[0x21] = 0
                    rax_25[0x22].d = 0
                    *(rax_25 + 0x114) = 3
                    __builtin_memset(&rax_25[0x23], 0, 0x48)
                    *rdx_17 = &data_142e3cbf8
                    rdx_17[0x34].d = 0
                    *(rdx_17 + 0x1a4) = 4
                    __builtin_memset(&rdx_17[0x35], 0, 0x40)
                    rdx_17[0x3d] = -1
                    rdx_17[0x3e].d = 0xffffffff
                    __builtin_memset(rdx_17 + 0x1f4, 0, 0x14)
                    rdx_17[0x41].d = 0xffffffff
                    *(rdx_17 + 0xa1) = 1
                
                var_8f8.d = 0
                *(arg1[0xa] + 0x10) = rdx_17
                void** rcx_31 = arg1[0xa]
                zmm15 = sub_1423691c0(*rcx_31, rcx_31[2], &var_838, 1, var_8f8.d)
                rcx_26 = var_838
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        zmm14 = data_143f515b0
        zmm6 = var_868_1
        zmm12 = var_858
        zmm7 = var_848
    
    uint64_t* rcx_33 = arg1[0xa]
    result = *rcx_33
    
    if (result == 0 || *(result + 0xbc) u<= 0)
        r12_2 = rax_2.d
    else
        result = rcx_33[1]
        
        if (result == 0 || *(result + 0x20) s<= 0)
            r12_2 = rax_2.d
        else
            zmm2 = data_143dbb1fc
            zmm5 = var_8c0
            zmm11 = data_14399f720
            zmm13 = _mm_unpacklo_ps(data_143dbb1f8, data_143dbb200[0].q)
            float temp0_564[0x4] = _mm_unpacklo_ps(zmm5, var_8b8[0].q)
            zmm13 = _mm_unpacklo_ps(zmm13, _mm_unpacklo_ps(zmm2, zmm15.q)[0].q)
            float temp0_568[0x4] =
                _mm_unpacklo_ps(temp0_564, _mm_unpacklo_ps(var_8bc, zmm15.q)[0].q)
            float var_488_1[0x4] = zmm11
            uint32_t var_478_1[0x4] = zmm13
            uint32_t temp0_571 = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
                _mm_min_ps(temp0_568, zmm7), data_143f519a0, 1))
            var_878 = temp0_568
            float var_468_1[0x4] = temp0_568
            float var_158[0x4]
            float var_148_1[0x4]
            float var_138_1[0x4]
            
            if (temp0_571 == 0)
                float temp0_701[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                float temp0_703[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x1b), temp0_701)
                float temp0_704[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x4e)
                zmm13 = _mm_mul_ps(zmm13, zmm7)
                float temp0_706[0x4] = __mulps_xmmps_memps(temp0_703, data_143f51580)
                float temp0_707[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float temp0_708[0x4] = _mm_mul_ps(zmm11, temp0_707)
                float temp0_709[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
                float temp0_710[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xb1)
                float temp0_711[0x4] = _mm_mul_ps(temp0_568, zmm7)
                float temp0_712[0x4] = _mm_add_ps(temp0_706, temp0_708)
                float temp0_714[0x4] = _mm_mul_ps(temp0_704, _mm_shuffle_ps(zmm6, zmm6, 0x55))
                float temp0_716[0x4] = _mm_mul_ps(temp0_710, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
                float temp0_717[0x4] = __mulps_xmmps_memps(temp0_714, data_143f51570)
                float temp0_718[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                float temp0_719[0x4] = __mulps_xmmps_memps(temp0_716, data_143f51560)
                var_138_1 = temp0_711
                var_158 = _mm_add_ps(_mm_add_ps(temp0_712, temp0_717), temp0_719)
                float temp0_722[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                float temp0_723[0x4] = _mm_mul_ps(temp0_718, temp0_722)
                float temp0_724[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                float temp0_726[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_709, temp0_724), temp0_723)
                float temp0_727[0x4] = _mm_add_ps(temp0_726, temp0_726)
                float temp0_728[0x4] = _mm_shuffle_ps(temp0_727, temp0_727, 0xd2)
                float temp0_729[0x4] = _mm_shuffle_ps(temp0_727, temp0_727, 0xc9)
                float temp0_730[0x4] = _mm_mul_ps(temp0_728, temp0_724)
                float temp0_731[0x4] = _mm_mul_ps(temp0_729, temp0_722)
                float temp0_732[0x4] = _mm_mul_ps(temp0_727, temp0_707)
                var_148_1 = _mm_add_ps(
                    _mm_add_ps(_mm_sub_ps(temp0_730, temp0_731), _mm_add_ps(temp0_732, zmm13)), 
                    zmm12)
            else
                float temp0_572[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
                float temp0_573[0x4] = _mm_add_ps(zmm6, zmm6)
                float temp0_574[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float temp0_575[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                _mm_mul_ps(temp0_568, zmm7)
                float temp0_577[0x4] = _mm_mul_ps(zmm6, temp0_573)
                float temp0_579[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_573, temp0_573, 0x29), temp0_572)
                float temp0_580[0x4] = _mm_shuffle_ps(temp0_573, temp0_573, 0x12)
                float temp0_581[0x4] = _mm_shuffle_ps(temp0_577, temp0_577, 0x1a)
                float temp0_582[0x4] = _mm_mul_ps(temp0_580, temp0_574)
                float temp0_584[0x4] =
                    _mm_add_ps(temp0_581, _mm_shuffle_ps(temp0_577, temp0_577, 1))
                float temp0_585[0x4] = _mm_add_ps(temp0_582, temp0_579)
                float temp0_586[0x4] = _mm_sub_ps(temp0_579, temp0_582)
                float temp0_587[0x4] = _mm_add_ps(zmm11, zmm11)
                float temp0_588[0x4] = _mm_mul_ps(temp0_585, zmm7)
                float temp0_589[0x4] = _mm_mul_ps(temp0_575, temp0_586)
                float temp0_590[0x4] = _mm_sub_ps(zmm14, temp0_584)
                float temp0_591[0x4] = _mm_mul_ps(zmm11, temp0_587)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_590, zmm7), data_143f515c0)
                float temp0_594[0x4] = _mm_shuffle_ps(temp0_589, zmm1, 0x32)
                float temp0_596[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_588, zmm1, 0), temp0_594, 0x82)
                float temp0_597[0x4] = _mm_shuffle_ps(temp0_588, zmm1, 0x31)
                zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_589, zmm1, 0x10), temp0_597, 0x88)
                float temp0_601[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_588, temp0_589, 0x12), zmm1, 0xe8)
                float temp0_602[0x4] = _mm_shuffle_ps(temp0_587, temp0_587, 0x29)
                zmm14[0].q = zmm12 u>> 0x40
                float temp0_603[0x4] = _mm_shuffle_ps(zmm12, zmm14, 0xc4)
                float temp0_605[0x4] = _mm_mul_ps(temp0_602, _mm_shuffle_ps(zmm11, zmm11, 4))
                float temp0_608[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_591, temp0_591, 0x1a), 
                    _mm_shuffle_ps(temp0_591, temp0_591, 1))
                float temp0_609[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                float temp0_611[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_587, temp0_587, 0x12), temp0_609)
                float temp0_612[0x4] = _mm_shuffle_ps(temp0_568, temp0_568, 0xc9)
                float var_2d8_1[0x4] = temp0_596
                uint32_t var_2c8_1[0x4] = zmm7
                float var_2b8_1[0x4] = temp0_601
                float temp0_613[0x4] = _mm_add_ps(temp0_611, temp0_605)
                float var_2a8_1[0x4] = temp0_603
                float temp0_614[0x4] = _mm_sub_ps(temp0_605, temp0_611)
                float temp0_615[0x4] = _mm_mul_ps(temp0_613, temp0_568)
                float temp0_616[0x4] = _mm_mul_ps(temp0_612, temp0_614)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm14, temp0_608), temp0_568), 
                    data_143f515c0)
                float temp0_622[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_615, zmm1, 0), 
                    _mm_shuffle_ps(temp0_616, zmm1, 0x32), 0x82)
                float var_298_1[0x4] = temp0_622
                float temp0_623[0x4] = _mm_shuffle_ps(temp0_622, temp0_622, 0x55)
                float temp0_624[0x4] = _mm_shuffle_ps(temp0_615, zmm1, 0x31)
                float temp0_626[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_616, zmm1, 0x10), temp0_624, 0x88)
                float temp0_627[0x4] = _mm_mul_ps(temp0_623, zmm7)
                zmm14[0].q = zmm13 u>> 0x40
                zmm13 = _mm_shuffle_ps(zmm13, zmm14, 0xc4)
                float temp0_630[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_622, temp0_622, 0), temp0_596)
                float temp0_632[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_615, temp0_616, 0x12), zmm1, 0xe8)
                float temp0_633[0x4] = _mm_shuffle_ps(temp0_622, temp0_622, 0xaa)
                float temp0_634[0x4] = _mm_add_ps(temp0_627, temp0_630)
                float temp0_636[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_622, temp0_622, 0xff), temp0_603)
                float temp0_637[0x4] = _mm_mul_ps(temp0_633, temp0_601)
                float temp0_639[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_626, temp0_626, 0), temp0_596)
                float temp0_640[0x4] = _mm_add_ps(temp0_634, temp0_637)
                float var_288_1[0x4] = temp0_626
                float var_278_1[0x4] = temp0_632
                float temp0_642[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_626, temp0_626, 0xaa), temp0_601)
                float temp0_643[0x4] = _mm_add_ps(temp0_640, temp0_636)
                uint32_t var_268_1[0x4] = zmm13
                float temp0_645[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_626, temp0_626, 0x55), zmm7)
                float var_768[0x4] = temp0_643
                float temp0_647[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_632, temp0_632, 0x55), zmm7)
                float temp0_648[0x4] = _mm_add_ps(temp0_645, temp0_639)
                float temp0_650[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_626, temp0_626, 0xff), temp0_603)
                float temp0_652[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_632, temp0_632, 0), temp0_596)
                float temp0_653[0x4] = _mm_add_ps(temp0_648, temp0_642)
                float temp0_655[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_632, temp0_632, 0xaa), temp0_601)
                float temp0_656[0x4] = _mm_add_ps(temp0_647, temp0_652)
                float temp0_657[0x4] = _mm_shuffle_ps(temp0_632, temp0_632, 0xff)
                float temp0_658[0x4] = _mm_add_ps(temp0_653, temp0_650)
                float temp0_659[0x4] = _mm_mul_ps(temp0_657, temp0_603)
                float temp0_660[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
                float temp0_661[0x4] = _mm_add_ps(temp0_656, temp0_655)
                float temp0_662[0x4] = _mm_mul_ps(temp0_660, temp0_596)
                int96_t var_758_1 = temp0_658[0].12
                float temp0_663[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                float temp0_665[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x55), zmm7)
                float temp0_666[0x4] = _mm_add_ps(temp0_661, temp0_659)
                float temp0_667[0x4] = _mm_mul_ps(temp0_663, temp0_601)
                zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                float temp0_669[0x4] = _mm_add_ps(temp0_665, temp0_662)
                zmm13 = _mm_mul_ps(zmm13, temp0_603)
                int96_t var_748_1 = temp0_666[0].12
                int96_t var_738_1 = _mm_add_ps(_mm_add_ps(temp0_669, temp0_667), zmm13)[0].12
                float zmm10_2[0x4]
                int128_t zmm14_2
                int64_t zmm15_4
                zmm10_2, zmm14_2, zmm15_4 = sub_1407740e0(&var_768, 0x322bcc77)
                float zmm4_8[0x4] =
                    _mm_and_ps(_mm_cmpeq_ps(data_143f519a0, zmm10_2, 2), data_143f51990 ^ zmm14_2)
                    ^ data_143f51990
                float zmm2_8[0x4] = var_768[0]
                float zmm1_8 = var_768[1]
                uint32_t zmm0_8[0x4] = var_768[2]
                zmm2_8[0] = zmm2_8[0] * zmm4_8[0]
                zmm1_8 = zmm1_8 * zmm4_8[0]
                zmm0_8[0] = zmm0_8[0] f* zmm4_8[0]
                var_768[0] = zmm2_8[0]
                float temp0_675[0x4] = _mm_shuffle_ps(zmm4_8, zmm4_8, 0x55)
                var_768[1] = zmm1_8
                zmm1_8 = var_758_1:4.d * temp0_675[0]
                var_768[2] = zmm0_8[0]
                zmm0_8 = var_758_1:8.d
                zmm0_8[0] = zmm0_8[0] f* temp0_675[0]
                float zmm3_9 = var_758_1.d * temp0_675[0]
                zmm2_8 = var_748_1.d
                float temp0_676[0x4] = _mm_shuffle_ps(zmm4_8, zmm4_8, 0xaa)
                var_758_1:4.d = zmm1_8
                var_758_1:8.d = zmm0_8[0]
                zmm0_8 = var_748_1:8.d
                zmm1_8 = var_748_1:4.d * temp0_676[0]
                zmm0_8[0] = zmm0_8[0] f* temp0_676[0]
                zmm2_8[0] = zmm2_8[0] * temp0_676[0]
                var_748_1:4.d = zmm1_8
                var_748_1:8.d = zmm0_8[0]
                var_758_1.d = zmm3_9
                var_748_1.d = zmm2_8[0]
                sub_14077e4a0(&var_878, &var_768)
                uint32_t zmm6_5[0x4] = var_878
                float zmm5_6[0x4] = data_143f515a0
                uint32_t zmm1_9[0x4] = _mm_mul_ps(zmm6_5, zmm6_5)
                var_8a8[0] = 0x322bcc77
                var_138_1 = zmm10_2
                zmm1_9 = _mm_add_ps(zmm1_9, _mm_shuffle_ps(zmm1_9, zmm1_9, 0x4e))
                uint32_t zmm4_9[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_9, zmm1_9, 0x39), zmm1_9)
                zmm1_9 = _mm_rsqrt_ps(zmm4_9)
                float temp0_683[0x4] = _mm_mul_ps(zmm4_9, zmm5_6)
                float temp0_688[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5_6, _mm_mul_ps(_mm_mul_ps(zmm1_9, zmm1_9), temp0_683)), 
                        zmm1_9), 
                    zmm1_9)
                float temp0_691[0x4] =
                    _mm_sub_ps(zmm5_6, _mm_mul_ps(_mm_mul_ps(temp0_688, temp0_688), temp0_683))
                uint32_t zmm0_9[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_9, 2)
                float temp0_695[0x4] = _mm_add_ps(_mm_mul_ps(temp0_691, temp0_688), temp0_688)
                float temp0_696[0x4] = _mm_unpacklo_ps(var_738_1:4.d, zmm15_4)
                zmm5_6 = _mm_and_ps(_mm_mul_ps(temp0_695, zmm6_5) ^ data_143f51590, zmm0_9)
                    ^ data_143f51590
                var_148_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_738_1.d, var_738_1:8.d[0].q), 
                    temp0_696[0].q)
                var_158 = zmm5_6
            
            int32_t rax_28 = sub_14081f8e0(arg9, 1)
            int64_t* r15_5 = zx.q(rax_28 s% 0x66) * 0xa0 + *(*arg9 + (sx.q(rax_28 s/ 0x66) << 3))
            int64_t* r12_1 = r15_5
            int64_t* rax_30 = r15_5[0xd]
            
            if (rax_30 != 0)
                r12_1 = rax_30
            
            r12_1[2] = *(arg1[0xa] + 8)
            r15_5[0xf] = *(arg1[0xa] + 0x10)
            r15_5[0x10] = var_888
            int64_t var_4c8[0x4]
            sub_141ebcf20(arg1, &var_4c8, &var_158)
            void var_4a8
            sub_141ebcf20(arg1, &var_4a8, &data_143dbb0c0)
            char var_8b0 = 0
            char* var_5a0_1 = &var_8b0
            void*** (* var_5a8)() = j_sub_140597fc0
            void* rax_34 = sub_140a756e0(&var_5a8, &data_143958018)
            void* rax_35 = rax_34 + 0x10
            var_8a8[0].q = rax_35
            void*** rbx_8 = (*(rax_34 + 0x10) + 0xf) & 0xfffffffffffffff0
            void* rcx_46 = &rbx_8[6]
            
            if (rcx_46 u> *(rax_35 + 8))
                sub_140b0e3d0(rax_35, 0x40)
                rax_35 = var_8a8[0].q
                rbx_8 = (*rax_35 + 0xf) & 0xfffffffffffffff0
                rcx_46 = &rbx_8[6]
            
            *rax_35 = rcx_46
            
            if (rbx_8 == 0)
                rbx_8 = nullptr
            else
                rbx_8[2] = 0
                rbx_8[3] = 0
                *rbx_8 = &data_142e0f070
                rbx_8[2].d = 0xffffffff
                *(rbx_8 + 0x14) = 4
                rbx_8[1] = &data_142d99570
                rbx_8[3].d = 2
                rbx_8[4] = 0
                rbx_8[5] = 0
            
            float rdx_26 = arg9[0x18].d
            var_8a8[0] = rdx_26
            arg9[0x18].d = rdx_26 i+ 1
            
            if (rdx_26 i+ 1 s> *(arg9 + 0xc4))
                sub_14083a310(&arg9[0x17], rdx_26)
                rdx_26 = var_8a8[0]
            
            *(arg9[0x17] + (sx.q(rdx_26) << 3)) = rbx_8
            float zmm14_3[0x4] = var_158
            float zmm13_3[0x4] = data_143f515b0
            float temp0_738[0x4] = _mm_add_ps(zmm14_3, zmm14_3)
            float temp0_739[0x4] = _mm_shuffle_ps(zmm14_3, zmm14_3, 0xff)
            float temp0_740[0x4] = _mm_shuffle_ps(zmm14_3, zmm14_3, 4)
            float temp0_741[0x4] = _mm_shuffle_ps(var_138_1, var_138_1, 0xc9)
            float temp0_742[0x4] = _mm_shuffle_ps(temp0_738, temp0_738, 0x12)
            float temp0_743[0x4] = _mm_mul_ps(temp0_739, temp0_742)
            float temp0_744[0x4] = _mm_mul_ps(temp0_738, zmm14_3)
            float temp0_745[0x4] = _mm_shuffle_ps(temp0_738, temp0_738, 0x29)
            float temp0_746[0x4] = _mm_mul_ps(temp0_740, temp0_745)
            float temp0_747[0x4] = _mm_mul_ps(zmm14_3, temp0_738)
            float temp0_748[0x4] = _mm_mul_ps(temp0_740, temp0_745)
            float temp0_749[0x4] = _mm_add_ps(temp0_743, temp0_746)
            float temp0_750[0x4] = _mm_mul_ps(temp0_739, temp0_742)
            float temp0_751[0x4] = _mm_sub_ps(temp0_746, temp0_743)
            float temp0_754[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_744, temp0_744, 0x1a), 
                _mm_shuffle_ps(temp0_744, temp0_744, 1))
            float temp0_755[0x4] = _mm_mul_ps(temp0_749, var_138_1)
            float temp0_756[0x4] = _mm_mul_ps(temp0_751, temp0_741)
            float zmm3_11[0x4] = __andps_xmmxud_memxud(
                _mm_mul_ps(_mm_sub_ps(zmm13_3, temp0_754), var_138_1), data_143f515c0)
            float temp0_760[0x4] = _mm_shuffle_ps(temp0_756, zmm3_11, 0x32)
            float temp0_762[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_755, zmm3_11, 0), temp0_760, 0x82)
            float temp0_763[0x4] = _mm_shuffle_ps(temp0_755, zmm3_11, 0x31)
            float temp0_765[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_756, zmm3_11, 0x10), temp0_763, 0x88)
            float temp0_767[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_755, temp0_756, 0x12), zmm3_11, 0xe8)
            float temp0_768[0x4] = _mm_add_ps(temp0_750, temp0_748)
            float var_548[0x4] = temp0_762
            zmm13_3[0].q = var_148_1 u>> 0x40
            float temp0_769[0x4] = _mm_sub_ps(temp0_748, temp0_750)
            float temp0_770[0x4] = _mm_shuffle_ps(var_148_1, zmm13_3, 0xc4)
            float temp0_771[0x4] = _mm_shuffle_ps(temp0_747, temp0_747, 0x1a)
            float var_538_1[0x4] = temp0_765
            float temp0_772[0x4] = _mm_mul_ps(temp0_768, var_138_1)
            float temp0_773[0x4] = _mm_mul_ps(temp0_769, temp0_741)
            float var_528_1[0x4] = temp0_767
            float var_518_1[0x4] = temp0_770
            zmm13_3 = __andps_xmmxud_memxud(
                _mm_mul_ps(
                    _mm_sub_ps(zmm13_3, 
                        _mm_add_ps(temp0_771, _mm_shuffle_ps(temp0_747, temp0_747, 1))), 
                    var_138_1), 
                data_143f515c0)
            float temp0_779[0x4] = _mm_shuffle_ps(temp0_773, zmm13_3, 0x32)
            float var_508[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_772, zmm13_3, 0), temp0_779, 0x82)
            float temp0_782[0x4] = _mm_shuffle_ps(temp0_773, zmm13_3, 0x10)
            int64_t* var_8d8
            var_8d8.b = 0
            int32_t var_8e0
            var_8e0.b = arg7
            float temp0_783[0x4] = _mm_shuffle_ps(temp0_772, zmm13_3, 0x31)
            float temp0_784[0x4] = _mm_shuffle_ps(temp0_772, temp0_773, 0x12)
            char var_8e8_2 = 0
            var_8f0 = 1
            var_8f8 = &var_4a8
            float var_4f8_1[0x4] = _mm_shuffle_ps(temp0_782, temp0_783, 0x88)
            float var_4e8_1[0x4] = _mm_shuffle_ps(temp0_784, zmm13_3, 0xe8)
            float var_4d8_1[0x4] = temp0_770
            sub_1422f21f0(rbx_8, &var_508, &var_548, &var_4c8, var_8f8, var_8f0, var_8e8_2, 
                var_8e0.b, var_8d8.b)
            var_898[0].q = 0
            r12_1[1] = &rbx_8[1]
            r12_1[8].d = 0
            void* rax_40 = arg1[0xa]
            var_898[2] = 0
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = muls.dp.d(0x55555556, *(*(rax_40 + 8) + 0x20))
            *(r12_1 + 0x44) = temp2_1 + (temp2_1 u>> 0x1f)
            r12_1[0xa].d = 0
            *(r12_1 + 0x54) = *(*arg1[0xa] + 0xbc) - 1
            r12_2 = rax_2.d
            int32_t rax_46 = *(r15_5 + 0x9c)
            float temp0_787[0x4] = _mm_shuffle_ps(var_138_1, var_138_1, 0x55)
            temp0_787[0] = temp0_787[0] * var_138_1[0]
            float temp0_788[0x4] = _mm_shuffle_ps(var_138_1, var_138_1, 0xaa)
            temp0_787[0] = temp0_787[0] * temp0_788[0]
            temp0_787[0] - 0f
            int32_t rcx_53
            rcx_53.b = temp0_787[0] < 0f
            *(r15_5 + 0x9c) = (rcx_53 | (rax_46 & 0xfffffffe)) & 0xfffe007f
            result, zmm15 = sub_1422dd2a0(arg9, rax_2.d, r15_5)

if (arg1[9].d s> 0)
    int64_t r15_7 = 0
    
    do
        void* rbx_12 = arg1[8]
        float var_598[0x4]
        sub_140ade170(rbx_12 + 0x3c + r15_7, &var_598)
        float zmm1_14[0x4] = data_143f519a0
        float zmm7_4[0x4] = var_598
        float zmm6_7[0x4] = data_14399f668
        zmm14 = var_8c0
        float zmm8_4[0x4] = var_848
        float var_608[0x4] = zmm7_4
        float zmm2_13[0x4] = *(r15_7 + rbx_12 + 0x34)
        float temp0_957[0x4] =
            _mm_unpacklo_ps(*(r15_7 + rbx_12 + 0x30), (*(r15_7 + rbx_12 + 0x38))[0].q)
        float zmm0_14[0x4] = data_14399f670
        float temp0_959[0x4] = _mm_unpacklo_ps(temp0_957, _mm_unpacklo_ps(zmm2_13, zmm15.q)[0].q)
        zmm2_13 = data_14399f66c
        float temp0_960[0x4] = _mm_unpacklo_ps(zmm6_7, zmm0_14[0].q)
        float temp0_961[0x4] = _mm_unpacklo_ps(zmm14, var_8b8[0].q)
        float temp0_963[0x4] = _mm_unpacklo_ps(temp0_960, _mm_unpacklo_ps(zmm2_13, zmm15.q)[0].q)
        float temp0_964[0x4] = _mm_min_ps(temp0_963, zmm8_4)
        float temp0_966[0x4] = _mm_unpacklo_ps(temp0_961, _mm_unpacklo_ps(var_8bc, zmm15.q)[0].q)
        float temp0_967[0x4] = _mm_cmpeq_ps(temp0_964, zmm1_14, 1)
        float temp0_968[0x4] = _mm_mul_ps(temp0_966, temp0_959)
        uint32_t temp0_969 = _mm_movemask_ps(temp0_967)
        var_878 = temp0_963
        float var_5e8_1[0x4] = temp0_963
        float var_5f8_1[0x4] = temp0_968
        int64_t* var_678
        var_678.o = zmm1_14
        
        if (temp0_969 == 0)
            float temp0_1099[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0x1b)
            float temp0_1100[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0x4e)
            float temp0_1102[0x4] = _mm_mul_ps(temp0_1099, _mm_shuffle_ps(var_868_1, var_868_1, 0))
            float temp0_1103[0x4] = _mm_mul_ps(temp0_968, zmm8_4)
            float temp0_1104[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 0xff)
            float temp0_1105[0x4] = __mulps_xmmps_memps(temp0_1102, data_143f51580)
            float temp0_1106[0x4] = _mm_mul_ps(zmm7_4, temp0_1104)
            float temp0_1107[0x4] = _mm_shuffle_ps(temp0_1103, temp0_1103, 0xd2)
            float temp0_1108[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0xb1)
            float temp0_1109[0x4] = _mm_mul_ps(temp0_963, zmm8_4)
            float temp0_1110[0x4] = _mm_add_ps(temp0_1105, temp0_1106)
            float temp0_1112[0x4] =
                _mm_mul_ps(temp0_1100, _mm_shuffle_ps(var_868_1, var_868_1, 0x55))
            float temp0_1114[0x4] =
                _mm_mul_ps(temp0_1108, _mm_shuffle_ps(var_868_1, var_868_1, 0xaa))
            float temp0_1115[0x4] = __mulps_xmmps_memps(temp0_1112, data_143f51570)
            float temp0_1116[0x4] = _mm_shuffle_ps(temp0_1103, temp0_1103, 0xc9)
            float temp0_1117[0x4] = __mulps_xmmps_memps(temp0_1114, data_143f51560)
            float var_5e8_3[0x4] = temp0_1109
            var_608 = _mm_add_ps(_mm_add_ps(temp0_1110, temp0_1115), temp0_1117)
            float temp0_1120[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 0xd2)
            float temp0_1121[0x4] = _mm_mul_ps(temp0_1116, temp0_1120)
            float temp0_1122[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 0xc9)
            float temp0_1124[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_1107, temp0_1122), temp0_1121)
            float temp0_1125[0x4] = _mm_add_ps(temp0_1124, temp0_1124)
            float temp0_1126[0x4] = _mm_shuffle_ps(temp0_1125, temp0_1125, 0xd2)
            float temp0_1127[0x4] = _mm_shuffle_ps(temp0_1125, temp0_1125, 0xc9)
            float temp0_1128[0x4] = _mm_mul_ps(temp0_1126, temp0_1122)
            float temp0_1129[0x4] = _mm_mul_ps(temp0_1127, temp0_1120)
            float temp0_1130[0x4] = _mm_mul_ps(temp0_1125, temp0_1104)
            float var_5f8_3[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_1128, temp0_1129), _mm_add_ps(temp0_1130, temp0_1103)), 
                var_858)
        else
            zmm11 = data_143f515b0
            float temp0_970[0x4] = _mm_add_ps(var_868_1, var_868_1)
            float temp0_971[0x4] = _mm_shuffle_ps(zmm8_4, zmm8_4, 0xc9)
            float temp0_972[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 4)
            float temp0_973[0x4] = _mm_shuffle_ps(var_868_1, var_868_1, 0xff)
            float temp0_974[0x4] = _mm_mul_ps(var_868_1, temp0_970)
            float temp0_976[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_970, temp0_970, 0x29), temp0_972)
            float temp0_978[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_970, temp0_970, 0x12), temp0_973)
            float temp0_981[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_974, temp0_974, 0x1a), 
                _mm_shuffle_ps(temp0_974, temp0_974, 1))
            _mm_mul_ps(temp0_963, zmm8_4)
            float temp0_983[0x4] = _mm_add_ps(temp0_978, temp0_976)
            float temp0_984[0x4] = _mm_shuffle_ps(temp0_963, temp0_963, 0xc9)
            float temp0_985[0x4] = _mm_sub_ps(temp0_976, temp0_978)
            float temp0_986[0x4] = _mm_sub_ps(zmm11, temp0_981)
            float temp0_987[0x4] = _mm_mul_ps(temp0_983, zmm8_4)
            float temp0_988[0x4] = _mm_mul_ps(temp0_971, temp0_985)
            float temp0_989[0x4] = _mm_mul_ps(temp0_986, zmm8_4)
            float temp0_990[0x4] = _mm_add_ps(zmm7_4, zmm7_4)
            zmm1_14 = __andps_xmmxud_memxud(temp0_989, data_143f515c0)
            float temp0_992[0x4] = _mm_shuffle_ps(temp0_988, zmm1_14, 0x32)
            float temp0_994[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_987, zmm1_14, 0), temp0_992, 0x82)
            float temp0_995[0x4] = _mm_shuffle_ps(temp0_987, zmm1_14, 0x31)
            float temp0_997[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_988, zmm1_14, 0x10), temp0_995, 0x88)
            float temp0_998[0x4] = _mm_mul_ps(zmm7_4, temp0_990)
            zmm11[0].q = var_858 u>> 0x40
            float temp0_999[0x4] = _mm_shuffle_ps(var_858, zmm11, 0xc4)
            float temp0_1000[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 4)
            float temp0_1001[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0xff)
            float temp0_1003[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_987, temp0_988, 0x12), zmm1_14, 0xe8)
            float temp0_1005[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_990, temp0_990, 0x29), temp0_1000)
            float temp0_1008[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_998, temp0_998, 0x1a), 
                _mm_shuffle_ps(temp0_998, temp0_998, 1))
            float temp0_1010[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_990, temp0_990, 0x12), temp0_1001)
            float var_1d8_1[0x4] = temp0_994
            float var_1c8_1[0x4] = temp0_997
            float var_1b8_1[0x4] = temp0_1003
            float var_1a8_1[0x4] = temp0_999
            float temp0_1011[0x4] = _mm_add_ps(temp0_1010, temp0_1005)
            float temp0_1012[0x4] = _mm_sub_ps(temp0_1005, temp0_1010)
            float temp0_1013[0x4] = _mm_mul_ps(temp0_1011, temp0_963)
            float temp0_1014[0x4] = _mm_mul_ps(temp0_984, temp0_1012)
            zmm1_14 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, temp0_1008), temp0_963), 
                data_143f515c0)
            float temp0_1020[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_1013, zmm1_14, 0), 
                _mm_shuffle_ps(temp0_1014, zmm1_14, 0x32), 0x82)
            float temp0_1021[0x4] = _mm_shuffle_ps(temp0_1013, zmm1_14, 0x31)
            float temp0_1022[0x4] = _mm_shuffle_ps(temp0_1020, temp0_1020, 0x55)
            float temp0_1024[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_1014, zmm1_14, 0x10), temp0_1021, 0x88)
            float var_198_1[0x4] = temp0_1020
            float temp0_1025[0x4] = _mm_mul_ps(temp0_1022, temp0_997)
            zmm11[0].q = temp0_968 u>> 0x40
            float temp0_1026[0x4] = _mm_shuffle_ps(temp0_968, zmm11, 0xc4)
            float temp0_1028[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1020, temp0_1020, 0), temp0_994)
            float temp0_1030[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_1013, temp0_1014, 0x12), zmm1_14, 0xe8)
            float temp0_1031[0x4] = _mm_shuffle_ps(temp0_1020, temp0_1020, 0xaa)
            float temp0_1032[0x4] = _mm_add_ps(temp0_1025, temp0_1028)
            float temp0_1034[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_1020, temp0_1020, 0xff), temp0_999)
            float temp0_1035[0x4] = _mm_mul_ps(temp0_1031, temp0_1003)
            float temp0_1037[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1024, temp0_1024, 0), temp0_994)
            float temp0_1038[0x4] = _mm_add_ps(temp0_1032, temp0_1035)
            float var_188_1[0x4] = temp0_1024
            float var_178_1[0x4] = temp0_1030
            float temp0_1040[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_1024, temp0_1024, 0xaa), temp0_1003)
            float temp0_1041[0x4] = _mm_add_ps(temp0_1038, temp0_1034)
            float var_168_1[0x4] = temp0_1026
            float temp0_1043[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_1024, temp0_1024, 0x55), temp0_997)
            float var_6e8[0x4] = temp0_1041
            float temp0_1045[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_1030, temp0_1030, 0x55), temp0_997)
            float temp0_1046[0x4] = _mm_add_ps(temp0_1043, temp0_1037)
            float temp0_1048[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_1024, temp0_1024, 0xff), temp0_999)
            float temp0_1050[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1030, temp0_1030, 0), temp0_994)
            float temp0_1051[0x4] = _mm_add_ps(temp0_1046, temp0_1040)
            float temp0_1053[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_1030, temp0_1030, 0xaa), temp0_1003)
            float temp0_1054[0x4] = _mm_add_ps(temp0_1045, temp0_1050)
            float temp0_1055[0x4] = _mm_shuffle_ps(temp0_1030, temp0_1030, 0xff)
            float temp0_1056[0x4] = _mm_add_ps(temp0_1051, temp0_1048)
            float temp0_1057[0x4] = _mm_mul_ps(temp0_1055, temp0_999)
            float temp0_1058[0x4] = _mm_shuffle_ps(temp0_1026, temp0_1026, 0)
            float temp0_1059[0x4] = _mm_add_ps(temp0_1054, temp0_1053)
            float temp0_1060[0x4] = _mm_mul_ps(temp0_1058, temp0_994)
            float temp0_1061[0x4] = _mm_shuffle_ps(temp0_1026, temp0_1026, 0xaa)
            float temp0_1063[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_1026, temp0_1026, 0x55), temp0_997)
            float temp0_1064[0x4] = _mm_add_ps(temp0_1059, temp0_1057)
            float temp0_1065[0x4] = _mm_mul_ps(temp0_1061, temp0_1003)
            float temp0_1066[0x4] = _mm_shuffle_ps(temp0_1026, temp0_1026, 0xff)
            float temp0_1067[0x4] = _mm_add_ps(temp0_1063, temp0_1060)
            float temp0_1068[0x4] = _mm_mul_ps(temp0_1066, temp0_999)
            int96_t var_6c8_1 = temp0_1064[0].12
            int96_t var_6b8_1 = _mm_add_ps(_mm_add_ps(temp0_1067, temp0_1065), temp0_1068)[0].12
            int128_t zmm11_4
            float zmm13_4[0x4]
            int64_t zmm15_6
            zmm11_4, zmm13_4, zmm15_6 = sub_1407740e0(&var_6e8, 0x322bcc77)
            uint32_t zmm6_8[0x4] =
                _mm_and_ps(data_143f51990 ^ zmm11_4, _mm_cmpeq_ps(var_678.o, zmm13_4, 2))
                ^ data_143f51990
            void var_568
            int64_t* rax_59 = sub_14173efa0(&var_6e8, &var_568, 1)
            float zmm1_15[0x4] = zmm6_8
            float zmm0_15 = zmm6_8[0]
            zmm6_8[0] = zmm6_8[0] f* *rax_59
            zmm1_15[0] = zmm1_15[0] f* *(rax_59 + 4)
            zmm0_15 = zmm0_15 f* rax_59[1].d
            var_6e8[0] = zmm6_8[0]
            var_6e8[1] = zmm1_15[0]
            var_6e8[2] = zmm0_15
            void var_55c
            int64_t* rax_60 = sub_14173efa0(&var_6e8, &var_55c, 2)
            uint32_t zmm2_14[0x4] = _mm_shuffle_ps(zmm6_8, zmm6_8, 0x55)
            zmm1_15 = zmm2_14
            zmm6_8 = _mm_shuffle_ps(zmm6_8, zmm6_8, 0xaa)
            zmm1_15[0] = zmm1_15[0] f* *rax_60
            float zmm0_16 = zmm2_14[0] f* *(rax_60 + 4)
            zmm2_14[0] = zmm2_14[0] f* rax_60[1].d
            temp0_1056[0] = zmm1_15[0]
            zmm1_15 = var_6c8_1:4.d
            temp0_1056[1] = zmm0_16
            temp0_1056[2] = zmm2_14[0]
            zmm2_14 = var_6c8_1.d
            zmm1_15[0] = zmm1_15[0] f* zmm6_8[0]
            zmm0_16 = var_6c8_1:8.d f* zmm6_8[0]
            zmm2_14[0] = zmm2_14[0] f* zmm6_8[0]
            var_6c8_1:4.d = zmm1_15[0]
            var_6c8_1:8.d = zmm0_16
            var_6c8_1.d = zmm2_14[0]
            sub_14077e4a0(&var_898, &var_6e8)
            uint32_t zmm5_10[0x4] = var_898
            float zmm6_9[0x4] = data_143f515a0
            uint32_t zmm1_16[0x4] = _mm_mul_ps(zmm5_10, zmm5_10)
            var_8a8[0] = 0x322bcc77
            float var_5e8_2[0x4] = zmm13_4
            zmm1_16 = _mm_add_ps(zmm1_16, _mm_shuffle_ps(zmm1_16, zmm1_16, 0x4e))
            uint32_t zmm4_14[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_16, zmm1_16, 0x39), zmm1_16)
            zmm1_16 = _mm_rsqrt_ps(zmm4_14)
            float temp0_1081[0x4] = _mm_mul_ps(zmm4_14, zmm6_9)
            float temp0_1086[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6_9, _mm_mul_ps(_mm_mul_ps(zmm1_16, zmm1_16), temp0_1081)), 
                    zmm1_16), 
                zmm1_16)
            float temp0_1089[0x4] =
                _mm_sub_ps(zmm6_9, _mm_mul_ps(_mm_mul_ps(temp0_1086, temp0_1086), temp0_1081))
            uint32_t zmm0_17[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_14, 2)
            zmm6_9 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_1089, temp0_1086), temp0_1086), zmm5_10)
                    ^ data_143f51590, 
                zmm0_17) ^ data_143f51590
            var_898 = zmm6_9
            float var_5f8_2[0x4] = _mm_unpacklo_ps(
                _mm_unpacklo_ps(var_6b8_1.d, var_6b8_1:8.d[0].q), 
                _mm_unpacklo_ps(var_6b8_1:4.d, zmm15_6)[0].q)
            var_608 = zmm6_9
        
        int64_t rcx_68 = sx.q(i_3) * 0x58
        
        if (arg6 == 0)
            void* rax_62 = arg9[0xc]
            void* rdx_39 = &arg9[0xa]
            
            if (rax_62 != 0)
                rdx_39 = rax_62
            
            var_8f8.d = arg_18
            result, zmm15 =
                sub_142248020(rcx_68 + arg1[8], *(rdx_39 + (rax_2 << 3)), &var_608, &var_8c0)
        else
            var_8f0.q = arg9
            var_8f8.d = r12_2
            result, zmm15 =
                sub_14224f2c0(rcx_68 + arg1[8], &var_608, &var_8c0, var_888, var_8f8.d, var_8f0)
        
        i_3 += 1
        r15_7 += 0x58
    while (i_3 s< arg1[9].d)

__security_check_cookie(rax_1 ^ &var_918)
return result
