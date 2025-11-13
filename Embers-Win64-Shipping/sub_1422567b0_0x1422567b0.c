// 函数: sub_1422567b0
// 地址: 0x1422567b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r10 = *arg1
int64_t r14 = sx.q(arg3)
int64_t rdi_1 = r14 << 6

if (*(rdi_1 + r10 + 0x30) == 0)
    float zmm4[0x4]
    float zmm7[0x4]
    float zmm14[0x4]
    
    if (arg3 != 0)
        int128_t* var_120_1 = arg7
        int64_t rbx_1 = sx.q(*(*(*(arg4 + 0x430) + 0x1a8) + r14 * 0xc + 8))
        void** var_128_1 = arg6
        sub_1422567b0(arg1, arg5, zx.q(rbx_1.d))
        r10 = *arg1
        result = rbx_1 << 6
        zmm4 = *(result + r10)
        zmm14 = *(result + r10 + 0x10)
        zmm7 = *(result + r10 + 0x20)
        
        if (r14.d s>= 0)
            goto label_142256878
    else
        result = arg6
        zmm4 = *result
        zmm14 = *(result + 0x10)
        zmm7 = *(result + 0x20)
    label_142256878:
        
        if (r14.d s< *(arg2 + 8))
            float zmm2[0x4] = *(arg7 + 4)
            float temp0_1[0x4] = _mm_unpacklo_ps(*arg7, (*(arg7 + 8))[0].q)
            int128_t* rax_6 = r14 * 0x30 + *arg2
            float zmm15[0x4] = rax_6[2]
            float zmm12[0x4] = *rax_6
            float temp0_2[0x4] = _mm_min_ps(zmm15, zmm7)
            float temp0_3[0x4] = _mm_unpacklo_ps(zmm2, 0)
            float temp0_4[0x4] = __cmpps_xmmps_memps_immb(temp0_2, data_143f519a0, 1)
            float temp0_6[0x4] =
                __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_1, temp0_3[0].q), rax_6[1])
            float zmm5[0x4]
            float zmm6[0x4]
            float zmm13[0x4]
            
            if (_mm_movemask_ps(temp0_4) == 0)
                float temp0_137[0x4] = _mm_mul_ps(temp0_6, zmm7)
                float temp0_140[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), _mm_shuffle_ps(zmm12, zmm12, 0x1b))
                float temp0_141[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                float temp0_142[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
                float temp0_143[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                float temp0_144[0x4] = __mulps_xmmps_memps(temp0_140, data_143f51580)
                float temp0_145[0x4] = _mm_mul_ps(temp0_143, zmm12)
                zmm13 = _mm_mul_ps(zmm15, zmm7)
                float temp0_147[0x4] = _mm_add_ps(temp0_144, temp0_145)
                float temp0_149[0x4] = _mm_mul_ps(temp0_141, _mm_shuffle_ps(zmm12, zmm12, 0x4e))
                float temp0_152[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm12, zmm12, 0xb1))
                float temp0_153[0x4] = __mulps_xmmps_memps(temp0_149, data_143f51570)
                float temp0_154[0x4] = __mulps_xmmps_memps(temp0_152, data_143f51560)
                float temp0_155[0x4] = _mm_add_ps(temp0_147, temp0_153)
                float temp0_156[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                float temp0_157[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                float temp0_158[0x4] = _mm_mul_ps(temp0_142, temp0_157)
                zmm6 = _mm_add_ps(temp0_155, temp0_154)
                float temp0_162[0x4] = _mm_sub_ps(temp0_158, 
                    _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_156))
                float temp0_163[0x4] = _mm_add_ps(temp0_162, temp0_162)
                float temp0_164[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xd2)
                float temp0_165[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xc9)
                float temp0_166[0x4] = _mm_mul_ps(temp0_164, temp0_157)
                float temp0_167[0x4] = _mm_mul_ps(temp0_165, temp0_156)
                float temp0_168[0x4] = _mm_mul_ps(temp0_163, temp0_143)
                zmm5 = _mm_add_ps(
                    _mm_add_ps(_mm_sub_ps(temp0_166, temp0_167), _mm_add_ps(temp0_168, temp0_137)), 
                    zmm14)
            else
                float temp0_8[0x4] = _mm_add_ps(zmm4, zmm4)
                float zmm9[0x4] = data_143f515b0
                float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 4)
                _mm_mul_ps(zmm15, zmm7)
                float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x29), temp0_9)
                float temp0_13[0x4] = _mm_mul_ps(temp0_8, zmm4)
                float temp0_14[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x12), temp0_14)
                float temp0_17[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                float temp0_20[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0x1a), 
                    _mm_shuffle_ps(temp0_13, temp0_13, 1))
                float temp0_21[0x4] = _mm_add_ps(temp0_16, temp0_12)
                float temp0_22[0x4] = _mm_sub_ps(temp0_12, temp0_16)
                float temp0_23[0x4] = _mm_shuffle_ps(zmm12, zmm12, 4)
                float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm7)
                float temp0_25[0x4] = _mm_mul_ps(temp0_17, temp0_22)
                arg5 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm9, temp0_20), zmm7), 
                    data_143f515c0)
                float temp0_29[0x4] = _mm_shuffle_ps(temp0_25, arg5, 0x32)
                float temp0_31[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, arg5, 0), temp0_29, 0x82)
                float temp0_32[0x4] = _mm_shuffle_ps(temp0_24, arg5, 0x31)
                float temp0_34[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, arg5, 0x10), temp0_32, 0x88)
                float temp0_36[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, temp0_25, 0x12), arg5, 0xe8)
                float temp0_37[0x4] = _mm_add_ps(zmm12, zmm12)
                zmm9[0].q = zmm14 u>> 0x40
                float temp0_38[0x4] = _mm_shuffle_ps(zmm14, zmm9, 0xc4)
                float temp0_39[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                float temp0_40[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x29)
                float temp0_41[0x4] = _mm_mul_ps(temp0_37, zmm12)
                float temp0_42[0x4] = _mm_mul_ps(temp0_23, temp0_40)
                float temp0_43[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x12)
                float temp0_44[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                float temp0_45[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x1a)
                float temp0_46[0x4] = _mm_mul_ps(temp0_44, temp0_43)
                float temp0_48[0x4] = _mm_add_ps(temp0_45, _mm_shuffle_ps(temp0_41, temp0_41, 1))
                float temp0_49[0x4] = _mm_add_ps(temp0_46, temp0_42)
                float temp0_50[0x4] = _mm_sub_ps(temp0_42, temp0_46)
                float temp0_51[0x4] = _mm_sub_ps(zmm9, temp0_48)
                float temp0_52[0x4] = _mm_mul_ps(temp0_49, zmm15)
                float temp0_53[0x4] = _mm_mul_ps(temp0_39, temp0_50)
                arg5 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_51, zmm15), data_143f515c0)
                float temp0_58[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, arg5, 0), 
                    _mm_shuffle_ps(temp0_53, arg5, 0x32), 0x82)
                float temp0_59[0x4] = _mm_shuffle_ps(temp0_53, arg5, 0x10)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_52, arg5, 0x31)
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
                float temp0_62[0x4] = _mm_shuffle_ps(temp0_59, temp0_60, 0x88)
                float temp0_63[0x4] = _mm_mul_ps(temp0_61, temp0_34)
                zmm9[0].q = temp0_6 u>> 0x40
                float temp0_64[0x4] = _mm_shuffle_ps(temp0_6, zmm9, 0xc4)
                float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_31)
                float temp0_68[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, temp0_53, 0x12), arg5, 0xe8)
                float temp0_69[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)
                float temp0_70[0x4] = _mm_add_ps(temp0_63, temp0_66)
                float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xff), temp0_38)
                float temp0_73[0x4] = _mm_mul_ps(temp0_69, temp0_36)
                float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0), temp0_31)
                float temp0_76[0x4] = _mm_add_ps(temp0_70, temp0_73)
                float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_36)
                float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_72)
                float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x55), temp0_34)
                float temp0_82[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
                float var_108[0x4] = temp0_79
                float temp0_83[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
                float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_75)
                float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_34)
                float temp0_86[0x4] = _mm_mul_ps(temp0_82, temp0_38)
                float temp0_87[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0)
                float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_78)
                float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_31)
                float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xaa), temp0_36)
                float temp0_92[0x4] = _mm_add_ps(temp0_88, temp0_86)
                float temp0_93[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xff)
                float temp0_94[0x4] = _mm_add_ps(temp0_85, temp0_89)
                float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_38)
                float temp0_96[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
                int96_t var_f8_1 = temp0_92[0].12
                float temp0_97[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                float temp0_98[0x4] = _mm_add_ps(temp0_94, temp0_91)
                float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_34)
                float temp0_101[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_36)
                float temp0_102[0x4] = _mm_mul_ps(temp0_96, temp0_31)
                float temp0_103[0x4] = _mm_add_ps(temp0_98, temp0_95)
                float temp0_105[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_38)
                float temp0_106[0x4] = _mm_add_ps(temp0_99, temp0_102)
                int96_t var_e8_1 = temp0_103[0].12
                int96_t var_d8_1 = _mm_add_ps(_mm_add_ps(temp0_106, temp0_101), temp0_105)[0].12
                int128_t zmm9_1
                zmm9_1, zmm13 = sub_1407740e0(&var_108, 0x322bcc77)
                float zmm2_1[0x4] = var_108[0]
                float zmm1 = var_108[1]
                float zmm4_1[0x4] =
                    _mm_and_ps(_mm_cmpeq_ps(data_143f519a0, zmm13, 2), data_143f51990 ^ zmm9_1)
                    ^ data_143f51990
                zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                uint32_t zmm0_1[0x4] = var_108[2]
                zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                zmm1 = zmm1 * zmm4_1[0]
                var_108[0] = zmm2_1[0]
                float temp0_111[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                var_108[2] = zmm0_1[0]
                zmm0_1 = var_f8_1:8.d
                zmm0_1[0] = zmm0_1[0] f* temp0_111[0]
                var_108[1] = zmm1
                zmm1 = var_f8_1:4.d * temp0_111[0]
                float zmm3_1 = var_f8_1.d * temp0_111[0]
                zmm2_1 = var_e8_1.d
                float temp0_112[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                var_f8_1:8.d = zmm0_1[0]
                zmm0_1 = var_e8_1:8.d
                var_f8_1:4.d = zmm1
                zmm0_1[0] = zmm0_1[0] f* temp0_112[0]
                zmm2_1[0] = zmm2_1[0] * temp0_112[0]
                zmm1 = var_e8_1:4.d * temp0_112[0]
                var_e8_1:8.d = zmm0_1[0]
                var_f8_1.d = zmm3_1
                var_e8_1.d = zmm2_1[0]
                var_e8_1:4.d = zmm1
                uint32_t var_118[0x4]
                sub_14077e4a0(&var_118, &var_108)
                zmm5 = var_118
                zmm6 = data_143f515a0
                r10 = *arg1
                float temp0_113[0x4] = _mm_mul_ps(zmm5, zmm5)
                float temp0_115[0x4] =
                    _mm_add_ps(temp0_113, _mm_shuffle_ps(temp0_113, temp0_113, 0x4e))
                float temp0_117[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_115, temp0_115, 0x39), temp0_115)
                float temp0_118[0x4] = _mm_rsqrt_ps(temp0_117)
                float temp0_119[0x4] = _mm_mul_ps(temp0_117, zmm6)
                float temp0_124[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_118, temp0_118), temp0_119)), 
                        temp0_118), 
                    temp0_118)
                float temp0_127[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_124, temp0_124), temp0_119))
                float temp0_129[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_117, 2)
                float temp0_131[0x4] = _mm_add_ps(_mm_mul_ps(temp0_127, temp0_124), temp0_124)
                float temp0_132[0x4] = _mm_unpacklo_ps(var_d8_1:4.d, 0)
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_131, zmm5) ^ data_143f51590, temp0_129)
                    ^ data_143f51590
                zmm5 =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(var_d8_1.d, var_d8_1:8.d[0].q), temp0_132[0].q)
            
            *(rdi_1 + r10) = zmm6
            *(rdi_1 + r10 + 0x20) = zmm13
            *(rdi_1 + r10 + 0x10) = zmm5
            result = *arg1
            result[r14 * 8 + 6].b = 1

return result
