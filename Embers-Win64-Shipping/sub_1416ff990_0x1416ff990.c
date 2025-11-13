// 函数: sub_1416ff990
// 地址: 0x1416ff990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t var_178 = arg2[6].q
float var_180 = arg1[0]
float zmm9[0x4] = arg1
int128_t* rax_3 = sub_141746340(&var_178)
int128_t* rax_4 = sub_141749180(&var_178)
float zmm3[0x4] = data_14399f668
float var_118[0x4] = *rax_4
float zmm1[0x4] = *(rax_3 + 4)
float temp0[0x4] = _mm_unpacklo_ps(*rax_3, (*(rax_3 + 8))[0].q)
arg1 = data_14399f670
float temp0_1[0x4] = _mm_unpacklo_ps(zmm1, 0)
float zmm2[0x4] = data_14399f66c
float temp0_2[0x4] = _mm_unpacklo_ps(zmm3, arg1[0].q)
arg1 = zx.o(0)
float temp0_3[0x4] = _mm_unpacklo_ps(temp0, temp0_1[0].q)
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_2, _mm_unpacklo_ps(zmm2, 0)[0].q)
arg1[0].q = fconvert.d(temp0_3[0])
int96_t var_108 = temp0_3[0].12
float var_f8[0x4] = temp0_5
int32_t* result = _isnan(arg1[0].q)

if (result.d == 0)
    arg1 = var_108:4.d
    arg1[0].q = fconvert.d(arg1[0])
    result = _isnan(arg1[0].q)
    
    if (result.d == 0)
        arg1 = var_108:8.d
        arg1[0].q = fconvert.d(arg1[0])
        result = _isnan(arg1[0].q)
        
        if (result.d == 0)
            int64_t var_188 = *(arg2 + 0x68)
            float (* rax_6)[0x4] = sub_141746340(&var_188)
            float (* rax_7)[0x4] = sub_141749180(&var_188)
            zmm2 = (*rax_6)[1]
            float zmm8[0x4] = data_14399f668
            float zmm14[0x4] = arg2[5]
            float zmm15[0x4] = data_143ef7530
            float zmm5_1[0x4] = *rax_7
            float temp0_6[0x4] = _mm_unpacklo_ps(*rax_6, (*rax_6)[2][0].q)
            float temp0_7[0x4] = _mm_unpacklo_ps(zmm8, data_14399f670[0].q)
            float temp0_9[0x4] = _mm_unpacklo_ps(temp0_6, _mm_unpacklo_ps(zmm2, 0)[0].q)
            float temp0_11[0x4] = _mm_unpacklo_ps(temp0_7, _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
            float zmm6[0x4]
            float zmm7[0x4]
            float zmm13[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, temp0_11), zmm15, 1)) == 0)
                zmm2 = arg2[3]
                zmm3 = arg2[4]
                float temp0_144[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
                float temp0_146[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_144)
                float temp0_147[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                float temp0_148[0x4] = _mm_mul_ps(zmm3, temp0_11)
                float temp0_149[0x4] = __mulps_xmmps_memps(temp0_146, data_143ef72e0)
                float temp0_150[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                zmm13 = _mm_mul_ps(zmm14, temp0_11)
                float temp0_153[0x4] = _mm_add_ps(temp0_149, _mm_mul_ps(temp0_150, zmm2))
                float temp0_155[0x4] = _mm_mul_ps(temp0_147, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), 
                    _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                float temp0_159[0x4] = __mulps_xmmps_memps(temp0_155, data_143ef72d0)
                float temp0_160[0x4] = _mm_shuffle_ps(temp0_148, temp0_148, 0xd2)
                float temp0_161[0x4] = __mulps_xmmps_memps(temp0_158, data_143ef72c0)
                float temp0_162[0x4] = _mm_add_ps(temp0_153, temp0_159)
                float temp0_163[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                float temp0_164[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                float temp0_165[0x4] = _mm_mul_ps(temp0_160, temp0_164)
                zmm6 = _mm_add_ps(temp0_162, temp0_161)
                float temp0_169[0x4] = _mm_sub_ps(temp0_165, 
                    _mm_mul_ps(_mm_shuffle_ps(temp0_148, temp0_148, 0xc9), temp0_163))
                float temp0_170[0x4] = _mm_add_ps(temp0_169, temp0_169)
                float temp0_171[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xd2)
                float temp0_172[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xc9)
                float temp0_173[0x4] = _mm_mul_ps(temp0_171, temp0_164)
                float temp0_174[0x4] = _mm_mul_ps(temp0_172, temp0_163)
                float temp0_175[0x4] = _mm_mul_ps(temp0_170, temp0_150)
                zmm7 = _mm_add_ps(
                    _mm_add_ps(_mm_sub_ps(temp0_173, temp0_174), _mm_add_ps(temp0_175, temp0_148)), 
                    temp0_9)
            else
                float zmm10[0x4] = data_143ef72f0
                float temp0_15[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
                float temp0_16[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
                float temp0_17[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
                _mm_mul_ps(zmm14, temp0_11)
                float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0x29), temp0_16)
                float temp0_21[0x4] = _mm_mul_ps(temp0_15, zmm5_1)
                float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0x12), 
                    _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff))
                float temp0_25[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                float temp0_28[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0x1a), 
                    _mm_shuffle_ps(temp0_21, temp0_21, 1))
                zmm3 = arg2[3]
                float temp0_29[0x4] = _mm_add_ps(temp0_24, temp0_20)
                float temp0_30[0x4] = _mm_sub_ps(temp0_20, temp0_24)
                float temp0_31[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                float temp0_32[0x4] = _mm_mul_ps(temp0_29, temp0_11)
                float temp0_33[0x4] = _mm_mul_ps(temp0_17, temp0_30)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_28), temp0_11), 
                    data_143ef7300)
                float temp0_37[0x4] = _mm_shuffle_ps(temp0_33, zmm1, 0x32)
                float temp0_39[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_32, zmm1, 0), temp0_37, 0x82)
                float temp0_40[0x4] = _mm_shuffle_ps(temp0_32, zmm1, 0x31)
                float temp0_42[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_33, zmm1, 0x10), temp0_40, 0x88)
                float temp0_44[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_32, temp0_33, 0x12), zmm1, 0xe8)
                float temp0_45[0x4] = _mm_add_ps(zmm3, zmm3)
                zmm10[0].q = temp0_9 u>> 0x40
                float temp0_46[0x4] = _mm_shuffle_ps(temp0_9, zmm10, 0xc4)
                float temp0_47[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x29)
                float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm3)
                float temp0_49[0x4] = _mm_mul_ps(temp0_31, temp0_47)
                float temp0_50[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x12)
                float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_50)
                float temp0_55[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0x1a), 
                    _mm_shuffle_ps(temp0_48, temp0_48, 1))
                float temp0_56[0x4] = _mm_add_ps(temp0_52, temp0_49)
                float temp0_57[0x4] = _mm_sub_ps(temp0_49, temp0_52)
                float temp0_58[0x4] = _mm_sub_ps(zmm10, temp0_55)
                float temp0_59[0x4] = _mm_mul_ps(temp0_56, zmm14)
                float temp0_60[0x4] = _mm_mul_ps(temp0_25, temp0_57)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_58, zmm14), data_143ef7300)
                float temp0_65[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_59, zmm1, 0), 
                    _mm_shuffle_ps(temp0_60, zmm1, 0x32), 0x82)
                float temp0_66[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0x10)
                float temp0_67[0x4] = _mm_shuffle_ps(temp0_59, zmm1, 0x31)
                float temp0_68[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
                float temp0_69[0x4] = _mm_shuffle_ps(temp0_66, temp0_67, 0x88)
                float temp0_70[0x4] = _mm_mul_ps(temp0_68, temp0_42)
                float temp0_71[0x4] = _mm_shuffle_ps(temp0_59, temp0_60, 0x12)
                zmm5_1 = arg2[4]
                float temp0_72[0x4] = _mm_shuffle_ps(temp0_71, zmm1, 0xe8)
                float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_44)
                zmm10[0].q = zmm5_1 u>> 0x40
                float temp0_75[0x4] = _mm_shuffle_ps(zmm5_1, zmm10, 0xc4)
                float temp0_76[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
                float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), temp0_46)
                float temp0_80[0x4] = _mm_add_ps(temp0_70, _mm_mul_ps(temp0_76, temp0_39))
                float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0), temp0_39)
                float temp0_83[0x4] = _mm_add_ps(temp0_80, temp0_74)
                float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_44)
                float temp0_86[0x4] = _mm_add_ps(temp0_83, temp0_78)
                float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0x55), temp0_42)
                float temp0_89[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xff)
                float var_168[0x4] = temp0_86
                float temp0_90[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
                float temp0_91[0x4] = _mm_add_ps(temp0_88, temp0_82)
                float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_42)
                float temp0_93[0x4] = _mm_mul_ps(temp0_89, temp0_46)
                float temp0_94[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0)
                float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_85)
                float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_39)
                float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xaa), temp0_44)
                float temp0_99[0x4] = _mm_add_ps(temp0_95, temp0_93)
                float temp0_100[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xff)
                float temp0_101[0x4] = _mm_add_ps(temp0_92, temp0_96)
                float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_46)
                float temp0_103[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0)
                int96_t var_158_1 = temp0_99[0].12
                float temp0_104[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0x55)
                float temp0_105[0x4] = _mm_add_ps(temp0_101, temp0_98)
                float temp0_106[0x4] = _mm_mul_ps(temp0_104, temp0_42)
                float temp0_108[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xaa), temp0_44)
                float temp0_109[0x4] = _mm_mul_ps(temp0_103, temp0_39)
                float temp0_110[0x4] = _mm_add_ps(temp0_105, temp0_102)
                float temp0_112[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xff), temp0_46)
                float temp0_113[0x4] = _mm_add_ps(temp0_106, temp0_109)
                int96_t var_148_1 = temp0_110[0].12
                int96_t var_138_1 = _mm_add_ps(_mm_add_ps(temp0_113, temp0_108), temp0_112)[0].12
                int128_t zmm10_1
                float zmm15_1[0x4]
                zmm10_1, zmm13, zmm15_1 = sub_1407740e0(&var_168, 0x322bcc77)
                float zmm2_1[0x4] = var_168[0]
                float zmm1_1 = var_168[1]
                zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13, 2), data_143ef7520 ^ zmm10_1)
                    ^ data_143ef7520
                zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                uint32_t zmm0[0x4] = var_168[2]
                zmm0[0] = zmm0[0] f* zmm15_1[0]
                zmm1_1 = zmm1_1 * zmm15_1[0]
                var_168[0] = zmm2_1[0]
                float temp0_118[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                var_168[2] = zmm0[0]
                zmm0 = var_158_1:8.d
                zmm0[0] = zmm0[0] f* temp0_118[0]
                var_168[1] = zmm1_1
                zmm1_1 = var_158_1:4.d * temp0_118[0]
                float zmm3_1 = var_158_1.d * temp0_118[0]
                zmm2_1 = var_148_1.d
                var_158_1:8.d = zmm0[0]
                zmm0 = var_148_1:8.d
                var_158_1:4.d = zmm1_1
                float temp0_119[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                zmm0[0] = zmm0[0] f* temp0_119[0]
                zmm2_1[0] = zmm2_1[0] * temp0_119[0]
                zmm1_1 = var_148_1:4.d * temp0_119[0]
                var_148_1:8.d = zmm0[0]
                var_158_1.d = zmm3_1
                var_148_1.d = zmm2_1[0]
                var_148_1:4.d = zmm1_1
                uint32_t var_128[0x4]
                sub_14077e4a0(&var_128, &var_168)
                uint32_t zmm5_2[0x4] = var_128
                zmm6 = data_143ef72b0
                zmm9 = var_180
                uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                var_188.d = 0x322bcc77
                zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
                zmm1_2 = _mm_rsqrt_ps(zmm4_2)
                uint32_t zmm3_2[0x4] = _mm_mul_ps(zmm4_2, zmm6)
                float temp0_131[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), 
                        zmm1_2), 
                    zmm1_2)
                float temp0_134[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_131, temp0_131), zmm3_2))
                arg1 = var_188.d
                float temp0_136[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(arg1, arg1, 0), zmm4_2, 2)
                float temp0_138[0x4] = _mm_add_ps(_mm_mul_ps(temp0_134, temp0_131), temp0_131)
                float temp0_139[0x4] = _mm_unpacklo_ps(var_138_1:4.d, 0)
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_138, zmm5_2) ^ data_143ef72a0, temp0_136)
                    ^ data_143ef72a0
                zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_138_1.d, var_138_1:8.d[0].q), 
                    temp0_139[0].q)
            
            arg1 = zx.o(0)
            float var_e8[0x4] = zmm6
            arg1[0].q = fconvert.d(zmm7[0])
            int96_t var_d8_1 = zmm7[0].12
            float var_c8_1[0x4] = zmm13
            result = _isnan(arg1[0].q)
            
            if (result.d == 0)
                arg1 = var_d8_1:4.d
                arg1[0].q = fconvert.d(arg1[0])
                result = _isnan(arg1[0].q)
                
                if (result.d == 0)
                    arg1 = var_d8_1:8.d
                    arg1[0].q = fconvert.d(arg1[0])
                    result = _isnan(arg1[0].q)
                    
                    if (result.d == 0)
                        result = sub_1417347d0(&var_178)
                        void* r8_1 = *result
                        
                        if (r8_1 != 0)
                            result = sub_1416f10e0(*(arg2 + 0xb8), &var_e8, r8_1, &var_118, 
                                zmm9[0], arg2)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
