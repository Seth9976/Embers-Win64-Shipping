// 函数: sub_14223e1e0
// 地址: 0x14223e1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t* result = *arg1
int32_t i = 0

if (*result s> 0)
    int64_t rsi_1 = 0
    uint32_t zmm13[0x4] = 0x7fffffff
    int128_t zmm14 = 0x38d1b717
    uint32_t zmm6[0x4]
    uint32_t var_28_1[0x4] = zmm6
    float zmm7[0x4]
    float var_38_1[0x4] = zmm7
    float zmm8[0x4]
    float var_48_1[0x4] = zmm8
    float zmm9[0x4]
    float var_58_1[0x4] = zmm9
    float zmm10[0x4]
    float var_68_1[0x4] = zmm10
    float zmm11[0x4]
    float var_78_1[0x4] = zmm11
    float zmm12[0x4]
    float var_88_1[0x4] = zmm12
    float zmm15[0x4]
    float var_b8_1[0x4] = zmm15
    
    do
        void* rdi_1 = *(*(arg1[1] + 0x800) + (rsi_1 << 3))
        
        if (rdi_1 != 0)
            if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(rdi_1 + 0xf0) == 0)
            label_14223e9a0:
                
                if ((*(arg1[1] + 0x719) & 0x40) == 0 && not(zx.o(0)[0] f< *(rdi_1 + 0xcc)))
                    sub_140d3e110(rdi_1 + 0x100)
            else
                if (sub_142271bf0(rdi_1 + 0xf0) != 0)
                    goto label_14223e9a0
                
                if (*arg1[2] == 0)
                    if (sub_142222800(rdi_1, arg2) == 0)
                        goto label_14223e2e5
                    
                    if (sub_14221b2f0(rdi_1) != 0)
                        goto label_14223e9a0
                    
                    goto label_14223e2e5
                
            label_14223e2e5:
                int64_t rcx_5 = sx.q(*(rdi_1 + 4))
                
                if (rcx_5.d == 0xffffffff || rcx_5.d s>= *arg1[3])
                    int64_t var_128
                    arg2 = sub_140b58260(&var_128, u"UNKNOWN", 1)
                    
                    if (rsi_1 s>= 0)
                        void* rax_23 = *arg1[4]
                        
                        if (i s< *(rax_23 + 0x48))
                            var_128 = *(*(*(rax_23 + 0x40) + (rsi_1 << 3)) + 0x80)
                else
                    void* r8_1 = arg1[5]
                    
                    if (rcx_5.d s< *(r8_1 + 8))
                        zmm15 = data_143f515b0
                        zmm6 = data_143f515c0
                        int128_t* rdx_1 = arg1[6]
                        arg2.o = zmm15
                        float zmm2[0x4] = zx.o(0)
                        float (* rcx_10)[0x4] = rcx_5 * 0x30 + *r8_1
                        arg2.q = zmm2 u>> 0x40
                        float temp0_1[0x4] = _mm_shuffle_ps(zx.o(0), arg2.o, 0xc4)
                        arg2.o = zmm15
                        float var_f8[0x4] = temp0_1
                        arg2.o = _mm_and_ps(arg2.o, zmm6)
                        int128_t var_d8_1 = arg2.o
                        arg2.o = data_143f519a0
                        float var_e8_1[0x4] = zmm2
                        zmm12 = rcx_10[2]
                        zmm9 = rdx_1[2]
                        float var_108_1[0x4] = arg2.o
                        float var_d8_2[0x4]
                        float zmm3[0x4]
                        float zmm5[0x4]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm9), arg2.o, 1)) == 0)
                            zmm6 = *rdx_1
                            zmm3 = *rcx_10
                            zmm5 = rcx_10[1]
                            zmm8 = rdx_1[1]
                            float temp0_135[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                            arg2.o = zmm6
                            float temp0_137[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_135)
                            arg2.o = _mm_shuffle_ps(arg2.o, zmm6, 0x55)
                            float temp0_139[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                            float temp0_140[0x4] = _mm_mul_ps(zmm3, temp0_139)
                            float temp0_141[0x4] = __mulps_xmmps_memps(temp0_137, data_143f51580)
                            float temp0_142[0x4] = _mm_mul_ps(zmm9, zmm5)
                            float temp0_143[0x4] = _mm_mul_ps(zmm12, zmm9)
                            float temp0_144[0x4] = _mm_add_ps(temp0_141, temp0_140)
                            arg2.o = _mm_mul_ps(arg2.o, _mm_shuffle_ps(zmm3, zmm3, 0x4e))
                            float temp0_149[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), 
                                _mm_shuffle_ps(zmm3, zmm3, 0xb1))
                            arg2.o = __mulps_xmmps_memps(arg2.o, data_143f51570)
                            float temp0_151[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                            float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f51560)
                            float temp0_153[0x4] = _mm_add_ps(temp0_144, arg2.o)
                            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                            var_d8_2 = temp0_143
                            float temp0_155[0x4] = _mm_add_ps(temp0_153, temp0_152)
                            float temp0_157[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_142, temp0_142, 0xc9), temp0_151)
                            var_f8 = temp0_155
                            float temp0_160[0x4] = _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_142, temp0_142, 0xd2), zmm6), 
                                temp0_157)
                            float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
                            arg2.o = temp0_161
                            float temp0_162[0x4] = _mm_mul_ps(temp0_139, temp0_161)
                            arg2.o = _mm_shuffle_ps(arg2.o, temp0_161, 0xd2)
                            arg2.o = _mm_mul_ps(arg2.o, zmm6)
                            float temp0_165[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
                            float temp0_166[0x4] = _mm_add_ps(temp0_162, temp0_142)
                            arg2.o = _mm_sub_ps(arg2.o, _mm_mul_ps(temp0_165, temp0_151))
                            arg2.o = _mm_add_ps(arg2.o, temp0_166)
                            arg2.o = _mm_add_ps(arg2.o, zmm8)
                            int128_t var_e8_3 = arg2.o
                        else
                            zmm3 = *rdx_1
                            zmm8 = rdx_1[1]
                            arg2.o = zmm3
                            arg2.o = _mm_add_ps(arg2.o, zmm3)
                            float temp0_7[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
                            float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                            float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                            _mm_mul_ps(zmm12, zmm9)
                            float temp0_11[0x4] = _mm_mul_ps(zmm3, arg2.o)
                            float temp0_13[0x4] =
                                _mm_mul_ps(temp0_8, _mm_shuffle_ps(arg2.o, arg2.o, 0x29))
                            arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0x12)
                            float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x1a)
                            float temp0_16[0x4] = _mm_mul_ps(temp0_9, arg2.o)
                            arg2.o = zmm15
                            float temp0_18[0x4] =
                                _mm_add_ps(temp0_15, _mm_shuffle_ps(temp0_11, temp0_11, 1))
                            float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_13)
                            float temp0_20[0x4] = _mm_sub_ps(temp0_13, temp0_16)
                            zmm3 = *rcx_10
                            arg2.o = _mm_sub_ps(arg2.o, temp0_18)
                            float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm9)
                            float temp0_23[0x4] = _mm_mul_ps(temp0_7, temp0_20)
                            arg2.o = _mm_mul_ps(arg2.o, zmm9)
                            float temp0_25[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                            arg2.o = _mm_and_ps(arg2.o, zmm6)
                            float temp0_27[0x4] = _mm_shuffle_ps(temp0_23, arg2.o, 0x32)
                            float temp0_29[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, arg2.o, 0), temp0_27, 0x82)
                            float temp0_30[0x4] = _mm_shuffle_ps(temp0_22, arg2.o, 0x31)
                            float temp0_32[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_23, arg2.o, 0x10), temp0_30, 0x88)
                            float temp0_34[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_22, temp0_23, 0x12), arg2.o, 0xe8)
                            arg2.o = zmm3
                            arg2.o = _mm_add_ps(arg2.o, zmm3)
                            zmm15[0].q = zmm8 u>> 0x40
                            float temp0_36[0x4] = _mm_shuffle_ps(zmm8, zmm15, 0xc4)
                            float temp0_37[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                            float temp0_38[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                            float temp0_39[0x4] = _mm_mul_ps(zmm3, arg2.o)
                            float temp0_41[0x4] =
                                _mm_mul_ps(temp0_25, _mm_shuffle_ps(arg2.o, arg2.o, 0x29))
                            arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0x12)
                            float temp0_43[0x4] = _mm_mul_ps(temp0_37, arg2.o)
                            arg2.o = zmm15
                            float temp0_46[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_39, temp0_39, 0x1a), 
                                _mm_shuffle_ps(temp0_39, temp0_39, 1))
                            zmm6 = _mm_add_ps(temp0_43, temp0_41)
                            float temp0_48[0x4] = _mm_sub_ps(temp0_41, temp0_43)
                            arg2.o = _mm_sub_ps(arg2.o, temp0_46)
                            zmm6 = _mm_mul_ps(zmm6, zmm12)
                            float temp0_51[0x4] = _mm_mul_ps(temp0_38, temp0_48)
                            arg2.o = _mm_mul_ps(arg2.o, zmm12)
                            arg2.o = __andps_xmmxud_memxud(arg2.o, data_143f515c0)
                            float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, arg2.o, 0), 
                                _mm_shuffle_ps(temp0_51, arg2.o, 0x32), 0x82)
                            float temp0_57[0x4] = _mm_shuffle_ps(temp0_51, arg2.o, 0x10)
                            float temp0_58[0x4] = _mm_shuffle_ps(zmm6, arg2.o, 0x31)
                            float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
                            float temp0_60[0x4] = _mm_shuffle_ps(temp0_57, temp0_58, 0x88)
                            float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_32)
                            zmm6 = _mm_shuffle_ps(zmm6, temp0_51, 0x12)
                            zmm5 = rcx_10[1]
                            zmm6 = _mm_shuffle_ps(zmm6, arg2.o, 0xe8)
                            arg2.o = temp0_56
                            arg2.o = _mm_shuffle_ps(arg2.o, temp0_56, 0xaa)
                            arg2.o = _mm_mul_ps(arg2.o, temp0_34)
                            zmm15[0].q = zmm5 u>> 0x40
                            float temp0_66[0x4] = _mm_shuffle_ps(zmm5, zmm15, 0xc4)
                            float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
                            float temp0_69[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_36)
                            float temp0_71[0x4] =
                                _mm_add_ps(temp0_61, _mm_mul_ps(temp0_67, temp0_29))
                            float temp0_73[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_29)
                            float temp0_74[0x4] = _mm_add_ps(temp0_71, arg2.o)
                            arg2.o = temp0_60
                            arg2.o = _mm_shuffle_ps(arg2.o, temp0_60, 0xaa)
                            arg2.o = _mm_mul_ps(arg2.o, temp0_34)
                            float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_69)
                            float temp0_79[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_32)
                            float temp0_80[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
                            float var_188[0x4] = temp0_77
                            float temp0_81[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                            float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
                            float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_32)
                            float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_36)
                            float temp0_85[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                            float temp0_86[0x4] = _mm_add_ps(temp0_82, arg2.o)
                            float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_29)
                            arg2.o = zmm6
                            arg2.o = _mm_shuffle_ps(arg2.o, zmm6, 0xaa)
                            arg2.o = _mm_mul_ps(arg2.o, temp0_34)
                            float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
                            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                            float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
                            zmm6 = _mm_mul_ps(zmm6, temp0_36)
                            float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
                            int96_t var_178_1 = temp0_90[0].12
                            float temp0_95[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
                            float temp0_96[0x4] = _mm_add_ps(temp0_92, arg2.o)
                            float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_32)
                            arg2.o = temp0_66
                            arg2.o = _mm_shuffle_ps(arg2.o, temp0_66, 0xaa)
                            arg2.o = _mm_mul_ps(arg2.o, temp0_34)
                            float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_29)
                            float temp0_101[0x4] = _mm_add_ps(temp0_96, zmm6)
                            float temp0_103[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_36)
                            float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
                            int96_t var_168_1 = temp0_101[0].12
                            float temp0_105[0x4] = _mm_add_ps(temp0_104, arg2.o)
                            arg2.o = 0x322bcc77
                            int96_t var_158_1 = _mm_add_ps(temp0_105, temp0_103)[0].12
                            zmm11, zmm13, zmm14, zmm15 = sub_1407740e0(&var_188, arg2.o)
                            float zmm2_1[0x4] = var_188[0]
                            float zmm1 = var_188[1]
                            float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_108_1, zmm11, 2), 
                                data_143f51990 ^ zmm15) ^ data_143f51990
                            zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                            uint32_t zmm0_1[0x4] = var_188[2]
                            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                            zmm1 = zmm1 * zmm4_1[0]
                            var_188[0] = zmm2_1[0]
                            float temp0_109[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                            var_188[2] = zmm0_1[0]
                            zmm0_1 = var_178_1:8.d
                            zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
                            var_188[1] = zmm1
                            zmm1 = var_178_1:4.d * temp0_109[0]
                            float zmm3_1 = var_178_1.d * temp0_109[0]
                            zmm2_1 = var_168_1.d
                            float temp0_110[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                            var_178_1:8.d = zmm0_1[0]
                            zmm0_1 = var_168_1:8.d
                            var_178_1:4.d = zmm1
                            zmm0_1[0] = zmm0_1[0] f* temp0_110[0]
                            zmm2_1[0] = zmm2_1[0] * temp0_110[0]
                            zmm1 = var_168_1:4.d * temp0_110[0]
                            var_168_1:8.d = zmm0_1[0]
                            var_178_1.d = zmm3_1
                            var_168_1.d = zmm2_1[0]
                            var_168_1:4.d = zmm1
                            uint32_t var_118[0x4]
                            sub_14077e4a0(&var_118, &var_188)
                            uint32_t zmm5_1[0x4] = var_118
                            zmm6 = data_143f515a0
                            uint32_t zmm1_1[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                            var_d8_2 = zmm11
                            zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                            uint32_t zmm4_2[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                            zmm1_1 = _mm_rsqrt_ps(zmm4_2)
                            float temp0_117[0x4] = _mm_mul_ps(zmm4_2, zmm6)
                            uint32_t zmm2_2[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), temp0_117)), 
                                    zmm1_1), 
                                zmm1_1)
                            zmm6 =
                                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), temp0_117))
                            uint32_t zmm0_2[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
                            zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2_2), zmm2_2)
                            zmm2_2 = _mm_unpacklo_ps(var_158_1:4.d, 0)
                            zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5_1) ^ data_143f51590, zmm0_2)
                                ^ data_143f51590
                            float var_e8_2[0x4] = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_158_1.d, var_158_1:8.d[0].q), zmm2_2[0].q)
                            var_118 = zmm6
                            var_f8 = zmm6
                        
                        if (sub_14224feb0(&var_f8) != 0)
                            if (*arg1[2] != 0)
                                r8_1.b = 1
                                arg2 = sub_142278c00(rdi_1 + 0xf0, &var_f8)
                            else
                                arg2 = sub_142279090(*arg1[7], rdi_1, &var_f8, 1)
                            
                            if (*(*(*(*arg1[4] + 0x40) + (rsi_1 << 3)) + 0x270) == 0)
                                int32_t* rdx_5 = arg1[8]
                                zmm2 = *rdx_5
                                arg2.o = rdx_5[1]
                                zmm2[0] = zmm2[0] f- arg2.d
                                
                                if (_mm_and_ps(zmm2, zmm13)[0] f> zmm14.d)
                                    arg2 = sub_142226370(rdi_1, rdx_5, 0)
                                else
                                    float zmm0[0x4] = rdx_5[2]
                                    zmm2[0] = zmm2[0] - zmm0[0]
                                    
                                    if (_mm_and_ps(zmm2, zmm13)[0] f> zmm14.d)
                                        arg2 = sub_142226370(rdi_1, rdx_5, 0)
                                    else
                                        arg2.d = arg2.d f- zmm0[0]
                                        arg2.o = _mm_and_ps(arg2.o, zmm13)
                                        
                                        if (arg2.d f> zmm14.d)
                                            arg2 = sub_142226370(rdi_1, rdx_5, 0)
                                        else
                                            arg2.o = var_d8_2
                                            int32_t var_148 = arg2.d
                                            float temp0_174[0x4] =
                                                _mm_shuffle_ps(arg2.o, arg2.o, 0x55)
                                            arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0xaa)
                                            int32_t var_140_1 = arg2.d
                                            float var_144_1 = temp0_174[0]
                                            arg2 = sub_142226370(rdi_1, &var_148, 0)
                        else
                            int64_t var_130
                            arg2 = sub_140b58260(&var_130, u"UNKNOWN", 1)
                            
                            if (rsi_1 s>= 0)
                                void* rax_16 = *arg1[4]
                                
                                if (i s< *(rax_16 + 0x48))
                                    var_130 = *(*(*(rax_16 + 0x40) + (rsi_1 << 3)) + 0x80)
                    else
                        int64_t var_138
                        arg2 = sub_140b58260(&var_138, u"UNKNOWN", 1)
                        
                        if (rsi_1 s>= 0)
                            void* rax_10 = *arg1[4]
                            
                            if (i s< *(rax_10 + 0x48))
                                var_138 = *(*(*(rax_10 + 0x40) + (rsi_1 << 3)) + 0x80)
        
        result = *arg1
        i += 1
        rsi_1 += 1
    while (i s< *result)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
