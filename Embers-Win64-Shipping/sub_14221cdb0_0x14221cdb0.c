// 函数: sub_14221cdb0
// 地址: 0x14221cdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
char result = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1 + 0xf0)

if (result != 0)
label_14221ce39:
    float zmm13[0x4] = *arg6
    float zmm14[0x4] = data_14399f668
    char result_1 = 0
    uint32_t zmm0[0x4] = *(arg5 + 8)
    float zmm11[0x4] = *arg5
    float temp0_1[0x4] = _mm_unpacklo_ps(*(arg5 + 4), 0)
    float zmm2[0x4] = data_14399f66c
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm11, zmm0[0].q)
    zmm0 = data_14399f670
    zmm11 = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
    float temp0_4[0x4] = _mm_unpacklo_ps(zmm2, 0)
    zmm14 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm14, zmm0[0].q), temp0_4[0].q)
    uint32_t (* var_1a8)[0x4]
    float var_188[0x4]
    int96_t var_178
    int96_t var_168
    float var_138[0x4]
    
    if (arg4 == 0)
        var_138 = zmm13
        float var_128_2[0x4] = zmm11
        float var_118_2[0x4] = zmm14
    else
        void* rcx_3 = *(arg1 + 0xa0)
        int128_t* (* var_1b8)(int64_t* arg1)
        int64_t* rdx = &var_1b8
        zmm0 = data_143dbb0c0
        float zmm1[0x4] = data_143dbb0d0
        uint32_t (* rcx_5)[0x4]
        char var_1d8
        char var_1d0
        
        if (rcx_3 == 0)
            var_188 = zmm0
            zmm0 = data_143dbb0e0
            var_1a8 = &var_188
            char* var_198_2 = &var_1d0
            char* var_190_2 = &var_1d8
            uint32_t (** var_1b0_2)[0x4] = &var_1a8
            var_1b8 = sub_142212540
            var_1d8 = 0
            var_1d0 = 1
            var_178 = zmm1[0].12
            var_168 = zmm0[0].12
            void* var_1a0_2 = arg1
            sub_142269e40(arg1 + 0xf0, rdx)
            rcx_5 = &var_188
        else
            uint32_t var_108[0x4] = zmm0
            zmm0 = data_143dbb0e0
            var_1a8 = &var_108
            char* var_198_1 = &var_1d8
            char* var_190_1 = &var_1d0
            uint32_t (** var_1b0_1)[0x4] = &var_1a8
            void* var_1a0_1 = rcx_3
            var_1b8 = sub_142212540
            var_1d0 = 0
            var_1d8 = 1
            float var_f8_1[0x4] = zmm1
            uint32_t var_e8_1[0x4] = zmm0
            sub_142269e40(rcx_3 + 0xf0, rdx)
            rcx_5 = &var_108
        float zmm12[0x4] = data_143f51110
        uint32_t zmm8[0x4] = arg4[2]
        float zmm7[0x4] = rcx_5[2]
        float zmm5_1[0x4] = *rcx_5
        float zmm6[0x4] = rcx_5[1]
        float zmm9[0x4] = data_143f51070
        float zmm10[0x4] = data_143f51060
        zmm0 = _mm_min_ps(zmm8, zmm7)
        var_1b8.o = zmm12
        uint32_t temp0_9 = _mm_movemask_ps(_mm_cmpeq_ps(zmm0, zmm12, 1))
        zmm0 = zmm5_1
        int64_t var_158
        int32_t var_150
        uint32_t zmm15[0x4]
        float zmm3[0x4]
        
        if (temp0_9 == 0)
            zmm2 = *arg4
            zmm3 = arg4[1]
            float temp0_139[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
            float temp0_140[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
            float temp0_142[0x4] = _mm_mul_ps(temp0_139, _mm_shuffle_ps(zmm0, zmm5_1, 0))
            float temp0_143[0x4] = _mm_mul_ps(zmm3, zmm7)
            float temp0_144[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_145[0x4] = _mm_mul_ps(temp0_142, zmm9)
            zmm0 = _mm_mul_ps(temp0_144, zmm2)
            float temp0_147[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
            zmm15 = _mm_mul_ps(zmm8, zmm7)
            float temp0_149[0x4] = _mm_add_ps(temp0_145, zmm0)
            float temp0_151[0x4] = _mm_mul_ps(temp0_140, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
            float temp0_153[0x4] = _mm_mul_ps(temp0_147, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
            float temp0_154[0x4] = _mm_mul_ps(temp0_151, zmm10)
            zmm0 = _mm_shuffle_ps(temp0_143, temp0_143, 0xc9)
            float temp0_156[0x4] = __mulps_xmmps_memps(temp0_153, data_143f51050)
            float temp0_157[0x4] = _mm_add_ps(temp0_149, temp0_154)
            float temp0_158[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            zmm0 = _mm_mul_ps(zmm0, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            zmm6 = _mm_add_ps(temp0_157, temp0_156)
            float temp0_164[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0xd2), temp0_160), zmm0)
            float temp0_165[0x4] = _mm_add_ps(temp0_164, temp0_164)
            float temp0_166[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0xd2)
            zmm0 = _mm_shuffle_ps(temp0_165, temp0_165, 0xc9)
            float temp0_168[0x4] = _mm_mul_ps(temp0_166, temp0_160)
            zmm0 = _mm_mul_ps(zmm0, temp0_158)
            zmm1 = data_143f51110
            float temp0_170[0x4] = _mm_mul_ps(temp0_165, temp0_144)
            zmm12 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_168, zmm0), _mm_add_ps(temp0_170, temp0_143)), rcx_5[1])
        else
            zmm9 = data_143f51030
            zmm0 = _mm_shuffle_ps(zmm0, zmm5_1, 4)
            float temp0_11[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            _mm_mul_ps(zmm8, zmm7)
            float temp0_15[0x4] = _mm_mul_ps(zmm5_1, temp0_11)
            float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0x29), zmm0)
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x12)
            zmm0 = _mm_shuffle_ps(temp0_15, temp0_15, 0x1a)
            float temp0_20[0x4] = _mm_mul_ps(temp0_18, temp0_13)
            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_15, temp0_15, 1))
            zmm3 = *arg4
            float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_17)
            float temp0_24[0x4] = _mm_sub_ps(temp0_17, temp0_20)
            float temp0_25[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
            float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm7)
            float temp0_27[0x4] = _mm_mul_ps(temp0_12, temp0_24)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm9, zmm0), zmm7), data_143f51040)
            zmm0 = _mm_shuffle_ps(temp0_27, zmm1, 0x32)
            zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1, 0), zmm0, 0x82)
            zmm0 = _mm_shuffle_ps(temp0_26, zmm1, 0x31)
            float temp0_36[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, zmm1, 0x10), zmm0, 0x88)
            zmm0 = zmm9
            float temp0_38[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, temp0_27, 0x12), zmm1, 0xe8)
            float temp0_39[0x4] = _mm_add_ps(zmm3, zmm3)
            zmm0[0].q = zmm6 u>> 0x40
            float temp0_40[0x4] = _mm_shuffle_ps(zmm6, zmm0, 0xc4)
            float temp0_41[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            var_1b8.o = temp0_40
            float temp0_42[0x4] = _mm_mul_ps(zmm3, temp0_39)
            float temp0_44[0x4] = _mm_mul_ps(temp0_25, _mm_shuffle_ps(temp0_39, temp0_39, 0x29))
            zmm0 = arg4[2]
            float temp0_46[0x4] = _mm_mul_ps(temp0_41, _mm_shuffle_ps(temp0_39, temp0_39, 0x12))
            float temp0_47[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
            float temp0_48[0x4] = _mm_add_ps(temp0_46, temp0_44)
            float temp0_49[0x4] = _mm_sub_ps(temp0_44, temp0_46)
            float temp0_50[0x4] = _mm_mul_ps(temp0_48, zmm0)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0x1a), 
                _mm_shuffle_ps(temp0_42, temp0_42, 1))
            float temp0_54[0x4] = _mm_mul_ps(temp0_47, temp0_49)
            zmm1 = __andps_xmmxud_memxud(__mulps_xmmps_memps(_mm_sub_ps(zmm9, zmm0), arg4[2]), 
                data_143f51040)
            float temp0_60[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1, 0), 
                _mm_shuffle_ps(temp0_54, zmm1, 0x32), 0x82)
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_54, zmm1, 0x10)
            float temp0_62[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
            float temp0_64[0x4] =
                _mm_shuffle_ps(temp0_61, _mm_shuffle_ps(temp0_50, zmm1, 0x31), 0x88)
            zmm0 = zmm9
            float temp0_65[0x4] = _mm_mul_ps(temp0_62, temp0_36)
            float temp0_66[0x4] = _mm_shuffle_ps(temp0_50, temp0_54, 0x12)
            zmm5_1 = arg4[1]
            float temp0_67[0x4] = _mm_shuffle_ps(temp0_66, zmm1, 0xe8)
            float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_38)
            zmm0[0].q = zmm5_1 u>> 0x40
            float temp0_70[0x4] = _mm_shuffle_ps(zmm5_1, zmm0, 0xc4)
            zmm0 = _mm_shuffle_ps(temp0_60, temp0_60, 0)
            float temp0_73[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), var_1b8.o)
            float temp0_75[0x4] = _mm_add_ps(temp0_65, _mm_mul_ps(zmm0, zmm8))
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0), zmm8)
            float temp0_78[0x4] = _mm_add_ps(temp0_75, temp0_69)
            float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_38)
            float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_73)
            float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0x55), temp0_36)
            float temp0_85[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), var_1b8.o)
            float temp0_86[0x4] = _mm_add_ps(temp0_83, zmm0)
            var_188 = temp0_81
            float temp0_87[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x55)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0), zmm8)
            float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_80)
            float temp0_91[0x4] = _mm_mul_ps(temp0_87, temp0_36)
            float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xaa), temp0_38)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_85)
            float temp0_96[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_67, temp0_67, 0xff), var_1b8.o)
            float temp0_97[0x4] = _mm_add_ps(temp0_91, zmm0)
            zmm0 = _mm_shuffle_ps(temp0_70, temp0_70, 0)
            var_178 = temp0_94[0].12
            float temp0_99[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0x55)
            float temp0_100[0x4] = _mm_add_ps(temp0_97, temp0_93)
            float temp0_101[0x4] = _mm_mul_ps(temp0_99, temp0_36)
            float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xaa), temp0_38)
            zmm0 = _mm_mul_ps(zmm0, zmm8)
            float temp0_105[0x4] = _mm_add_ps(temp0_100, temp0_96)
            float temp0_107[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_70, temp0_70, 0xff), var_1b8.o)
            float temp0_108[0x4] = _mm_add_ps(temp0_101, zmm0)
            var_168 = temp0_105[0].12
            var_158.o = _mm_add_ps(_mm_add_ps(temp0_108, temp0_103), temp0_107)
            zmm9, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_1407740e0(&var_188, 0x322bcc77)
            float zmm2_1[0x4] = var_188[0]
            float zmm1_1 = var_188[1]
            zmm12 =
                _mm_and_ps(_mm_cmpeq_ps(zmm12, zmm15, 2), data_143f51100 ^ zmm9) ^ data_143f51100
            zmm2_1[0] = zmm2_1[0] * zmm12[0]
            zmm1_1 = zmm1_1 * zmm12[0]
            uint32_t zmm0_1[0x4] = var_188[2]
            zmm0_1[0] = zmm0_1[0] f* zmm12[0]
            var_188[0] = zmm2_1[0]
            float temp0_113[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
            var_188[2] = zmm0_1[0]
            zmm0_1 = var_178:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_113[0]
            var_188[1] = zmm1_1
            zmm1_1 = var_178:4.d * temp0_113[0]
            float zmm3_1 = var_178.d * temp0_113[0]
            zmm2_1 = var_168.d
            var_178:8.d = zmm0_1[0]
            zmm0_1 = var_168:8.d
            var_178:4.d = zmm1_1
            float temp0_114[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
            zmm0_1[0] = zmm0_1[0] f* temp0_114[0]
            zmm2_1[0] = zmm2_1[0] * temp0_114[0]
            zmm1_1 = var_168:4.d * temp0_114[0]
            var_168:8.d = zmm0_1[0]
            var_178.d = zmm3_1
            var_168.d = zmm2_1[0]
            var_168:4.d = zmm1_1
            sub_14077e4a0(&var_1a8, &var_188)
            zmm5_1 = var_1a8.o
            zmm6 = data_143f50de0
            zmm9 = data_143f51070
            zmm10 = data_143f51060
            float temp0_115[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
            float temp0_117[0x4] = _mm_add_ps(temp0_115, _mm_shuffle_ps(temp0_115, temp0_115, 0x4e))
            float temp0_119[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0x39), temp0_117)
            float temp0_120[0x4] = _mm_rsqrt_ps(temp0_119)
            float temp0_121[0x4] = _mm_mul_ps(temp0_119, zmm6)
            float temp0_126[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_121)), 
                    temp0_120), 
                temp0_120)
            float temp0_129[0x4] =
                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_126, temp0_126), temp0_121))
            zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_119, 2)
            float temp0_133[0x4] = _mm_add_ps(_mm_mul_ps(temp0_129, temp0_126), temp0_126)
            float temp0_134[0x4] = _mm_unpacklo_ps(var_158:4.d, 0)
            zmm1 = data_143f51110
            var_1b8.o = zmm1
            zmm6 = _mm_and_ps(_mm_mul_ps(temp0_133, zmm5_1) ^ data_143f50dd0, zmm0) ^ data_143f50dd0
            zmm12 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158.d, var_150[0].q), temp0_134[0].q)
        float zmm4_1[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm15), zmm1, 1)) == 0)
            float temp0_307[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            float temp0_310[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), _mm_shuffle_ps(zmm13, zmm13, 0x1b))
            float temp0_311[0x4] = _mm_mul_ps(zmm11, zmm15)
            float temp0_312[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_313[0x4] = _mm_mul_ps(temp0_310, zmm9)
            zmm0 = _mm_mul_ps(temp0_312, zmm13)
            float temp0_315[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            float temp0_316[0x4] = _mm_add_ps(temp0_313, zmm0)
            float temp0_318[0x4] = _mm_mul_ps(temp0_307, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            float temp0_320[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            zmm0 = _mm_mul_ps(zmm0, _mm_shuffle_ps(zmm13, zmm13, 0xb1))
            float temp0_323[0x4] = _mm_mul_ps(temp0_318, zmm10)
            zmm0 = __mulps_xmmps_memps(zmm0, data_143f51050)
            float temp0_325[0x4] = _mm_add_ps(temp0_316, temp0_323)
            float temp0_327[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_311, temp0_311, 0xd2), temp0_320)
            zmm7 = _mm_add_ps(temp0_325, zmm0)
            float temp0_331[0x4] = _mm_sub_ps(temp0_327, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_311, temp0_311, 0xc9), temp0_315))
            float temp0_332[0x4] = _mm_add_ps(temp0_331, temp0_331)
            float temp0_333[0x4] = _mm_mul_ps(temp0_312, temp0_332)
            float temp0_334[0x4] = _mm_shuffle_ps(temp0_332, temp0_332, 0xd2)
            zmm0 = _mm_shuffle_ps(temp0_332, temp0_332, 0xc9)
            float temp0_336[0x4] = _mm_mul_ps(temp0_334, temp0_320)
            zmm0 = _mm_mul_ps(zmm0, temp0_315)
            float temp0_338[0x4] = _mm_add_ps(temp0_333, temp0_311)
            float temp0_339[0x4] = _mm_sub_ps(temp0_336, zmm0)
            zmm0 = _mm_mul_ps(zmm15, zmm14)
            zmm4_1 = _mm_add_ps(_mm_add_ps(temp0_339, temp0_338), zmm12)
        else
            zmm9 = data_143f51030
            float temp0_178[0x4] = _mm_add_ps(zmm6, zmm6)
            float temp0_179[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
            zmm0 = _mm_mul_ps(zmm15, zmm14)
            float temp0_181[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_182[0x4] = _mm_mul_ps(zmm6, temp0_178)
            var_1a8.o = zmm0
            float temp0_184[0x4] = _mm_mul_ps(temp0_179, _mm_shuffle_ps(temp0_178, temp0_178, 0x29))
            float temp0_185[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0x12)
            zmm0 = _mm_shuffle_ps(temp0_182, temp0_182, 0x1a)
            float temp0_187[0x4] = _mm_mul_ps(temp0_181, temp0_185)
            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_182, temp0_182, 1))
            float temp0_190[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
            float temp0_191[0x4] = _mm_add_ps(temp0_187, temp0_184)
            float temp0_192[0x4] = _mm_sub_ps(temp0_184, temp0_187)
            float temp0_193[0x4] = _mm_sub_ps(zmm9, zmm0)
            float temp0_194[0x4] = _mm_mul_ps(temp0_191, zmm15)
            float temp0_195[0x4] = _mm_mul_ps(temp0_190, temp0_192)
            float temp0_196[0x4] = _mm_mul_ps(temp0_193, zmm15)
            float temp0_197[0x4] = _mm_shuffle_ps(zmm13, zmm13, 4)
            zmm1 = __andps_xmmxud_memxud(temp0_196, data_143f51040)
            zmm0 = _mm_shuffle_ps(temp0_195, zmm1, 0x32)
            zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_194, zmm1, 0), zmm0, 0x82)
            zmm0 = _mm_shuffle_ps(temp0_194, zmm1, 0x31)
            float temp0_204[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_195, zmm1, 0x10), zmm0, 0x88)
            zmm0 = zmm9
            float temp0_206[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_194, temp0_195, 0x12), zmm1, 0xe8)
            float temp0_207[0x4] = _mm_add_ps(zmm13, zmm13)
            zmm0[0].q = zmm12 u>> 0x40
            float temp0_208[0x4] = _mm_shuffle_ps(zmm12, zmm0, 0xc4)
            float temp0_209[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
            float temp0_210[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
            float temp0_211[0x4] = _mm_mul_ps(zmm13, temp0_207)
            float temp0_213[0x4] = _mm_mul_ps(temp0_197, _mm_shuffle_ps(temp0_207, temp0_207, 0x29))
            float temp0_214[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0x12)
            zmm0 = _mm_shuffle_ps(temp0_211, temp0_211, 0x1a)
            float temp0_216[0x4] = _mm_mul_ps(temp0_209, temp0_214)
            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_211, temp0_211, 1))
            float temp0_219[0x4] = _mm_add_ps(temp0_216, temp0_213)
            float temp0_220[0x4] = _mm_sub_ps(temp0_213, temp0_216)
            float temp0_221[0x4] = _mm_sub_ps(zmm9, zmm0)
            float temp0_222[0x4] = _mm_mul_ps(temp0_219, zmm14)
            float temp0_223[0x4] = _mm_mul_ps(temp0_210, temp0_220)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_221, zmm14), data_143f51040)
            zmm0 = _mm_shuffle_ps(temp0_223, zmm1, 0x32)
            float temp0_228[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_222, zmm1, 0), zmm0, 0x82)
            zmm0 = _mm_shuffle_ps(temp0_222, zmm1, 0x31)
            float temp0_231[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_223, zmm1, 0x10), zmm0, 0x88)
            float temp0_233[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_222, temp0_223, 0x12), zmm1, 0xe8)
            float temp0_234[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0x55)
            zmm0 = zmm9
            float temp0_235[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xaa)
            float temp0_236[0x4] = _mm_mul_ps(temp0_234, temp0_204)
            float temp0_237[0x4] = _mm_mul_ps(temp0_235, temp0_206)
            zmm0[0].q = zmm11 u>> 0x40
            float temp0_238[0x4] = _mm_shuffle_ps(zmm11, zmm0, 0xc4)
            zmm0 = _mm_shuffle_ps(temp0_228, temp0_228, 0)
            float temp0_241[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0xff), temp0_208)
            float temp0_243[0x4] = _mm_add_ps(temp0_236, _mm_mul_ps(zmm0, zmm8))
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0), zmm8)
            float temp0_246[0x4] = _mm_add_ps(temp0_243, temp0_237)
            float temp0_248[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0xaa), temp0_206)
            float temp0_249[0x4] = _mm_add_ps(temp0_246, temp0_241)
            float temp0_251[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0x55), temp0_204)
            float temp0_252[0x4] = _mm_shuffle_ps(temp0_231, temp0_231, 0xff)
            var_188 = temp0_249
            float temp0_253[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0x55)
            float temp0_254[0x4] = _mm_add_ps(temp0_251, zmm0)
            float temp0_255[0x4] = _mm_mul_ps(temp0_253, temp0_204)
            float temp0_256[0x4] = _mm_mul_ps(temp0_252, temp0_208)
            zmm0 = _mm_shuffle_ps(temp0_233, temp0_233, 0)
            float temp0_258[0x4] = _mm_add_ps(temp0_254, temp0_248)
            zmm0 = _mm_mul_ps(zmm0, zmm8)
            float temp0_261[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_233, temp0_233, 0xaa), temp0_206)
            float temp0_262[0x4] = _mm_add_ps(temp0_255, zmm0)
            float temp0_263[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0xff)
            float temp0_264[0x4] = _mm_add_ps(temp0_258, temp0_256)
            float temp0_265[0x4] = _mm_mul_ps(temp0_263, temp0_208)
            zmm0 = _mm_shuffle_ps(temp0_238, temp0_238, 0)
            float temp0_267[0x4] = _mm_add_ps(temp0_262, temp0_261)
            zmm0 = _mm_mul_ps(zmm0, zmm8)
            var_178 = temp0_264[0].12
            float temp0_269[0x4] = _mm_shuffle_ps(temp0_238, temp0_238, 0x55)
            float temp0_270[0x4] = _mm_add_ps(temp0_267, temp0_265)
            float temp0_271[0x4] = _mm_mul_ps(temp0_269, temp0_204)
            var_168 = temp0_270[0].12
            float temp0_272[0x4] = _mm_add_ps(temp0_271, zmm0)
            float temp0_274[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_238, temp0_238, 0xaa), temp0_206)
            float temp0_276[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_238, temp0_238, 0xff), temp0_208)
            var_158.o = _mm_add_ps(_mm_add_ps(temp0_272, temp0_274), temp0_276)
            int128_t zmm9_1 = sub_1407740e0(&var_188, 0x322bcc77)
            float zmm2_2[0x4] = var_188[0]
            uint32_t zmm4_2[0x4] = data_143f51100 ^ zmm9_1
            float temp0_279[0x4] = __cmpps_xmmps_memps_immb(var_1b8.o, var_1a8.o, 2)
            float zmm0_2 = var_188[2]
            zmm4_2 = _mm_and_ps(zmm4_2, temp0_279) ^ data_143f51100
            float zmm1_2[0x4] = var_188[1]
            zmm2_2[0] = zmm2_2[0] f* zmm4_2[0]
            zmm1_2[0] = zmm1_2[0] f* zmm4_2[0]
            var_188[0] = zmm2_2[0]
            zmm0_2 = zmm0_2 f* zmm4_2[0]
            var_188[1] = zmm1_2[0]
            zmm1_2 = var_178:4.d
            var_188[2] = zmm0_2
            float temp0_281[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
            zmm1_2[0] = zmm1_2[0] * temp0_281[0]
            zmm0_2 = var_178:8.d * temp0_281[0]
            float zmm3_2 = var_178.d * temp0_281[0]
            zmm2_2 = var_168.d
            zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
            var_178:4.d = zmm1_2[0]
            zmm1_2 = var_168:4.d
            var_178:8.d = zmm0_2
            zmm1_2[0] = zmm1_2[0] f* zmm4_2[0]
            zmm0_2 = var_168:8.d f* zmm4_2[0]
            zmm2_2[0] = zmm2_2[0] f* zmm4_2[0]
            var_168:4.d = zmm1_2[0]
            var_168:8.d = zmm0_2
            var_178.d = zmm3_2
            var_168.d = zmm2_2[0]
            sub_14077e4a0(&var_1b8, &var_188)
            float zmm5_2[0x4] = var_1b8.o
            zmm7 = data_143f50de0
            float temp0_283[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            float temp0_285[0x4] = _mm_add_ps(temp0_283, _mm_shuffle_ps(temp0_283, temp0_283, 0x4e))
            float temp0_287[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_285, temp0_285, 0x39), temp0_285)
            float temp0_288[0x4] = _mm_rsqrt_ps(temp0_287)
            float temp0_289[0x4] = _mm_mul_ps(temp0_287, zmm7)
            float temp0_294[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_288, temp0_288), temp0_289)), 
                    temp0_288), 
                temp0_288)
            float temp0_297[0x4] =
                _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_294, temp0_294), temp0_289))
            zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_287, 2)
            float temp0_301[0x4] = _mm_add_ps(_mm_mul_ps(temp0_297, temp0_294), temp0_294)
            float temp0_302[0x4] = _mm_unpacklo_ps(var_158:4.d, 0)
            zmm7 = _mm_and_ps(_mm_mul_ps(temp0_301, zmm5_2) ^ data_143f50dd0, zmm0) ^ data_143f50dd0
            float temp0_305[0x4] = _mm_unpacklo_ps(var_158.d, var_150[0].q)
            zmm0 = var_1a8.o
            zmm4_1 = _mm_unpacklo_ps(temp0_305, temp0_302[0].q)
        
        var_138 = zmm7
        float var_128_1[0x4] = zmm4_1
        uint32_t var_118_1[0x4] = zmm0
    
    void* rcx_12 = *(arg1 + 0xa0)
    
    if (rcx_12 != 0)
        float (* rax_6)[0x4] = sub_142220780(&var_188, arg1, &var_138)
        rcx_12 = *(arg1 + 0xa0)
        var_138 = *rax_6
        int128_t var_128_3 = rax_6[1]
        float var_118_3[0x4] = rax_6[2]
    
    var_188[0].q = arg1
    int64_t var_148_1 = arg2
    var_188[2].q = &var_138
    
    if (rcx_12 == 0)
        rcx_12 = arg1
    
    var_178.q = &arg_18
    void arg_38
    var_178:8.q = &arg_38
    var_168.q = arg7
    var_168:8.q = arg8
    int64_t var_158_1 = arg9
    char* var_150_1 = &result_1
    float (* var_1a0_3)[0x4] = &var_188
    var_1a8 = j_sub_14220e9d0
    sub_142269e40(rcx_12 + 0xf0, &var_1a8)
    result = result_1
else
    void* rcx_1 = *(arg1 + 0xa0)
    
    if (rcx_1 != 0)
        result = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(rcx_1 + 0xf0)
    
    if (rcx_1 != 0 && result != 0)
        goto label_14221ce39
    
    result = 0

__security_check_cookie(rax_1 ^ &var_1f8)
return result
