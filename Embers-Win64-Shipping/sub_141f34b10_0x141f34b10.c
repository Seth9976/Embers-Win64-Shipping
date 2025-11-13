// 函数: sub_141f34b10
// 地址: 0x141f34b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm10[0x4]
float var_58[0x4] = zmm10
float zmm11[0x4]
float var_68[0x4] = zmm11
float zmm12[0x4]
float var_78[0x4] = zmm12
float zmm13[0x4]
float var_88[0x4] = zmm13
int128_t zmm14
int128_t var_98 = zmm14
float zmm15[0x4]
float var_a8[0x4] = zmm15
float var_158[0x4]
float var_138[0x4]

if (arg1[0xb5].b s>= 0)
    int32_t rax_4 = arg1[0xd2].d
    int64_t var_188 = arg1[0xd1]
    int32_t var_180_3 = rax_4
    
    if (sub_140d3e110(&arg1[0x87]) != 0)
        void* rax_6 = sub_140d3c6e0(&arg1[0x87])
        
        if (*(rax_6 + 0x430) != 0 && (*(rax_6 + 0x5a7) & 2) != 0)
            void* rax_7 = sub_142591550()
            void* rdx_1 = *(rax_6 + 0x10)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
                var_188 = *(rax_6 + 0x688)
                int32_t var_180_4 = *(rax_6 + 0x690)
    
    uint32_t var_178[0x4]
    sub_141f57b40(arg1, &var_178, &var_188, *(arg1 + 0x719) u>> 4 & 1, arg3)
    int64_t var_168
    int32_t var_160
    
    if ((*(arg1 + 0x71d) & 2) != 0)
        float zmm6_2[0x4] = *(arg1 + 0x1d0)
        float zmm9_1[0x4] = var_168.d
        int64_t zmm7_2
        zmm7_2.d = zmm6_2[0].q.d f- 1f
        float zmm8_1[0x4] = var_168:4.d
        int64_t zmm4_2 = var_178[1]
        float zmm3_2[0x4] = var_178[2]
        int64_t zmm5_2 = var_178[0]
        int64_t zmm1_2
        zmm1_2.d = zmm4_2.d f- zmm9_1[0]
        float zmm10_1[0x4] = var_178[3]
        zmm9_1[0] = zmm9_1[0] f+ zmm4_2.d
        float temp0_168[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
        float temp0_169[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa)
        float zmm2_2 = zmm5_2.d - zmm10_1[0]
        zmm10_1[0] = zmm10_1[0] f+ zmm5_2.d
        zmm3_2[0] = zmm3_2[0] - zmm8_1[0]
        int64_t zmm11_1 = temp0_168[0].q
        zmm8_1[0] = zmm8_1[0] + zmm3_2[0]
        int64_t temp0_170 = _mm_min_ss(zmm9_1[0].q.d, zmm1_2.d)
        zmm11_1.d = zmm11_1.d f- 1f
        float temp0_171[0x4] = _mm_max_ss(zmm9_1[0], zmm1_2.d)
        temp0_169[0] = temp0_169[0] - 1f
        zmm5_2 = zmm8_1[0].q
        float temp0_172[0x4] = _mm_min_ss(zmm10_1[0], zmm2_2)
        float temp0_173[0x4] = _mm_max_ss(zmm8_1[0], zmm3_2[0])
        int64_t temp0_174 = _mm_min_ss(zmm5_2.d, zmm3_2[0])
        int64_t temp0_175 = _mm_max_ss(zmm11_1.d, temp0_171[0])
        zmm9_1 = *(arg1 + 0x1d0)
        temp0_168[0] = temp0_168[0] + 1f
        int64_t temp0_176 = _mm_min_ss(zmm7_2.d, temp0_172[0])
        float temp0_177 = _mm_min_ss(zmm11_1.d, temp0_170.d)
        float temp0_178[0x4] = _mm_max_ss(zmm10_1[0], zmm2_2)
        zmm2_2 = temp0_169[0]
        float temp0_179[0x4] = _mm_max_ss(temp0_169[0], temp0_173[0])
        int64_t temp0_180 = _mm_max_ss(temp0_175.d, temp0_168[0])
        float temp0_181 = _mm_min_ss(zmm2_2, temp0_174.d)
        zmm5_2 = temp0_169[0].q
        zmm9_1[0] = zmm9_1[0] + 1f
        float temp0_182 = _mm_min_ss(temp0_177, temp0_168[0])
        int64_t temp0_183 = _mm_max_ss(zmm7_2.d, temp0_178[0])
        zmm5_2.d = zmm5_2.d f+ 1f
        float temp0_184[0x4] = _mm_min_ss(zmm9_1[0], temp0_176.d)
        float temp0_185[0x4] = _mm_max_ss(zmm9_1[0], temp0_183.d)
        zmm11_1.d = temp0_180.d f- temp0_182
        int64_t temp0_186 = _mm_max_ss(zmm5_2.d, temp0_179[0])
        int64_t temp0_187 = _mm_min_ss(zmm5_2.d, temp0_181)
        temp0_185[0] = temp0_185[0] - temp0_184[0]
        zmm1_2 = zmm11_1
        zmm11_1.d = zmm11_1.d f* zmm11_1.d
        zmm1_2.d = zmm1_2.d f* 0.5f
        zmm5_2.d = temp0_186.d f- temp0_187.d
        temp0_185[0] = temp0_185[0] * temp0_185[0]
        temp0_185[0] = temp0_185[0] * 0.5f
        float zmm13_1 = temp0_182 f+ zmm1_2.d
        zmm7_2.d = zmm5_2.d f* 0.5f
        temp0_185[0] = temp0_185[0] + temp0_184[0]
        int32_t var_f0_1 = zmm7_2.d
        zmm7_2.d = zmm7_2.d f+ temp0_187.d
        int64_t var_14c_1 = (_mm_unpacklo_ps(temp0_185, zmm1_2)).q
        int32_t var_144_1 = var_f0_1
        zmm1_2 = var_178[1]
        temp0_168[0] = temp0_168[0] - zmm13_1
        float zmm0_3[0x4] = var_178[2]
        zmm1_2.d = zmm1_2.d f- zmm13_1
        zmm3_2 = var_178[0]
        zmm0_3[0] = zmm0_3[0] f- zmm7_2.d
        zmm3_2[0] = zmm3_2[0] - temp0_185[0]
        zmm5_2.d = zmm5_2.d f* zmm5_2.d
        temp0_168[0] = temp0_168[0] * temp0_168[0]
        zmm11_1.d = zmm11_1.d f+ temp0_185[0]
        zmm1_2.d = zmm1_2.d f* zmm1_2.d
        zmm9_1[0] = zmm9_1[0] - temp0_185[0]
        zmm0_3[0] = zmm0_3[0] * zmm0_3[0]
        temp0_169[0] = temp0_169[0] f- zmm7_2.d
        zmm3_2[0] = zmm3_2[0] * zmm3_2[0]
        zmm11_1.d = zmm11_1.d f+ zmm5_2.d
        zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
        zmm3_2[0] = zmm3_2[0] f+ zmm1_2.d
        temp0_169[0] = temp0_169[0] * temp0_169[0]
        zmm11_1.d = zmm11_1.d f* 0.25f
        temp0_168[0] = temp0_168[0] + zmm9_1[0]
        zmm3_2[0] = zmm3_2[0] + zmm0_3[0]
        float temp0_189 = _mm_sqrt_ss(0, zmm11_1.d)
        int64_t temp0_190 = _mm_sqrt_ss(0, zmm3_2[0])
        temp0_168[0] = temp0_168[0] + temp0_169[0]
        float temp0_191[0x4] = _mm_sqrt_ss(0, temp0_168[0])
        zmm1_2.d = temp0_190.d f+ var_160
        temp0_191[0] = temp0_191[0] + 1f
        int64_t temp0_192 = _mm_max_ss(zmm1_2.d, temp0_191[0])
        zmm0_3 = var_158
        zmm0_3[0] = temp0_185[0]
        float temp0_193[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xe1)
        int64_t temp0_194 = _mm_min_ss(temp0_192.d, temp0_189)
        temp0_193[0] = zmm13_1
        float temp0_195[0x4] = _mm_shuffle_ps(temp0_193, temp0_193, 0xc6)
        temp0_195[0] = zmm7_2.d
        var_178 = _mm_shuffle_ps(temp0_195, temp0_195, 0xc9)
        var_168 = var_14c_1
        var_160 = temp0_194.d
    
    sub_142309b60(arg1, &var_178, arg3)
    arg1[0xb5].b |= 0x80
    *(arg1 + 0x5c0) = var_178
    arg1[0xba] = var_168
    arg1[0xbb].d = var_160
    float zmm3_3[0x4] = *arg3
    float temp0_197[0x4] = _mm_add_ps(zmm3_3, zmm3_3)
    float temp0_198[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 4)
    float temp0_199[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xff)
    float temp0_200[0x4] = _mm_mul_ps(zmm3_3, temp0_197)
    float temp0_202[0x4] = _mm_mul_ps(temp0_198, _mm_shuffle_ps(temp0_197, temp0_197, 0x29))
    float temp0_204[0x4] = _mm_mul_ps(temp0_199, _mm_shuffle_ps(temp0_197, temp0_197, 0x12))
    float zmm1_3[0x4] = arg3[2]
    float temp0_205[0x4] = _mm_shuffle_ps(temp0_200, temp0_200, 0x1a)
    float temp0_206[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xc9)
    float temp0_208[0x4] = _mm_add_ps(temp0_205, _mm_shuffle_ps(temp0_200, temp0_200, 1))
    float zmm4_3[0x4] = data_143f3b4b0
    float temp0_209[0x4] = _mm_add_ps(temp0_204, temp0_202)
    float temp0_210[0x4] = _mm_sub_ps(temp0_202, temp0_204)
    float temp0_211[0x4] = _mm_sub_ps(zmm4_3, temp0_208)
    float temp0_212[0x4] = _mm_mul_ps(temp0_209, zmm1_3)
    float temp0_213[0x4] = _mm_mul_ps(temp0_206, temp0_210)
    zmm3_3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_211, zmm1_3), data_143f3b4c0)
    float temp0_216[0x4] = _mm_shuffle_ps(temp0_213, zmm3_3, 0x32)
    float temp0_218[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_212, zmm3_3, 0), temp0_216, 0x82)
    float temp0_219[0x4] = _mm_shuffle_ps(temp0_212, zmm3_3, 0x31)
    float temp0_221[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_213, zmm3_3, 0x10), temp0_219, 0x88)
    float zmm0_4[0x4] = arg3[1]
    zmm4_3[0].q = zmm0_4 u>> 0x40
    float temp0_222[0x4] = _mm_shuffle_ps(temp0_212, temp0_213, 0x12)
    float temp0_223[0x4] = _mm_shuffle_ps(zmm0_4, zmm4_3, 0xc4)
    float temp0_224[0x4] = _mm_shuffle_ps(temp0_222, zmm3_3, 0xe8)
    float var_108_2[0x4] = temp0_223
    var_138 = temp0_218
    float var_128_2[0x4] = temp0_221
    float var_118_2[0x4] = temp0_224
    uint32_t var_e8[0x4]
    int64_t zmm7_4
    int128_t zmm8_3
    zmm7_4, zmm8_3 = sub_140631b10(&var_138, &var_e8)
    *(arg1 + 0x5e0) = var_e8
    int128_t var_d8
    *(arg1 + 0x5f0) = var_d8
    uint32_t var_c8[0x4]
    *(arg1 + 0x600) = var_c8
    int128_t var_b8
    *(arg1 + 0x610) = var_b8
    *arg2 = zmm8_3
    *(arg2 + 0x10) = zmm7_4
    arg2[6] = var_160
else
    bool cond:1_1 = (*(arg1 + 0x71d) & 2) == 0
    float zmm3[0x4] = *arg3
    float temp0_1[0x4] = _mm_add_ps(zmm3, zmm3)
    float temp0_4[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 4), _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
    float zmm1[0x4]
    float zmm2[0x4]
    float zmm5[0x4]
    
    if (cond:1_1)
        float temp0_100[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
        float temp0_101[0x4] = _mm_mul_ps(temp0_1, zmm3)
        float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_100)
        zmm1 = arg3[2]
        float temp0_104[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0x1a)
        float temp0_105[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        float temp0_107[0x4] = _mm_add_ps(temp0_104, _mm_shuffle_ps(temp0_101, temp0_101, 1))
        float temp0_108[0x4] = _mm_add_ps(temp0_103, temp0_4)
        float temp0_109[0x4] = _mm_sub_ps(temp0_4, temp0_103)
        zmm3 = data_143f3b4b0
        float temp0_110[0x4] = _mm_mul_ps(temp0_108, zmm1)
        float temp0_111[0x4] = _mm_mul_ps(temp0_105, temp0_109)
        zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm3, temp0_107), zmm1), data_143f3b4c0)
        float temp0_115[0x4] = _mm_shuffle_ps(temp0_111, zmm2, 0x32)
        float temp0_117[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_110, zmm2, 0), temp0_115, 0x82)
        float temp0_118[0x4] = _mm_shuffle_ps(temp0_110, zmm2, 0x31)
        float temp0_120[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_111, zmm2, 0x10), temp0_118, 0x88)
        float temp0_121[0x4] = _mm_shuffle_ps(temp0_110, temp0_111, 0x12)
        zmm5 = arg3[1]
        float temp0_122[0x4] = _mm_shuffle_ps(temp0_121, zmm2, 0xe8)
        zmm2 = *(arg1 + 0x5e0)
        zmm3[0].q = zmm5 u>> 0x40
        float temp0_123[0x4] = _mm_shuffle_ps(zmm5, zmm3, 0xc4)
        float temp0_124[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_125[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_126[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_127[0x4] = _mm_mul_ps(temp0_125, temp0_120)
        float temp0_128[0x4] = _mm_mul_ps(temp0_124, temp0_117)
        float temp0_129[0x4] = _mm_mul_ps(temp0_126, temp0_122)
        float temp0_130[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_131[0x4] = _mm_add_ps(temp0_127, temp0_128)
        float temp0_132[0x4] = _mm_mul_ps(temp0_130, temp0_123)
        float temp0_134[0x4] = _mm_add_ps(_mm_add_ps(temp0_131, temp0_129), temp0_132)
        zmm2 = *(arg1 + 0x5f0)
        float temp0_135[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_136[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_137[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        var_138 = temp0_134
        float temp0_138[0x4] = _mm_mul_ps(temp0_136, temp0_117)
        float temp0_139[0x4] = _mm_mul_ps(temp0_137, temp0_122)
        float temp0_140[0x4] = _mm_mul_ps(temp0_135, temp0_120)
        float temp0_142[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_123)
        float temp0_145[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_140, temp0_138), temp0_139), temp0_142)
        zmm2 = *(arg1 + 0x600)
        float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), temp0_120)
        float temp0_149[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_117)
        float temp0_151[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), temp0_122)
        float var_128_1[0x4] = temp0_145
        float temp0_156[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_147, temp0_149), temp0_151), 
            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_123))
        zmm2 = *(arg1 + 0x610)
        float temp0_157[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_158[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_159[0x4] = _mm_mul_ps(temp0_157, temp0_120)
        float temp0_160[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_161[0x4] = _mm_mul_ps(temp0_158, temp0_117)
        float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_122)
        float temp0_163[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_164[0x4] = _mm_add_ps(temp0_159, temp0_161)
        float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_123)
        float var_118_1[0x4] = temp0_156
        float var_108_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_164, temp0_162), temp0_165)
        sub_140ae2d40(&arg1[0xb8], arg2, &var_138)
    else
        zmm15 = *(arg1 + 0x1d0)
        float temp0_5[0x4] = _mm_mul_ps(zmm3, temp0_1)
        float temp0_8[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), _mm_shuffle_ps(temp0_1, temp0_1, 0x12))
        zmm1 = arg3[2]
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x1a)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        float temp0_12[0x4] = _mm_add_ps(temp0_9, _mm_shuffle_ps(temp0_5, temp0_5, 1))
        float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_4)
        float temp0_14[0x4] = _mm_sub_ps(temp0_4, temp0_8)
        zmm3 = data_143f3b4b0
        float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1)
        float temp0_16[0x4] = _mm_mul_ps(temp0_10, temp0_14)
        zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm3, temp0_12), zmm1), data_143f3b4c0)
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
        float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_20, 0x82)
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
        float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0x10), temp0_23, 0x88)
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
        zmm5 = arg3[1]
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, zmm2, 0xe8)
        zmm2 = *(arg1 + 0x5e0)
        zmm3[0].q = zmm5 u>> 0x40
        float temp0_28[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_30[0x4] = _mm_shuffle_ps(zmm5, zmm3, 0xc4)
        float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), temp0_25)
        float temp0_33[0x4] = _mm_mul_ps(temp0_28, temp0_22)
        float temp0_34[0x4] = _mm_mul_ps(temp0_29, temp0_27)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_36[0x4] = _mm_add_ps(temp0_32, temp0_33)
        float temp0_37[0x4] = _mm_mul_ps(temp0_35, temp0_30)
        float temp0_39[0x4] = _mm_add_ps(_mm_add_ps(temp0_36, temp0_34), temp0_37)
        zmm2 = *(arg1 + 0x5f0)
        float temp0_40[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_41[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_42[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_43[0x4] = _mm_mul_ps(temp0_41, temp0_22)
        float temp0_44[0x4] = _mm_mul_ps(temp0_42, temp0_27)
        var_138 = temp0_39
        float temp0_45[0x4] = _mm_mul_ps(temp0_40, temp0_25)
        float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_30)
        float temp0_50[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_45, temp0_43), temp0_44), temp0_47)
        zmm2 = *(arg1 + 0x600)
        float temp0_51[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_52[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_53[0x4] = _mm_mul_ps(temp0_51, temp0_25)
        float temp0_54[0x4] = _mm_mul_ps(temp0_52, temp0_22)
        float var_128[0x4] = temp0_50
        float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), temp0_27)
        float temp0_57[0x4] = _mm_add_ps(temp0_53, temp0_54)
        float temp0_58[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_61[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_57, temp0_56), _mm_mul_ps(temp0_58, temp0_30))
        zmm2 = *(arg1 + 0x610)
        float temp0_62[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_63[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_64[0x4] = _mm_mul_ps(temp0_62, temp0_25)
        float temp0_65[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_66[0x4] = _mm_mul_ps(temp0_63, temp0_22)
        float temp0_67[0x4] = _mm_mul_ps(temp0_65, temp0_27)
        float temp0_68[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_69[0x4] = _mm_add_ps(temp0_64, temp0_66)
        float temp0_70[0x4] = _mm_mul_ps(temp0_68, temp0_30)
        float var_118[0x4] = temp0_61
        float var_108[0x4] = _mm_add_ps(_mm_add_ps(temp0_69, temp0_67), temp0_70)
        float* rax_1 = sub_140ae2d40(&arg1[0xb8], &var_158, &var_138)
        float zmm5_1 = zmm15[0] - 1f
        float temp0_73[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        float zmm4_1[0x4] = *rax_1
        zmm11 = rax_1[1]
        float zmm2_1 = zmm4_1[0]
        zmm4_1[0] = zmm4_1[0] + rax_1[3]
        zmm2_1 = zmm2_1 - rax_1[3]
        zmm10 = rax_1[2]
        float zmm1_1 = zmm11[0] - rax_1[4]
        zmm11[0] = zmm11[0] + rax_1[4]
        int64_t zmm3_1 = zmm4_1[0].q
        float temp0_74[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        float temp0_75[0x4] = _mm_max_ss(zmm4_1[0], zmm2_1)
        zmm10[0] = zmm10[0] - rax_1[5]
        zmm10[0] = zmm10[0] + rax_1[5]
        int64_t temp0_76 = _mm_min_ss(zmm3_1.d, zmm2_1)
        float temp0_77[0x4] = _mm_min_ss(zmm11[0], zmm1_1)
        float temp0_78[0x4] = _mm_max_ss(zmm11[0], zmm1_1)
        zmm1_1 = temp0_73[0] - 1f
        float temp0_79 = _mm_max_ss(zmm5_1, temp0_75[0])
        float temp0_80 = _mm_min_ss(zmm5_1, temp0_76.d)
        float temp0_81[0x4] = _mm_min_ss(zmm10[0], zmm10[0])
        zmm3_1 = temp0_73[0].q
        float temp0_82[0x4] = _mm_max_ss(zmm10[0], zmm10[0])
        float temp0_83[0x4] = _mm_min_ss(temp0_77[0], zmm1_1)
        float temp0_84[0x4] = _mm_max_ss(temp0_78[0], zmm1_1)
        zmm1_1 = temp0_74[0]
        zmm15[0] = zmm15[0] + 1f
        temp0_74[0] = temp0_74[0] - 1f
        zmm3_1.d = zmm3_1.d f+ 1f
        zmm1_1 = zmm1_1 + 1f
        float temp0_85[0x4] = _mm_max_ss(zmm15[0], temp0_79)
        float temp0_86[0x4] = _mm_min_ss(zmm15[0], temp0_80)
        float temp0_87[0x4] = _mm_min_ss(temp0_81[0], temp0_74[0])
        float temp0_88[0x4] = _mm_max_ss(temp0_82[0], temp0_74[0])
        int64_t temp0_89 = _mm_min_ss(zmm3_1.d, temp0_83[0])
        int64_t temp0_90 = _mm_max_ss(zmm3_1.d, temp0_84[0])
        temp0_85[0] = temp0_85[0] - temp0_86[0]
        float temp0_91 = _mm_min_ss(zmm1_1, temp0_87[0])
        zmm1_1 = _mm_max_ss(zmm1_1, temp0_88[0]) - temp0_91
        temp0_85[0] = temp0_85[0] * 0.5f
        zmm3_1.d = temp0_90.d f- temp0_89.d
        zmm3_1.d = zmm3_1.d f* 0.5f
        *(arg2 + 0xc) = (_mm_unpacklo_ps(temp0_85, zmm3_1)).q
        arg2[5] = zmm1_1 * 0.5f
        zmm2_1 = temp0_91 + arg2[5]
        temp0_86[0] = temp0_86[0] + arg2[3]
        int64_t zmm6_1
        zmm6_1.d = temp0_89.d f+ arg2[4]
        *arg2 = (_mm_unpacklo_ps(temp0_86, zmm6_1)).q
        arg2[2] = zmm2_1
        float zmm0_1[0x4] = arg2[4]
        zmm2_1 = arg2[3]
        zmm1_1 = arg2[5]
        zmm15[0] = zmm15[0] - *arg2
        temp0_73[0] = temp0_73[0] - arg2[1]
        temp0_74[0] = temp0_74[0] - arg2[2]
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        zmm15[0] = zmm15[0] * zmm15[0]
        zmm2_1 = zmm2_1 * zmm2_1 + zmm0_1[0]
        temp0_73[0] = temp0_73[0] * temp0_73[0]
        temp0_74[0] = temp0_74[0] * temp0_74[0]
        zmm15[0] = zmm15[0] + temp0_73[0]
        zmm15[0] = zmm15[0] + temp0_74[0]
        float temp0_95 = _mm_sqrt_ss(0, zmm2_1 + zmm1_1 * zmm1_1)
        float temp0_96[0x4] = _mm_sqrt_ss(0, zmm15[0])
        arg2[6] = temp0_95
        zmm3_1 = *rax_1
        temp0_96[0] = temp0_96[0] + 1f
        zmm4_1 = rax_1[1]
        zmm4_1[0] = zmm4_1[0] - arg2[1]
        zmm3_1.d = zmm3_1.d f- *arg2
        zmm2_1 = rax_1[2] - arg2[2]
        zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
        zmm3_1.d = zmm3_1.d f* zmm3_1.d
        zmm4_1[0] = zmm4_1[0] f+ zmm3_1.d
        zmm4_1[0] = zmm4_1[0] + zmm2_1 * zmm2_1
        arg2[6] =
            _mm_min_ss(_mm_max_ss(_mm_sqrt_ss(0, zmm4_1[0]) + rax_1[6], temp0_96[0]), temp0_95)
return arg2
