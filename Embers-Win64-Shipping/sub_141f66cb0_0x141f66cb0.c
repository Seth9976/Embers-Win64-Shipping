// 函数: sub_141f66cb0
// 地址: 0x141f66cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
bool cond:0 = arg3:4.d != 0
float var_128[0x4]
float zmm1[0x4]
float zmm2[0x4]

if ((sub_140b5b8a0(arg3.d, 0) == 0 | cond:0) == 0)
label_141f67d73:
    
    if ((sub_140b5b8a0(arg3.d, 0) == 0 | cond:0) == 0)
        sub_141f3d4e0(arg1, arg2, arg3, arg4)
    else
        void* rcx_20 = *(arg1 + 0x440)
        
        if (rcx_20 == 0)
            sub_141f3d4e0(arg1, arg2, arg3, arg4)
        else
            void* rax_10 = sub_142361cb0(rcx_20, arg3)
            
            if (rax_10 == 0)
                sub_141f3d4e0(arg1, arg2, arg3, arg4)
            else
                float zmm3[0x4] = data_143f3b870
                zmm1 = zmm3
                zmm2 = zx.o(0)
                zmm3 = __andps_xmmxud_memxud(zmm3, data_143f3b880)
                zmm1[0].q = zmm2 u>> 0x40
                var_128 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
                
                if (sub_142367180(rax_10, &var_128, arg1) == 0)
                    sub_141f3d4e0(arg1, arg2, arg3, arg4)
                else if (arg4 == 0)
                    *arg2 = var_128
                    arg2[1] = zmm2
                    arg2[2] = zmm3
                else if (arg4 == 1)
                    void* rax_12 = *(arg1 + 0xa0)
                    
                    if (rax_12 == 0)
                        sub_141f3d4e0(arg1, arg2, arg3, arg4)
                    else
                        void* rbx_3 = *(rax_12 + 0x130)
                        
                        if (rbx_3 == 0)
                            sub_140ad7d70(&var_128, arg2, &data_143dbb0c0)
                        else
                            sub_140ad7d70(&var_128, arg2, rbx_3 + 0x1c0)
                else if (arg4 != 2)
                    sub_141f3d4e0(arg1, arg2, arg3, arg4)
                else
                    sub_140ad7d70(&var_128, arg2, arg1 + 0x1c0)
else
    void* rcx_1 = *(arg1 + 0x440)
    
    if (rcx_1 == 0)
        goto label_141f67d73
    
    void* rax_3 = sub_142361cb0(rcx_1, arg3)
    
    if (rax_3 == 0)
        goto label_141f67d73
    
    uint32_t rcx_2 = zx.d(*(arg1 + 0x525))
    int128_t zmm6
    int128_t zmm7
    int128_t zmm8
    
    if (rcx_2 == 0)
        zmm7 = 0x3f800000
        zmm6 = zx.o(0)
        zmm8 = 0x3f800000
    else if (rcx_2 == 1)
        zmm6 = 0x3f800000
        zmm7 = zx.o(0)
        zmm8 = 0x3f800000
    else if (rcx_2 == 2)
        zmm6 = 0x3f800000
        zmm8 = zx.o(0)
        zmm7 = 0x3f800000
    else
        zmm6 = data_143dbb1f8
        zmm7 = data_143dbb1fc
        zmm8 = data_143dbb200
    
    zmm6.d = zmm6.d f* *(rax_3 + 0x30)
    void* r14_1 = rax_3 + 0x38
    zmm8.d = zmm8.d f* *r14_1
    zmm7.d = zmm7.d f* *(rax_3 + 0x34)
    float var_138[0x4]
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    int64_t zmm8_1
    zmm6_1, zmm7_1, zmm8_1 = sub_140ade170(rax_3 + 0x3c, &var_138)
    int64_t zmm0_1 = *(rax_3 + 0x50)
    float zmm13[0x4] = *(rax_3 + 0x48)
    uint32_t rcx_5 = zx.d(*(arg1 + 0x525))
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm7_1, 0)
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_1, zmm8_1), temp0_2[0].q)
    float temp0_5[0x4] = _mm_unpacklo_ps(*(rax_3 + 0x4c), 0)
    var_138 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, zmm0_1), temp0_5[0].q)
    
    if (rcx_5 == 0)
        r14_1 = rax_3 + 0x30
    else if (rcx_5 == 1)
        r14_1 = rax_3 + 0x34
    
    float (* rax_5)[0x4]
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    float zmm14_1[0x4]
    rax_5, zmm12_1, zmm13_1, zmm14_1 = sub_141f57e90(arg1, &var_128, *r14_1)
    float zmm5_1[0x4] = data_143f3b8f0
    float zmm9_1[0x4] = data_143f3b8b0
    float zmm10_1[0x4] = data_143f3b8a0
    float zmm6_2[0x4] = rax_5[2]
    float zmm4_1[0x4] = *rax_5
    float zmm11_1[0x4] = data_143f3b890
    float zmm8_2[0x4] = data_143f3b880
    void* var_148_1
    var_148_1.o = zmm5_1
    float var_188[0x4]
    float zmm15_1[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13_1, zmm6_2), zmm5_1, 1)) == 0)
        zmm15_1 = var_138
        float temp0_140[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x1b)
        float temp0_142[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), temp0_140)
        float temp0_143[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        float temp0_144[0x4] = _mm_mul_ps(zmm12_1, zmm6_2)
        float temp0_145[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        float temp0_146[0x4] = _mm_mul_ps(temp0_142, zmm9_1)
        float temp0_147[0x4] = _mm_mul_ps(temp0_145, zmm14_1)
        float temp0_148[0x4] = _mm_shuffle_ps(temp0_144, temp0_144, 0xd2)
        zmm15_1 = _mm_mul_ps(zmm15_1, zmm6_2)
        float temp0_150[0x4] = _mm_add_ps(temp0_146, temp0_147)
        float temp0_152[0x4] = _mm_mul_ps(temp0_143, _mm_shuffle_ps(zmm14_1, zmm14_1, 0x4e))
        float temp0_155[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), _mm_shuffle_ps(zmm14_1, zmm14_1, 0xb1))
        float temp0_156[0x4] = _mm_mul_ps(temp0_152, zmm10_1)
        float temp0_157[0x4] = _mm_mul_ps(temp0_155, zmm11_1)
        float temp0_158[0x4] = _mm_add_ps(temp0_150, temp0_156)
        float temp0_159[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
        float temp0_160[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
        float temp0_161[0x4] = _mm_mul_ps(temp0_148, temp0_160)
        zmm13_1 = _mm_add_ps(temp0_158, temp0_157)
        float temp0_165[0x4] =
            _mm_sub_ps(temp0_161, _mm_mul_ps(_mm_shuffle_ps(temp0_144, temp0_144, 0xc9), temp0_159))
        float temp0_166[0x4] = _mm_add_ps(temp0_165, temp0_165)
        float temp0_167[0x4] = _mm_shuffle_ps(temp0_166, temp0_166, 0xd2)
        float temp0_168[0x4] = _mm_shuffle_ps(temp0_166, temp0_166, 0xc9)
        float temp0_169[0x4] = _mm_mul_ps(temp0_167, temp0_160)
        float temp0_170[0x4] = _mm_mul_ps(temp0_168, temp0_159)
        float temp0_171[0x4] = _mm_mul_ps(temp0_166, temp0_145)
        zmm14_1 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_169, temp0_170), _mm_add_ps(temp0_171, temp0_144)), 
            rax_5[1])
    else
        zmm10_1 = data_143f3b870
        float temp0_11[0x4] = _mm_add_ps(zmm4_1, zmm4_1)
        float temp0_12[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 4)
        _mm_mul_ps(zmm13_1, zmm6_2)
        float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0x29), temp0_12)
        float temp0_16[0x4] = _mm_mul_ps(temp0_11, zmm4_1)
        float temp0_17[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0x12), temp0_17)
        float temp0_20[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
        float temp0_23[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0x1a), 
            _mm_shuffle_ps(temp0_16, temp0_16, 1))
        float temp0_24[0x4] = _mm_add_ps(temp0_19, temp0_15)
        float temp0_25[0x4] = _mm_sub_ps(temp0_15, temp0_19)
        float temp0_26[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 4)
        float temp0_27[0x4] = _mm_mul_ps(temp0_24, zmm6_2)
        float temp0_28[0x4] = _mm_mul_ps(temp0_20, temp0_25)
        zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm10_1, temp0_23), zmm6_2), zmm8_2)
        zmm8_2 = rax_5[1]
        float temp0_32[0x4] = _mm_shuffle_ps(temp0_28, zmm1, 0x32)
        float temp0_34[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, zmm1, 0), temp0_32, 0x82)
        float temp0_35[0x4] = _mm_shuffle_ps(temp0_27, zmm1, 0x31)
        float temp0_37[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_28, zmm1, 0x10), temp0_35, 0x88)
        float temp0_39[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, temp0_28, 0x12), zmm1, 0xe8)
        float temp0_40[0x4] = _mm_add_ps(zmm14_1, zmm14_1)
        zmm10_1[0].q = zmm8_2 u>> 0x40
        float temp0_41[0x4] = _mm_shuffle_ps(zmm8_2, zmm10_1, 0xc4)
        float temp0_42[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xff)
        float temp0_43[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xc9)
        float temp0_44[0x4] = _mm_mul_ps(zmm14_1, temp0_40)
        float temp0_46[0x4] = _mm_mul_ps(temp0_26, _mm_shuffle_ps(temp0_40, temp0_40, 0x29))
        float temp0_47[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x12)
        float temp0_48[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x1a)
        float temp0_49[0x4] = _mm_mul_ps(temp0_42, temp0_47)
        float temp0_51[0x4] = _mm_add_ps(temp0_48, _mm_shuffle_ps(temp0_44, temp0_44, 1))
        float temp0_52[0x4] = _mm_add_ps(temp0_49, temp0_46)
        float temp0_53[0x4] = _mm_sub_ps(temp0_46, temp0_49)
        float temp0_54[0x4] = _mm_sub_ps(zmm10_1, temp0_51)
        float temp0_55[0x4] = _mm_mul_ps(temp0_52, zmm13_1)
        float temp0_56[0x4] = _mm_mul_ps(temp0_43, temp0_53)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_54, zmm13_1), data_143f3b880)
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, zmm1, 0x32)
        float temp0_61[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_55, zmm1, 0), temp0_59, 0x82)
        float temp0_64[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_56, zmm1, 0x10), 
            _mm_shuffle_ps(temp0_55, zmm1, 0x31), 0x88)
        float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0x55), temp0_37)
        zmm10_1[0].q = zmm12_1 u>> 0x40
        float temp0_67[0x4] = _mm_shuffle_ps(zmm12_1, zmm10_1, 0xc4)
        float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0), temp0_34)
        float temp0_71[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_55, temp0_56, 0x12), zmm1, 0xe8)
        float temp0_72[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xaa)
        float temp0_73[0x4] = _mm_add_ps(temp0_66, temp0_69)
        float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xff), temp0_41)
        float temp0_76[0x4] = _mm_mul_ps(temp0_72, temp0_39)
        float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0), temp0_34)
        float temp0_79[0x4] = _mm_add_ps(temp0_73, temp0_76)
        float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_39)
        float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_75)
        float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0x55), temp0_37)
        float temp0_85[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xff)
        var_188 = temp0_82
        float temp0_86[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x55)
        float temp0_87[0x4] = _mm_add_ps(temp0_84, temp0_78)
        float temp0_88[0x4] = _mm_mul_ps(temp0_86, temp0_37)
        float temp0_89[0x4] = _mm_mul_ps(temp0_85, temp0_41)
        float temp0_90[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0)
        float temp0_91[0x4] = _mm_add_ps(temp0_87, temp0_81)
        float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_34)
        float temp0_94[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xaa), temp0_39)
        float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_89)
        float temp0_96[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0xff)
        float temp0_97[0x4] = _mm_add_ps(temp0_88, temp0_92)
        float temp0_98[0x4] = _mm_mul_ps(temp0_96, temp0_41)
        float temp0_99[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0)
        int96_t var_178_1 = temp0_95[0].12
        float temp0_100[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x55)
        float temp0_101[0x4] = _mm_add_ps(temp0_97, temp0_94)
        float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_37)
        float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xaa), temp0_39)
        float temp0_105[0x4] = _mm_mul_ps(temp0_99, temp0_34)
        float temp0_106[0x4] = _mm_add_ps(temp0_101, temp0_98)
        float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xff), temp0_41)
        float temp0_109[0x4] = _mm_add_ps(temp0_102, temp0_105)
        int96_t var_168_1 = temp0_106[0].12
        int96_t var_158_1 = _mm_add_ps(_mm_add_ps(temp0_109, temp0_104), temp0_108)[0].12
        zmm10_1, zmm15_1 = sub_1407740e0(&var_188, 0x322bcc77)
        float zmm2_2[0x4] = var_188[0]
        float zmm1_1 = var_188[1]
        float zmm4_2[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(data_143f3b8f0, zmm15_1, 2), data_143f3b8e0 ^ zmm10_1)
        uint32_t zmm0_2[0x4] = var_188[2]
        zmm4_2 ^= data_143f3b8e0
        zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
        zmm1_1 = zmm1_1 * zmm4_2[0]
        zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
        var_188[0] = zmm2_2[0]
        float temp0_114[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
        var_188[2] = zmm0_2[0]
        zmm0_2 = var_178_1:8.d
        zmm0_2[0] = zmm0_2[0] f* temp0_114[0]
        var_188[1] = zmm1_1
        zmm1_1 = var_178_1:4.d * temp0_114[0]
        float zmm3_1 = var_178_1.d * temp0_114[0]
        zmm2_2 = var_168_1.d
        float temp0_115[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
        var_178_1:8.d = zmm0_2[0]
        zmm0_2 = var_168_1:8.d
        var_178_1:4.d = zmm1_1
        zmm0_2[0] = zmm0_2[0] f* temp0_115[0]
        zmm2_2[0] = zmm2_2[0] * temp0_115[0]
        zmm1_1 = var_168_1:4.d * temp0_115[0]
        var_168_1:8.d = zmm0_2[0]
        var_178_1.d = zmm3_1
        var_168_1.d = zmm2_2[0]
        var_168_1:4.d = zmm1_1
        sub_14077e4a0(&var_138, &var_188)
        zmm5_1 = var_138
        zmm13_1 = data_143f3b8d0
        zmm9_1 = data_143f3b8b0
        zmm10_1 = data_143f3b8a0
        zmm11_1 = data_143f3b890
        zmm8_2 = data_143f3b880
        float temp0_116[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
        var_148_1.d = 0x322bcc77
        float temp0_118[0x4] = _mm_add_ps(temp0_116, _mm_shuffle_ps(temp0_116, temp0_116, 0x4e))
        float temp0_120[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0x39), temp0_118)
        float temp0_121[0x4] = _mm_rsqrt_ps(temp0_120)
        float temp0_122[0x4] = _mm_mul_ps(temp0_120, zmm13_1)
        float temp0_127[0x4] = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(zmm13_1, _mm_mul_ps(_mm_mul_ps(temp0_121, temp0_121), temp0_122)), 
                temp0_121), 
            temp0_121)
        float temp0_130[0x4] =
            _mm_sub_ps(zmm13_1, _mm_mul_ps(_mm_mul_ps(temp0_127, temp0_127), temp0_122))
        float temp0_132[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_120, 2)
        float temp0_134[0x4] = _mm_add_ps(_mm_mul_ps(temp0_130, temp0_127), temp0_127)
        float temp0_135[0x4] = _mm_unpacklo_ps(var_158_1:4.d, 0)
        float temp0_136[0x4] = _mm_mul_ps(temp0_134, zmm5_1)
        zmm5_1 = data_143f3b8f0
        var_148_1.o = zmm5_1
        zmm13_1 = _mm_and_ps(temp0_136 ^ data_143f3b8c0, temp0_132) ^ data_143f3b8c0
        zmm14_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_1.d, var_158_1:8.d[0].q), temp0_135[0].q)
    
    float zmm7_2[0x4]
    
    if (arg4 == 0)
        zmm1 = data_143f3b870
        zmm2 = zx.o(0)
        arg2[1] = zmm2
        zmm1[0].q = zmm2 u>> 0x40
        *arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
        arg2[2] = _mm_and_ps(data_143f3b870, zmm8_2)
        zmm8_2 = *(arg1 + 0x1e0)
        zmm7_2 = *(arg1 + 0x1c0)
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm15_1, zmm8_2), data_143f3b8f0, 
                1)) == 0)
            zmm6_2 = *(arg1 + 0x1d0)
            float temp0_478[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x1b)
            float temp0_479[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x55)
            float temp0_481[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7_2, zmm7_2, 0), temp0_478)
            float temp0_482[0x4] = _mm_mul_ps(zmm8_2, zmm14_1)
            float temp0_483[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xff)
            float temp0_484[0x4] = _mm_mul_ps(zmm13_1, temp0_483)
            float temp0_485[0x4] = _mm_mul_ps(temp0_481, zmm9_1)
            float temp0_486[0x4] = _mm_shuffle_ps(temp0_482, temp0_482, 0xd2)
            float temp0_487[0x4] = _mm_mul_ps(zmm8_2, zmm15_1)
            float temp0_488[0x4] = _mm_add_ps(temp0_485, temp0_484)
            float temp0_490[0x4] = _mm_mul_ps(temp0_479, _mm_shuffle_ps(zmm13_1, zmm13_1, 0x4e))
            float temp0_493[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7_2, zmm7_2, 0xaa), 
                _mm_shuffle_ps(zmm13_1, zmm13_1, 0xb1))
            float temp0_494[0x4] = _mm_mul_ps(temp0_490, zmm10_1)
            arg2[2] = temp0_487
            float temp0_495[0x4] = _mm_mul_ps(temp0_493, zmm11_1)
            float temp0_497[0x4] = _mm_add_ps(_mm_add_ps(temp0_488, temp0_494), temp0_495)
            float temp0_498[0x4] = _mm_shuffle_ps(temp0_482, temp0_482, 0xc9)
            *arg2 = temp0_497
            float temp0_499[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xd2)
            float temp0_500[0x4] = _mm_mul_ps(temp0_498, temp0_499)
            float temp0_501[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xc9)
            float temp0_503[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_486, temp0_501), temp0_500)
            float temp0_504[0x4] = _mm_add_ps(temp0_503, temp0_503)
            float temp0_505[0x4] = _mm_shuffle_ps(temp0_504, temp0_504, 0xd2)
            float temp0_506[0x4] = _mm_shuffle_ps(temp0_504, temp0_504, 0xc9)
            float temp0_507[0x4] = _mm_mul_ps(temp0_505, temp0_501)
            float temp0_508[0x4] = _mm_mul_ps(temp0_506, temp0_499)
            float temp0_509[0x4] = _mm_mul_ps(temp0_504, temp0_483)
            arg2[1] = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(temp0_507, temp0_508), _mm_add_ps(temp0_509, temp0_482)), 
                zmm6_2)
        else
            zmm10_1 = data_143f3b870
            float temp0_349[0x4] = _mm_add_ps(zmm7_2, zmm7_2)
            float temp0_350[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 4)
            float temp0_351[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xc9)
            float temp0_352[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xff)
            _mm_mul_ps(zmm8_2, zmm15_1)
            float temp0_354[0x4] = _mm_mul_ps(zmm7_2, temp0_349)
            float temp0_356[0x4] = _mm_mul_ps(temp0_350, _mm_shuffle_ps(temp0_349, temp0_349, 0x29))
            float temp0_357[0x4] = _mm_shuffle_ps(temp0_349, temp0_349, 0x12)
            float temp0_358[0x4] = _mm_shuffle_ps(temp0_354, temp0_354, 0x1a)
            float temp0_359[0x4] = _mm_mul_ps(temp0_352, temp0_357)
            float temp0_361[0x4] = _mm_add_ps(temp0_358, _mm_shuffle_ps(temp0_354, temp0_354, 1))
            float temp0_362[0x4] = _mm_add_ps(temp0_359, temp0_356)
            float temp0_363[0x4] = _mm_sub_ps(temp0_356, temp0_359)
            float temp0_364[0x4] = _mm_sub_ps(zmm10_1, temp0_361)
            float temp0_365[0x4] = _mm_mul_ps(temp0_362, zmm8_2)
            float temp0_366[0x4] = _mm_mul_ps(temp0_351, temp0_363)
            float temp0_367[0x4] = _mm_mul_ps(temp0_364, zmm8_2)
            zmm8_2 = *(arg1 + 0x1d0)
            float temp0_368[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 4)
            zmm1 = __andps_xmmxud_memxud(temp0_367, data_143f3b880)
            float temp0_370[0x4] = _mm_shuffle_ps(temp0_366, zmm1, 0x32)
            float temp0_372[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_365, zmm1, 0), temp0_370, 0x82)
            float temp0_373[0x4] = _mm_shuffle_ps(temp0_365, zmm1, 0x31)
            float temp0_375[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_366, zmm1, 0x10), temp0_373, 0x88)
            float temp0_377[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_365, temp0_366, 0x12), zmm1, 0xe8)
            float temp0_378[0x4] = _mm_add_ps(zmm13_1, zmm13_1)
            zmm10_1[0].q = zmm8_2 u>> 0x40
            float temp0_379[0x4] = _mm_shuffle_ps(zmm8_2, zmm10_1, 0xc4)
            float temp0_380[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xff)
            float temp0_381[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xc9)
            float temp0_382[0x4] = _mm_mul_ps(zmm13_1, temp0_378)
            float temp0_384[0x4] = _mm_mul_ps(temp0_368, _mm_shuffle_ps(temp0_378, temp0_378, 0x29))
            float temp0_385[0x4] = _mm_shuffle_ps(temp0_378, temp0_378, 0x12)
            float temp0_386[0x4] = _mm_shuffle_ps(temp0_382, temp0_382, 0x1a)
            float temp0_387[0x4] = _mm_mul_ps(temp0_380, temp0_385)
            float temp0_389[0x4] = _mm_add_ps(temp0_386, _mm_shuffle_ps(temp0_382, temp0_382, 1))
            float temp0_390[0x4] = _mm_add_ps(temp0_387, temp0_384)
            float temp0_391[0x4] = _mm_sub_ps(temp0_384, temp0_387)
            float temp0_392[0x4] = _mm_sub_ps(zmm10_1, temp0_389)
            float temp0_393[0x4] = _mm_mul_ps(temp0_390, zmm15_1)
            float temp0_394[0x4] = _mm_mul_ps(temp0_381, temp0_391)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_392, zmm15_1), data_143f3b880)
            float temp0_397[0x4] = _mm_shuffle_ps(temp0_394, zmm1, 0x32)
            float temp0_399[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_393, zmm1, 0), temp0_397, 0x82)
            float temp0_400[0x4] = _mm_shuffle_ps(temp0_393, zmm1, 0x31)
            float temp0_402[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_394, zmm1, 0x10), temp0_400, 0x88)
            float temp0_404[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_393, temp0_394, 0x12), zmm1, 0xe8)
            float temp0_405[0x4] = _mm_shuffle_ps(temp0_399, temp0_399, 0xaa)
            float temp0_406[0x4] = _mm_shuffle_ps(temp0_399, temp0_399, 0x55)
            float temp0_407[0x4] = _mm_mul_ps(temp0_405, temp0_377)
            float temp0_408[0x4] = _mm_mul_ps(temp0_406, temp0_375)
            zmm10_1[0].q = zmm14_1 u>> 0x40
            float temp0_409[0x4] = _mm_shuffle_ps(zmm14_1, zmm10_1, 0xc4)
            float temp0_410[0x4] = _mm_shuffle_ps(temp0_399, temp0_399, 0)
            float temp0_412[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_399, temp0_399, 0xff), temp0_379)
            float temp0_414[0x4] = _mm_add_ps(temp0_408, _mm_mul_ps(temp0_410, temp0_372))
            float temp0_416[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_402, temp0_402, 0), temp0_372)
            float temp0_417[0x4] = _mm_add_ps(temp0_414, temp0_407)
            float temp0_419[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_402, temp0_402, 0xaa), temp0_377)
            float temp0_420[0x4] = _mm_add_ps(temp0_417, temp0_412)
            float temp0_422[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_402, temp0_402, 0x55), temp0_375)
            float temp0_423[0x4] = _mm_shuffle_ps(temp0_402, temp0_402, 0xff)
            var_188 = temp0_420
            float temp0_424[0x4] = _mm_shuffle_ps(temp0_404, temp0_404, 0x55)
            float temp0_425[0x4] = _mm_add_ps(temp0_422, temp0_416)
            float temp0_426[0x4] = _mm_mul_ps(temp0_424, temp0_375)
            float temp0_427[0x4] = _mm_mul_ps(temp0_423, temp0_379)
            float temp0_428[0x4] = _mm_shuffle_ps(temp0_404, temp0_404, 0)
            float temp0_429[0x4] = _mm_add_ps(temp0_425, temp0_419)
            float temp0_430[0x4] = _mm_mul_ps(temp0_428, temp0_372)
            float temp0_432[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_404, temp0_404, 0xaa), temp0_377)
            float temp0_433[0x4] = _mm_add_ps(temp0_429, temp0_427)
            float temp0_434[0x4] = _mm_shuffle_ps(temp0_404, temp0_404, 0xff)
            float temp0_435[0x4] = _mm_add_ps(temp0_426, temp0_430)
            float temp0_436[0x4] = _mm_mul_ps(temp0_434, temp0_379)
            float temp0_437[0x4] = _mm_shuffle_ps(temp0_409, temp0_409, 0)
            int96_t var_178_3 = temp0_433[0].12
            float temp0_438[0x4] = _mm_shuffle_ps(temp0_409, temp0_409, 0x55)
            float temp0_439[0x4] = _mm_add_ps(temp0_435, temp0_432)
            float temp0_440[0x4] = _mm_mul_ps(temp0_438, temp0_375)
            float temp0_442[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_409, temp0_409, 0xaa), temp0_377)
            float temp0_443[0x4] = _mm_mul_ps(temp0_437, temp0_372)
            float temp0_444[0x4] = _mm_add_ps(temp0_439, temp0_436)
            float temp0_446[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_409, temp0_409, 0xff), temp0_379)
            float temp0_447[0x4] = _mm_add_ps(temp0_440, temp0_443)
            int96_t var_168_3 = temp0_444[0].12
            int96_t var_158_3 = _mm_add_ps(_mm_add_ps(temp0_447, temp0_442), temp0_446)[0].12
            int128_t zmm10_3
            float zmm12_3[0x4]
            zmm10_3, zmm12_3 = sub_1407740e0(&var_188, 0x322bcc77)
            float zmm2_5[0x4] = var_188[0]
            float zmm0_5 = var_188[2]
            uint32_t temp0_451[0x4] =
                _mm_and_ps(data_143f3b8e0 ^ zmm10_3, _mm_cmpeq_ps(data_143f3b8f0, zmm12_3, 2))
            float zmm1_4[0x4] = var_188[1]
            uint32_t zmm4_5[0x4] = temp0_451 ^ data_143f3b8e0
            zmm2_5[0] = zmm2_5[0] f* zmm4_5[0]
            zmm1_4[0] = zmm1_4[0] f* zmm4_5[0]
            var_188[0] = zmm2_5[0]
            zmm0_5 = zmm0_5 f* zmm4_5[0]
            var_188[1] = zmm1_4[0]
            zmm1_4 = var_178_3:4.d
            var_188[2] = zmm0_5
            float temp0_452[0x4] = _mm_shuffle_ps(zmm4_5, zmm4_5, 0x55)
            zmm1_4[0] = zmm1_4[0] * temp0_452[0]
            zmm0_5 = var_178_3:8.d * temp0_452[0]
            float zmm3_4 = var_178_3.d * temp0_452[0]
            zmm2_5 = var_168_3.d
            zmm4_5 = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xaa)
            var_178_3:4.d = zmm1_4[0]
            zmm1_4 = var_168_3:4.d
            var_178_3:8.d = zmm0_5
            zmm1_4[0] = zmm1_4[0] f* zmm4_5[0]
            zmm0_5 = var_168_3:8.d f* zmm4_5[0]
            zmm2_5[0] = zmm2_5[0] f* zmm4_5[0]
            var_168_3:4.d = zmm1_4[0]
            var_168_3:8.d = zmm0_5
            var_178_3.d = zmm3_4
            var_168_3.d = zmm2_5[0]
            sub_14077e4a0(&var_138, &var_188)
            float zmm6_4[0x4] = var_138
            float zmm5_3[0x4] = data_143f3b8d0
            float temp0_454[0x4] = _mm_mul_ps(zmm6_4, zmm6_4)
            var_148_1.d = 0x322bcc77
            float temp0_456[0x4] = _mm_add_ps(temp0_454, _mm_shuffle_ps(temp0_454, temp0_454, 0x4e))
            float temp0_458[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_456, temp0_456, 0x39), temp0_456)
            float temp0_459[0x4] = _mm_rsqrt_ps(temp0_458)
            float temp0_460[0x4] = _mm_mul_ps(temp0_458, zmm5_3)
            float temp0_465[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(temp0_459, temp0_459), temp0_460)), 
                    temp0_459), 
                temp0_459)
            float temp0_468[0x4] =
                _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(temp0_465, temp0_465), temp0_460))
            uint32_t zmm0_6[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_458, 2)
            float temp0_472[0x4] = _mm_add_ps(_mm_mul_ps(temp0_468, temp0_465), temp0_465)
            float temp0_473[0x4] = _mm_unpacklo_ps(var_158_3:4.d, 0)
            zmm5_3 =
                _mm_and_ps(_mm_mul_ps(temp0_472, zmm6_4) ^ data_143f3b8c0, zmm0_6) ^ data_143f3b8c0
            arg2[1] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_3.d, var_158_3:8.d[0].q), temp0_473[0].q)
            arg2[2] = zmm12_3
            *arg2 = zmm5_3
    else if (arg4 == 1)
        void* rax_6 = *(arg1 + 0xa0)
        
        if (rax_6 == 0)
            goto label_141f67d73
        
        void* rbx_1 = *(rax_6 + 0x130)
        int128_t* rbx_2
        
        if (rbx_1 == 0)
            rbx_2 = &data_143dbb0c0
        else
            rbx_2 = rbx_1 + 0x1c0
        
        zmm7_2 = *(arg1 + 0x1e0)
        zmm6_2 = *(arg1 + 0x1c0)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15_1, zmm7_2), zmm5_1, 1)) == 0)
            float temp0_308[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0)
            float temp0_309[0x4] = _mm_mul_ps(zmm7_2, zmm14_1)
            float temp0_311[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0x1b), temp0_308)
            float temp0_312[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x4e)
            float temp0_313[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
            float temp0_314[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xd2)
            float temp0_315[0x4] = _mm_mul_ps(temp0_313, zmm13_1)
            float temp0_316[0x4] = _mm_mul_ps(temp0_311, zmm9_1)
            float temp0_317[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xb1)
            float temp0_318[0x4] = _mm_mul_ps(zmm7_2, zmm15_1)
            float temp0_319[0x4] = _mm_add_ps(temp0_316, temp0_315)
            float temp0_321[0x4] = _mm_mul_ps(temp0_312, _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55))
            float temp0_323[0x4] = _mm_mul_ps(temp0_317, _mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa))
            float temp0_324[0x4] = _mm_mul_ps(temp0_321, zmm10_1)
            float temp0_326[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_309, temp0_309, 0xc9), temp0_314)
            float temp0_327[0x4] = _mm_add_ps(temp0_319, temp0_324)
            float temp0_328[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
            float var_108_2[0x4] = temp0_318
            var_128 = _mm_add_ps(temp0_327, _mm_mul_ps(temp0_323, zmm11_1))
            float temp0_333[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_309, temp0_309, 0xd2), temp0_328), temp0_326)
            float temp0_334[0x4] = _mm_add_ps(temp0_333, temp0_333)
            float temp0_335[0x4] = _mm_mul_ps(temp0_313, temp0_334)
            float temp0_337[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_334, temp0_334, 0xd2), temp0_328)
            float temp0_338[0x4] = _mm_shuffle_ps(temp0_334, temp0_334, 0xc9)
            float temp0_339[0x4] = _mm_add_ps(temp0_335, temp0_309)
            float var_118_2[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_337, _mm_mul_ps(temp0_338, temp0_314)), temp0_339), 
                *(arg1 + 0x1d0))
            sub_140ad7d70(&var_128, arg2, rbx_2)
        else
            zmm10_1 = data_143f3b870
            float temp0_179[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 4)
            float temp0_180[0x4] = _mm_add_ps(zmm6_2, zmm6_2)
            float temp0_181[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xc9)
            _mm_mul_ps(zmm7_2, zmm15_1)
            float temp0_184[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0x29), temp0_179)
            float temp0_185[0x4] = _mm_mul_ps(temp0_180, zmm6_2)
            float temp0_188[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0x12), 
                _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff))
            float temp0_191[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_185, temp0_185, 0x1a), 
                _mm_shuffle_ps(temp0_185, temp0_185, 1))
            float temp0_192[0x4] = _mm_add_ps(temp0_188, temp0_184)
            float temp0_193[0x4] = _mm_sub_ps(temp0_184, temp0_188)
            float temp0_194[0x4] = _mm_add_ps(zmm13_1, zmm13_1)
            float temp0_195[0x4] = _mm_mul_ps(temp0_192, zmm7_2)
            float temp0_196[0x4] = _mm_mul_ps(temp0_181, temp0_193)
            float temp0_197[0x4] = _mm_mul_ps(temp0_194, zmm13_1)
            zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm10_1, temp0_191), zmm7_2), zmm8_2)
            zmm8_2 = *(arg1 + 0x1d0)
            float temp0_201[0x4] = _mm_shuffle_ps(temp0_196, zmm1, 0x32)
            float temp0_203[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_195, zmm1, 0), temp0_201, 0x82)
            float temp0_204[0x4] = _mm_shuffle_ps(temp0_195, zmm1, 0x31)
            float temp0_206[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_196, zmm1, 0x10), temp0_204, 0x88)
            float temp0_208[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_195, temp0_196, 0x12), zmm1, 0xe8)
            float temp0_209[0x4] = _mm_shuffle_ps(temp0_194, temp0_194, 0x29)
            zmm10_1[0].q = zmm8_2 u>> 0x40
            float temp0_210[0x4] = _mm_shuffle_ps(zmm8_2, zmm10_1, 0xc4)
            float temp0_212[0x4] = _mm_mul_ps(temp0_209, _mm_shuffle_ps(zmm13_1, zmm13_1, 4))
            float temp0_215[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_197, temp0_197, 0x1a), 
                _mm_shuffle_ps(temp0_197, temp0_197, 1))
            float temp0_216[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xff)
            float temp0_218[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_194, temp0_194, 0x12), temp0_216)
            float temp0_219[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xc9)
            float temp0_220[0x4] = _mm_add_ps(temp0_218, temp0_212)
            float temp0_221[0x4] = _mm_sub_ps(temp0_212, temp0_218)
            float temp0_222[0x4] = _mm_mul_ps(temp0_220, zmm15_1)
            float temp0_223[0x4] = _mm_mul_ps(temp0_219, temp0_221)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10_1, temp0_215), zmm15_1), 
                data_143f3b880)
            float temp0_227[0x4] = _mm_shuffle_ps(temp0_223, zmm1, 0x32)
            float temp0_229[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_222, zmm1, 0), temp0_227, 0x82)
            float temp0_230[0x4] = _mm_shuffle_ps(temp0_222, zmm1, 0x31)
            float temp0_232[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_223, zmm1, 0x10), temp0_230, 0x88)
            float temp0_233[0x4] = _mm_shuffle_ps(temp0_222, temp0_223, 0x12)
            float temp0_234[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0x55)
            float temp0_235[0x4] = _mm_shuffle_ps(temp0_233, zmm1, 0xe8)
            float temp0_236[0x4] = _mm_mul_ps(temp0_234, temp0_206)
            float temp0_238[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xaa), temp0_208)
            zmm10_1[0].q = zmm14_1 u>> 0x40
            float temp0_239[0x4] = _mm_shuffle_ps(zmm14_1, zmm10_1, 0xc4)
            float temp0_240[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0)
            float temp0_242[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xff), temp0_210)
            float temp0_244[0x4] = _mm_add_ps(temp0_236, _mm_mul_ps(temp0_240, temp0_203))
            float temp0_246[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0), temp0_203)
            float temp0_247[0x4] = _mm_add_ps(temp0_244, temp0_238)
            float temp0_249[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xaa), temp0_208)
            float temp0_250[0x4] = _mm_add_ps(temp0_247, temp0_242)
            float temp0_252[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0x55), temp0_206)
            float temp0_253[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0xff)
            var_188 = temp0_250
            float temp0_254[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0x55)
            float temp0_255[0x4] = _mm_add_ps(temp0_252, temp0_246)
            float temp0_256[0x4] = _mm_mul_ps(temp0_254, temp0_206)
            float temp0_257[0x4] = _mm_mul_ps(temp0_253, temp0_210)
            float temp0_258[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0)
            float temp0_259[0x4] = _mm_add_ps(temp0_255, temp0_249)
            float temp0_260[0x4] = _mm_mul_ps(temp0_258, temp0_203)
            float temp0_262[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0xaa), temp0_208)
            float temp0_263[0x4] = _mm_add_ps(temp0_256, temp0_260)
            float temp0_264[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0xff)
            float temp0_265[0x4] = _mm_add_ps(temp0_259, temp0_257)
            float temp0_266[0x4] = _mm_mul_ps(temp0_264, temp0_210)
            float temp0_267[0x4] = _mm_shuffle_ps(temp0_239, temp0_239, 0)
            float temp0_268[0x4] = _mm_add_ps(temp0_263, temp0_262)
            float temp0_269[0x4] = _mm_mul_ps(temp0_267, temp0_203)
            int96_t var_178_2 = temp0_265[0].12
            float temp0_270[0x4] = _mm_shuffle_ps(temp0_239, temp0_239, 0x55)
            float temp0_271[0x4] = _mm_add_ps(temp0_268, temp0_266)
            float temp0_272[0x4] = _mm_mul_ps(temp0_270, temp0_206)
            int96_t var_168_2 = temp0_271[0].12
            float temp0_273[0x4] = _mm_add_ps(temp0_272, temp0_269)
            float temp0_275[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_239, temp0_239, 0xaa), temp0_208)
            float temp0_277[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_239, temp0_239, 0xff), temp0_210)
            int96_t var_158_2 = _mm_add_ps(_mm_add_ps(temp0_273, temp0_275), temp0_277)[0].12
            int128_t zmm10_2
            float zmm12_2[0x4]
            zmm10_2, zmm12_2 = sub_1407740e0(&var_188, 0x322bcc77)
            float zmm2_3[0x4] = var_188[0]
            float zmm1_2 = var_188[1]
            float zmm4_3[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(var_148_1.o, zmm12_2, 2), data_143f3b8e0 ^ zmm10_2)
            uint32_t zmm0_3[0x4] = var_188[2]
            zmm4_3 ^= data_143f3b8e0
            zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
            zmm1_2 = zmm1_2 * zmm4_3[0]
            var_188[0] = zmm2_3[0]
            zmm0_3[0] = zmm0_3[0] f* zmm4_3[0]
            var_188[1] = zmm1_2
            float temp0_282[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
            zmm1_2 = var_178_2:4.d * temp0_282[0]
            var_188[2] = zmm0_3[0]
            zmm0_3 = var_178_2:8.d
            zmm0_3[0] = zmm0_3[0] f* temp0_282[0]
            float zmm3_2 = var_178_2.d * temp0_282[0]
            zmm2_3 = var_168_2.d
            float temp0_283[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
            var_178_2:4.d = zmm1_2
            var_178_2:8.d = zmm0_3[0]
            zmm0_3 = var_168_2:8.d
            zmm1_2 = var_168_2:4.d * temp0_283[0]
            zmm0_3[0] = zmm0_3[0] f* temp0_283[0]
            zmm2_3[0] = zmm2_3[0] * temp0_283[0]
            var_168_2:4.d = zmm1_2
            var_168_2:8.d = zmm0_3[0]
            var_178_2.d = zmm3_2
            var_168_2.d = zmm2_3[0]
            sub_14077e4a0(&var_138, &var_188)
            float zmm6_3[0x4] = var_138
            float zmm5_2[0x4] = data_143f3b8d0
            float temp0_284[0x4] = _mm_mul_ps(zmm6_3, zmm6_3)
            var_148_1.d = 0x322bcc77
            float var_108_1[0x4] = zmm12_2
            float temp0_286[0x4] = _mm_add_ps(temp0_284, _mm_shuffle_ps(temp0_284, temp0_284, 0x4e))
            float temp0_288[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_286, temp0_286, 0x39), temp0_286)
            float temp0_289[0x4] = _mm_rsqrt_ps(temp0_288)
            float temp0_290[0x4] = _mm_mul_ps(temp0_288, zmm5_2)
            float temp0_295[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_289, temp0_289), temp0_290)), 
                    temp0_289), 
                temp0_289)
            float temp0_298[0x4] =
                _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_295, temp0_295), temp0_290))
            uint32_t zmm0_4[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_288, 2)
            float temp0_302[0x4] = _mm_add_ps(_mm_mul_ps(temp0_298, temp0_295), temp0_295)
            float temp0_303[0x4] = _mm_unpacklo_ps(var_158_2:4.d, 0)
            zmm5_2 =
                _mm_and_ps(_mm_mul_ps(temp0_302, zmm6_3) ^ data_143f3b8c0, zmm0_4) ^ data_143f3b8c0
            float var_118_1[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_2.d, var_158_2:8.d[0].q), temp0_303[0].q)
            var_128 = zmm5_2
            sub_140ad7d70(&var_128, arg2, rbx_2)
    else
        if (arg4 != 2)
            goto label_141f67d73
        
        *arg2 = zmm13_1
        arg2[1] = zmm14_1
        arg2[2] = zmm15_1
__security_check_cookie(rax_1 ^ &var_1b8)
return arg2
