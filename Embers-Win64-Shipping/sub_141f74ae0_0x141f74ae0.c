// 函数: sub_141f74ae0
// 地址: 0x141f74ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t result
result.b = (arg2 u>> 0x20).d != 0

if ((sub_140b5b8a0(arg2.d, 0).b == 0 | result.b) != 0)
    void* rcx_1 = *(arg1 + 0x430)
    
    if (rcx_1 != 0)
        result = sub_14078ee20(rcx_1 + 0x188, &arg_10)
        
        if (result != 0xffffffff)
            float var_138[0x4]
            sub_141f5e2b0(arg1, &var_138, result)
            float zmm2_1[0x4] = *(arg4 + 4)
            float zmm4_1[0x4] = data_143f3b910
            float temp0_1[0x4] = _mm_unpacklo_ps(*arg4, (*(arg4 + 8))[0].q)
            float zmm0_1[0x4] = data_143f3b950
            float temp0_4[0x4] = __mulps_xmmps_memps(
                _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2_1, 0)[0].q), data_143f3b960)
            float temp0_9[0x4] = _mm_sub_ps(temp0_4, 
                __mulps_xmmps_memps(_mm_cvtepi32_ps(_mm_cvtps_epi32(_mm_mul_ps(zmm0_1, temp0_4))), 
                    data_143f3b940))
            float zmm1_1[0x4] = data_142dc1870
            zmm0_1 = __andps_xmmxud_memxud(temp0_9, data_143f3b860)
            zmm2_1 =
                __orps_xmmxud_memxud(__andps_xmmxud_memxud(temp0_9, data_143f3b930), data_143f3b920)
            float temp0_13[0x4] = _mm_cmpeq_ps(zmm4_1, zmm0_1, 1)
            zmm0_1 = data_142dc1850
            float temp0_14[0x4] = _mm_sub_ps(zmm2_1, temp0_9)
            float temp0_15[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
            zmm2_1 = _mm_and_ps(temp0_14 ^ temp0_9, temp0_13) ^ temp0_9
            float temp0_18[0x4] = _mm_mul_ps(zmm2_1, zmm2_1)
            float temp0_20[0x4] = _mm_add_ps(_mm_mul_ps(temp0_15, temp0_18), temp0_16)
            float temp0_21[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
            float temp0_23[0x4] = _mm_add_ps(_mm_mul_ps(temp0_20, temp0_18), temp0_21)
            float temp0_24[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
            float temp0_26[0x4] = _mm_add_ps(_mm_mul_ps(temp0_23, temp0_18), temp0_24)
            float temp0_27[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            float temp0_28[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)
            float temp0_30[0x4] = _mm_add_ps(_mm_mul_ps(temp0_26, temp0_18), temp0_27)
            zmm0_1 = data_142dc1860
            float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55), temp0_18)
            float temp0_33[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
            float temp0_34[0x4] = _mm_mul_ps(temp0_30, temp0_18)
            float temp0_35[0x4] = _mm_add_ps(temp0_32, temp0_33)
            float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_28)
            zmm1_1 = data_142dc1880
            float temp0_37[0x4] = _mm_mul_ps(temp0_35, temp0_18)
            float temp0_38[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
            float temp0_39[0x4] = _mm_mul_ps(temp0_36, zmm2_1)
            float temp0_40[0x4] = _mm_add_ps(temp0_37, temp0_38)
            float temp0_41[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
            float var_1a8[0x4] = temp0_39
            float temp0_44[0x4] =
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_40, temp0_18), temp0_41), temp0_18)
            int128_t zmm14 = (*arg3)[2]
            float temp0_46[0x4] = _mm_add_ps(temp0_44, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55))
            float temp0_47[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)
            int32_t var_18c_1 = 0
            int32_t var_17c_1 = 0
            int32_t var_16c_1 = 0
            float temp0_48[0x4] = _mm_mul_ps(temp0_46, temp0_18)
            float temp0_49[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)
            float temp0_50[0x4] = _mm_add_ps(temp0_48, temp0_47)
            zmm1_1 = _mm_and_ps(data_143f3b8e0 ^ data_143f3b870, temp0_13) ^ data_143f3b870
            float temp0_52[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
            float temp0_53[0x4] = _mm_mul_ps(temp0_50, zmm1_1)
            temp0_49[0] = temp0_49[0] * temp0_39[0]
            float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xaa)
            float zmm9_1 = temp0_54[0]
            temp0_54[0] = temp0_54[0] * temp0_53[0]
            zmm9_1 = zmm9_1 * temp0_49[0]
            temp0_55[0] = temp0_55[0] * temp0_52[0]
            temp0_55[0] = temp0_55[0] * temp0_39[0]
            float zmm8_1 = temp0_55[0] * temp0_54[0]
            zmm9_1 = zmm9_1 - temp0_55[0]
            temp0_49[0] = temp0_49[0] * temp0_52[0]
            temp0_53[0] = temp0_53[0] * temp0_52[0]
            temp0_52[0] = temp0_52[0] * temp0_49[0]
            temp0_53[0] = temp0_53[0] * temp0_49[0]
            zmm8_1 = zmm8_1 + temp0_52[0]
            temp0_52[0] = temp0_52[0] * temp0_55[0]
            temp0_55[0] = temp0_55[0] * temp0_53[0]
            float zmm7_1[0x4] = temp0_53 ^ data_142d3f780
            temp0_54[0] = temp0_54[0] * temp0_55[0]
            temp0_54[0] = temp0_54[0] * temp0_49[0]
            temp0_49[0] = temp0_49[0] + temp0_54[0]
            zmm0_1 = *arg3
            float var_198[0x4]
            var_198[0] = temp0_54[0]
            temp0_54[0] = temp0_54[0] - temp0_52[0]
            float temp0_56[0x4] = _mm_shuffle_ps(var_198, var_198, 0xe1)
            temp0_56[0] = temp0_53[0]
            float var_148_1[0x4] = zmm0_1
            zmm0_1 = var_1a8
            float zmm6[0x4] = var_138
            float zmm11_1[0x4] = temp0_49 ^ data_142d3f780
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xc6)
            temp0_57[0] = zmm0_1[0]
            float zmm13[0x4] = (*arg3)[1]
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc9)
            float var_128[0x4]
            float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), var_128)
            float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), zmm6)
            float var_118[0x4]
            float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), var_118)
            float var_108[0x4]
            float temp0_69[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_60, temp0_62), temp0_64), 
                _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xff), var_108))
            float var_188[0x4]
            var_188[0] = zmm9_1
            float temp0_70[0x4] = _mm_shuffle_ps(var_188, var_188, 0xe1)
            temp0_70[0] = zmm8_1
            float temp0_71[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xc6)
            temp0_71[0] = zmm7_1[0]
            float var_f8[0x4] = temp0_69
            float temp0_72[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0xc9)
            float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
            float temp0_74[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0)
            float temp0_75[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xff), var_108)
            float temp0_78[0x4] = _mm_mul_ps(temp0_73, var_128)
            float temp0_79[0x4] = _mm_mul_ps(temp0_74, zmm6)
            float temp0_80[0x4] = _mm_mul_ps(temp0_75, var_118)
            float temp0_83[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_78, temp0_79), temp0_80), temp0_77)
            float var_178[0x4]
            var_178[0] = zmm11_1[0]
            float temp0_84[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
            temp0_84[0] = temp0_54[0]
            float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xc6)
            temp0_85[0] = temp0_55[0]
            float var_e8_1[0x4] = temp0_83
            float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xc9)
            float temp0_87[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0x55)
            float temp0_88[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xaa)
            float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xff), var_108)
            float temp0_92[0x4] = _mm_mul_ps(temp0_87, var_128)
            float temp0_93[0x4] = _mm_mul_ps(temp0_88, zmm6)
            float temp0_94[0x4] = _mm_mul_ps(temp0_89, var_118)
            float temp0_97[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_92, temp0_93), temp0_94), temp0_91)
            float temp0_98[0x4] = _mm_shuffle_ps(var_148_1, var_148_1, 0xe1)
            temp0_98[0] = zmm13[0]
            float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xc6)
            temp0_99[0] = zmm14.d
            float var_d8_1[0x4] = temp0_97
            float temp0_100[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0x27)
            temp0_100[0] = 0x3f800000
            float temp0_101[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0x39)
            float temp0_102[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0)
            float temp0_103[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0x55)
            float temp0_104[0x4] = _mm_mul_ps(temp0_102, zmm6)
            float temp0_105[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xaa)
            float temp0_106[0x4] = _mm_mul_ps(temp0_103, var_128)
            float temp0_107[0x4] = _mm_mul_ps(temp0_105, var_118)
            float temp0_108[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xff)
            float temp0_109[0x4] = _mm_add_ps(temp0_106, temp0_104)
            float temp0_110[0x4] = _mm_mul_ps(temp0_108, var_108)
            float temp0_112[0x4] = _mm_add_ps(_mm_add_ps(temp0_109, temp0_107), temp0_110)
            float var_c8_1[0x4] = temp0_112
            var_1a8[2] = _mm_shuffle_ps(temp0_112, temp0_112, 0xaa)[0]
            float temp0_115[0x4] =
                _mm_unpacklo_ps(temp0_112, _mm_shuffle_ps(temp0_112, temp0_112, 0x55)[0].q)
            float rax = var_1a8[2]
            *arg5 = temp0_115.q
            arg5[1].d = rax
            float* rax_1 = sub_140adf440(&var_f8, &var_1a8)
            *arg6 = *rax_1
            result = rax_1[2]
            arg6[1].d = result

return result
