// 函数: sub_14226ecf0
// 地址: 0x14226ecf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t* rcx = *arg2

if (rcx == 0)
label_14226f467:
    *arg1 = data_143dbb0c0
    arg1[1] = data_143dbb0d0
    arg1[2] = data_143dbb0e0
else
    int32_t* rsi_1 = *((*(*rcx + 0x80))(rcx) + 0x10)
    
    if (rsi_1 == 0 || *rsi_1 != 1)
        goto label_14226f467
    
    void* rsi_2 = *(rsi_1 + 8)
    
    if (rsi_2 == 0)
        goto label_14226f467
    
    int64_t* rcx_1 = *(rsi_2 + 0xf0)
    
    if (rcx_1 == 0)
        goto label_14226f467
    
    int16_t rdx = rcx_1[1].w
    int64_t* rdi_1 = nullptr
    int64_t* rax_4 = nullptr
    
    if (rdx == 6)
        rax_4 = rcx_1
    
    if (rax_4 == 0)
        goto label_14226ee54
    
    int64_t* r8_1 = nullptr
    
    if (rdx == 6)
        r8_1 = rcx_1
    
    char rax_6
    void var_1c8
    
    if (r8_1 != 0)
        rax_6 = (*(*r8_1 + 0x1b8))(r8_1, &var_1c8)
    float var_188[0x4]
    float var_178[0x4]
    float var_168[0x4]
    float var_128[0x4]
    float zmm1[0x4]
    float zmm5_1[0x4]
    float zmm7[0x4]
    float zmm13[0x4]
    
    if (r8_1 == 0 || rax_6 == 0)
        rcx_1 = *(rsi_2 + 0xf0)
    label_14226ee54:
        int128_t* rax_12
        void var_1a8
        void var_f8
        
        if (rcx_1 == 0)
            rax_12 = &var_128
            zmm1 = data_143dbb0d0
            var_128 = data_143dbb0c0
            float var_108_1[0x4] = data_143dbb0e0
            float var_118_1[0x4] = zmm1
        else
            rax_12 = sub_1417cbc40(&var_f8, (*(*rcx_1 + 0xa0))(rcx_1, &var_1a8))
        zmm5_1 = *rax_12
        var_188 = zmm5_1
        zmm13 = rax_12[1]
        var_178 = zmm13
        zmm7 = rax_12[2]
        var_168 = zmm7
    else
        int64_t* rax_7 = *(rsi_2 + 0xf0)
        
        if (rax_7 == 0)
        label_14226ee29:
            zmm5_1 = data_143dbb0c0
            zmm13 = data_143dbb0d0
            zmm7 = data_143dbb0e0
            var_188 = zmm5_1
            var_178 = zmm13
            var_168 = zmm7
        else
            if (rax_7[1].w == 6)
                rdi_1 = rax_7
            
            if (rdi_1 == 0)
                goto label_14226ee29
            
            void var_1e8
            
            if ((*(*rdi_1 + 0x1b8))(rdi_1, &var_1e8) == 0)
                goto label_14226ee29
            
            sub_1417cbc40(&var_188, &var_1e8)
            zmm5_1 = var_188
            zmm7 = var_168
            zmm13 = var_178
    
    int64_t* rcx_6 = *arg2
    float zmm6[0x4]
    float zmm12[0x4]
    float zmm14[0x4]
    float var_158[0x4]
    
    if (rcx_6 == 0)
        zmm6 = data_143dbb0c0
        zmm12 = data_143dbb0d0
        zmm14 = data_143dbb0e0
        var_158 = zmm6
        float var_148_1[0x4] = zmm12
        float var_138_1[0x4] = zmm14
    else
        sub_1417cbc40(&var_158, (*(*rcx_6 + 0x90))(rcx_6, &var_128))
        zmm5_1 = var_188
        float var_138[0x4]
        zmm14 = var_138
        float var_148[0x4]
        zmm12 = var_148
        zmm6 = var_158
        zmm7 = var_168
        zmm13 = var_178
    zmm1 = data_143f522c0
    uint32_t zmm8[0x4] = data_143f522d0
    float zmm2[0x4] = zx.o(0)
    zmm1[0].q = zmm2 u>> 0x40
    *arg1 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    arg1[1] = zmm2
    float zmm0[0x4] = data_143f522c0
    float temp0_2[0x4] = _mm_min_ps(zmm14, zmm7)
    arg1[2] = _mm_and_ps(zmm0, zmm8)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, data_143f52310, 1)) == 0)
        float temp0_135[0x4] = _mm_mul_ps(zmm12, zmm7)
        float temp0_136[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x1b)
        float temp0_137[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
        float temp0_139[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
        float temp0_140[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_141[0x4] = _mm_mul_ps(zmm6, temp0_140)
        float temp0_142[0x4] = __mulps_xmmps_memps(temp0_139, data_143f522b0)
        float temp0_143[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_144[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xb1)
        float temp0_145[0x4] = _mm_mul_ps(zmm7, zmm14)
        float temp0_146[0x4] = _mm_add_ps(temp0_142, temp0_141)
        float temp0_148[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
        float temp0_150[0x4] = _mm_mul_ps(temp0_144, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
        float temp0_151[0x4] = __mulps_xmmps_memps(temp0_148, data_143f522a0)
        float temp0_152[0x4] = _mm_shuffle_ps(temp0_135, temp0_135, 0xc9)
        float temp0_153[0x4] = __mulps_xmmps_memps(temp0_150, data_143f52290)
        float temp0_154[0x4] = _mm_add_ps(temp0_146, temp0_151)
        float temp0_155[0x4] = _mm_mul_ps(temp0_152, temp0_143)
        float temp0_156[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        arg1[2] = temp0_145
        *arg1 = _mm_add_ps(temp0_154, temp0_153)
        float temp0_160[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_135, temp0_135, 0xd2), temp0_156), temp0_155)
        float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
        float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
        float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
        float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_156)
        float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_143)
        float temp0_166[0x4] = _mm_mul_ps(temp0_161, temp0_140)
        arg1[1] = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_164, temp0_165), _mm_add_ps(temp0_166, temp0_135)), zmm13)
    else
        float zmm9[0x4] = data_143f522c0
        float temp0_6[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_10[0x4] = _mm_mul_ps(zmm5_1, temp0_6)
        float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(temp0_6, temp0_6, 0x29))
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x12)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x1a)
        float temp0_15[0x4] = _mm_mul_ps(temp0_9, temp0_13)
        float temp0_17[0x4] = _mm_add_ps(temp0_14, _mm_shuffle_ps(temp0_10, temp0_10, 1))
        _mm_mul_ps(zmm7, zmm14)
        float temp0_19[0x4] = _mm_add_ps(temp0_15, temp0_12)
        float temp0_20[0x4] = _mm_sub_ps(zmm9, temp0_17)
        float temp0_21[0x4] = _mm_sub_ps(temp0_12, temp0_15)
        float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm7)
        float temp0_23[0x4] = _mm_mul_ps(temp0_20, zmm7)
        float temp0_24[0x4] = _mm_mul_ps(temp0_8, temp0_21)
        float temp0_25[0x4] = _mm_add_ps(zmm6, zmm6)
        zmm1 = _mm_and_ps(temp0_23, zmm8)
        zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0), 
            _mm_shuffle_ps(temp0_24, zmm1, 0x32), 0x82)
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_22, zmm1, 0x31)
        float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, zmm1, 0x10), temp0_30, 0x88)
        float temp0_33[0x4] = _mm_mul_ps(zmm6, temp0_25)
        float temp0_35[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_24, 0x12), zmm1, 0xe8)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
        float temp0_37[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        zmm9[0].q = zmm13 u>> 0x40
        float temp0_38[0x4] = _mm_shuffle_ps(zmm13, zmm9, 0xc4)
        float temp0_40[0x4] = _mm_mul_ps(temp0_36, _mm_shuffle_ps(temp0_25, temp0_25, 0x29))
        float temp0_43[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x1a), 
            _mm_shuffle_ps(temp0_33, temp0_33, 1))
        float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0x12), temp0_37)
        float temp0_46[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
        float temp0_47[0x4] = _mm_add_ps(temp0_45, temp0_40)
        float temp0_48[0x4] = _mm_sub_ps(temp0_40, temp0_45)
        float temp0_49[0x4] = _mm_mul_ps(temp0_47, zmm14)
        float temp0_50[0x4] = _mm_mul_ps(temp0_46, temp0_48)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm9, temp0_43), zmm14), data_143f522d0)
        float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0), 
            _mm_shuffle_ps(temp0_50, zmm1, 0x32), 0x82)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_50, zmm1, 0x10)
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_57, _mm_shuffle_ps(temp0_49, zmm1, 0x31), 0x88)
        float temp0_61[0x4] = _mm_mul_ps(temp0_58, temp0_32)
        zmm9[0].q = zmm12 u>> 0x40
        float temp0_62[0x4] = _mm_shuffle_ps(zmm12, zmm9, 0xc4)
        float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0), zmm8)
        float temp0_66[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, temp0_50, 0x12), zmm1, 0xe8)
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xaa)
        float temp0_68[0x4] = _mm_add_ps(temp0_61, temp0_64)
        float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_38)
        float temp0_71[0x4] = _mm_mul_ps(temp0_67, temp0_35)
        float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), zmm8)
        float temp0_74[0x4] = _mm_add_ps(temp0_68, temp0_71)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_35)
        float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_70)
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_32)
        float temp0_80[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
        float var_238[0x4] = temp0_77
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
        float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
        float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_32)
        float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_38)
        float temp0_85[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
        float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_76)
        float temp0_87[0x4] = _mm_mul_ps(temp0_85, zmm8)
        float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_35)
        float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
        float temp0_91[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xff)
        float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
        float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_38)
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0)
        int96_t var_228_1 = temp0_90[0].12
        float temp0_95[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
        float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_89)
        float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_32)
        float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_35)
        float temp0_100[0x4] = _mm_mul_ps(temp0_94, zmm8)
        float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
        float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xff), temp0_38)
        float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
        int96_t var_218_1 = temp0_101[0].12
        int96_t var_208_1 = _mm_add_ps(_mm_add_ps(temp0_104, temp0_99), temp0_103)[0].12
        int128_t zmm9_1
        float zmm11_1[0x4]
        float zmm15_1[0x4]
        zmm9_1, zmm11_1, zmm15_1 = sub_1407740e0(&var_238, 0x322bcc77)
        float zmm2_1[0x4] = var_238[0]
        float zmm1_1 = var_238[1]
        zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm11_1, 2), data_143f52300 ^ zmm9_1)
        uint32_t zmm0_1[0x4] = var_238[2]
        zmm15_1 ^= data_143f52300
        zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
        zmm1_1 = zmm1_1 * zmm15_1[0]
        zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
        var_238[0] = zmm2_1[0]
        float temp0_109[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
        var_238[2] = zmm0_1[0]
        zmm0_1 = var_228_1:8.d
        zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
        var_238[1] = zmm1_1
        zmm1_1 = var_228_1:4.d * temp0_109[0]
        float zmm3_1 = var_228_1.d * temp0_109[0]
        zmm2_1 = var_218_1.d
        var_228_1:8.d = zmm0_1[0]
        zmm0_1 = var_218_1:8.d
        var_228_1:4.d = zmm1_1
        float temp0_110[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
        zmm0_1[0] = zmm0_1[0] f* temp0_110[0]
        zmm2_1[0] = zmm2_1[0] * temp0_110[0]
        zmm1_1 = var_218_1:4.d * temp0_110[0]
        var_218_1:8.d = zmm0_1[0]
        var_228_1.d = zmm3_1
        var_218_1.d = zmm2_1[0]
        var_218_1:4.d = zmm1_1
        uint32_t var_1f8[0x4]
        sub_14077e4a0(&var_1f8, &var_238)
        uint32_t zmm6_1[0x4] = var_1f8
        float zmm5_2[0x4] = data_143f522f0
        uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
        zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
        uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
        zmm1_2 = _mm_rsqrt_ps(zmm4_2)
        float temp0_117[0x4] = _mm_mul_ps(zmm4_2, zmm5_2)
        float temp0_122[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_117)), 
                zmm1_2), 
            zmm1_2)
        float temp0_125[0x4] =
            _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_117))
        uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
        float temp0_129[0x4] = _mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122)
        float temp0_130[0x4] = _mm_unpacklo_ps(var_208_1:4.d, 0)
        zmm5_2 = _mm_and_ps(_mm_mul_ps(temp0_129, zmm6_1) ^ data_143f522e0, zmm0_2) ^ data_143f522e0
        float temp0_134[0x4] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_208_1.d, var_208_1:8.d[0].q), temp0_130[0].q)
        arg1[2] = zmm11_1
        arg1[1] = temp0_134
        *arg1 = zmm5_2

__security_check_cookie(rax_1 ^ &var_268)
return arg1
