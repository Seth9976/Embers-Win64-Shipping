// 函数: sub_140629530
// 地址: 0x140629530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10
int128_t var_68 = zmm10
float zmm11[0x4]
float var_78[0x4] = zmm11
void* const* result

if (arg1 == 0)
    result.b = 0
else
    int64_t* rbx_1 = *(arg1 + 0x298)
    
    if (rbx_1 == 0)
        result.b = 0
    else
        float zmm3[0x4] = *(arg1 + 0x1c0)
        float temp0_1[0x4] = _mm_add_ps(zmm3, zmm3)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_4[0x4] = _mm_mul_ps(zmm3, temp0_1)
        float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
        float temp0_8[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(temp0_1, temp0_1, 0x12))
        float zmm1[0x4] = *(arg1 + 0x1e0)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        float temp0_12[0x4] = _mm_add_ps(temp0_9, _mm_shuffle_ps(temp0_4, temp0_4, 1))
        float zmm4[0x4] = data_143cdbcd0
        float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_6)
        float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_8)
        float temp0_15[0x4] = _mm_sub_ps(zmm4, temp0_12)
        float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm1)
        float temp0_17[0x4] = _mm_mul_ps(temp0_10, temp0_14)
        zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_15, zmm1), data_143cdbd50)
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_17, zmm3, 0x32)
        float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0), temp0_20, 0x82)
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_16, zmm3, 0x31)
        float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm3, 0x10), temp0_23, 0x88)
        float zmm0[0x4] = *(arg1 + 0x1d0)
        zmm4[0].q = zmm0 u>> 0x40
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_16, temp0_17, 0x12)
        _mm_shuffle_ps(zmm0, zmm4, 0xc4)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, zmm3, 0xe8)
        float var_148[0x4] = temp0_22
        float var_128_1[0x4] = temp0_28
        uint32_t var_f8[0x4]
        sub_140631b10(&var_148, &var_f8)
        float zmm2_1[0x4] = var_f8
        float zmm4_1[0x4] = data_142d4cc30
        float zmm3_1[0x4] = data_142d4cc00
        float zmm5_1[0x4] = data_142d4cc20
        float zmm6_1[0x4] = data_142d3f660
        float temp0_29[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
        float temp0_30[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
        float temp0_31[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
        float temp0_32[0x4] = _mm_mul_ps(temp0_29, zmm3_1)
        float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm6_1)
        float temp0_35[0x4] = _mm_mul_ps(temp0_30, zmm4_1)
        float temp0_36[0x4] = _mm_mul_ps(temp0_31, zmm5_1)
        float temp0_39[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_32, temp0_35), temp0_36), temp0_34)
        float zmm8_1[0x4] = *(arg1 + 0x28c)
        int64_t rax = *rbx_1
        zmm8_1[0] = zmm8_1[0] * 0.00872664712f
        float var_e8[0x4]
        float temp0_40[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0)
        float temp0_41[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xaa)
        float temp0_42[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0x55)
        float temp0_43[0x4] = _mm_mul_ps(temp0_40, zmm4_1)
        float temp0_44[0x4] = _mm_mul_ps(temp0_41, zmm5_1)
        float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_e8, var_e8, 0xff), zmm6_1)
        float temp0_50[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_42, zmm3_1), temp0_43), temp0_44), temp0_46)
        float var_d8[0x4]
        float temp0_51[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0x55)
        float temp0_52[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0)
        float temp0_53[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xaa)
        float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm4_1)
        float temp0_55[0x4] = _mm_mul_ps(temp0_53, zmm5_1)
        float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_d8, var_d8, 0xff), zmm6_1)
        float temp0_61[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_51, zmm3_1), temp0_54), temp0_55), temp0_57)
        float var_c8[0x4]
        float temp0_62[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0x55)
        float temp0_63[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0)
        float temp0_64[0x4] = _mm_mul_ps(temp0_62, zmm3_1)
        float temp0_65[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xaa)
        float temp0_66[0x4] = _mm_mul_ps(temp0_63, zmm4_1)
        float temp0_67[0x4] = _mm_mul_ps(temp0_65, zmm5_1)
        float temp0_68[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xff)
        float temp0_69[0x4] = _mm_add_ps(temp0_64, temp0_66)
        float temp0_70[0x4] = _mm_mul_ps(temp0_68, zmm6_1)
        float temp0_72[0x4] = _mm_add_ps(_mm_add_ps(temp0_69, temp0_67), temp0_70)
        (*(rax + 0x340))(rbx_1)
        int64_t* rcx_2 = *(arg1 + 0x298)
        int32_t rbx_2 = int.d(temp0_66[0])
        (*(*rcx_2 + 0x338))(rcx_2)
        float zmm1_1[0x4] = zx.o(0)
        int32_t rax_2 = int.d(temp0_66[0])
        float zmm0_1[0x4] = zx.o(0)
        zmm0_1[0] = float.s(rbx_2)
        zmm1_1[0] = float.s(rax_2)
        float arg_20 = zmm0_1[0]
        float arg_8 = zmm1_1[0]
        float zmm7_1[0x4]
        float zmm12_1
        
        if (rax_2 s<= rbx_2)
            zmm7_1 = 0x3f800000
            zmm12_1 = zmm0_1[0] / zmm1_1[0]
        else
            zmm7_1 = zmm1_1
            zmm12_1 = 1f
            zmm7_1[0] = zmm7_1[0] / zmm0_1[0]
        
        zmm6_1 = data_14399fa0c
        float zmm0_2[0x4]
        zmm0_2, result = tanf(zmm8_1[0])
        float zmm9_1[0x4] = data_142d3f660
        zmm1_1 = 0x3f800000
        zmm2_1 = (*arg2)[1]
        zmm3_1 = (*arg2)[2]
        zmm1_1[0] = 1f / zmm0_2[0]
        var_148[3].q = 0
        int32_t var_14c_1 = 0x3f800000
        temp0_25[2].q = 0
        var_148[1].q = 0
        float temp0_73[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
        float temp0_74[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
        zmm7_1[0] = zmm7_1[0] * zmm1_1[0]
        zmm12_1 = zmm12_1 * zmm1_1[0]
        float var_158[0x4]
        var_158[0] = (*arg2)[0]
        float temp0_75[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xe1)
        float temp0_76[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
        temp0_75[0] = zmm7_1[0]
        zmm7_1 = var_148
        temp0_76[0] = zmm2_1[0]
        zmm7_1[0] = zmm12_1
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xe1)
        float temp0_78[0x4] = _mm_mul_ps(temp0_74, zmm7_1)
        float temp0_79[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
        float temp0_80[0x4] = _mm_mul_ps(temp0_73, temp0_77)
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)
        float temp0_82[0x4] = _mm_mul_ps(temp0_79, temp0_77)
        float temp0_83[0x4] = _mm_add_ps(temp0_80, temp0_78)
        float temp0_84[0x4] = _mm_mul_ps(temp0_81, zmm9_1)
        float temp0_85[0x4] = _mm_shuffle_ps(0, 0, 0xd2)
        float temp0_86[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xaa)
        temp0_85[0] = zmm6_1[0]
        float temp0_87[0x4] = _mm_mul_ps(temp0_86, zmm9_1)
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xc9)
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xc6)
        temp0_89[0] = zmm3_1[0]
        float temp0_90[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
        float temp0_91[0x4] = _mm_add_ps(temp0_83, temp0_87)
        float temp0_92[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0xc9)
        float temp0_93[0x4] = _mm_mul_ps(temp0_90, temp0_88)
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0xaa)
        float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0x55), temp0_77)
        float var_158_1[0x4] = temp0_92
        float temp0_98[0x4] = _mm_mul_ps(_mm_add_ps(temp0_91, temp0_93), temp0_94)
        float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0), zmm7_1)
        float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xff), temp0_88)
        float temp0_103[0x4] = _mm_add_ps(temp0_82, temp0_100)
        float temp0_104[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0xff)
        float temp0_105[0x4] = _mm_add_ps(temp0_103, temp0_84)
        float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xaa), zmm9_1)
        float temp0_109[0x4] = _mm_mul_ps(_mm_add_ps(temp0_105, temp0_102), temp0_104)
        float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0), zmm7_1)
        float temp0_112[0x4] = _mm_add_ps(temp0_98, temp0_109)
        float temp0_114[0x4] = _mm_add_ps(_mm_add_ps(temp0_96, temp0_111), temp0_107)
        float temp0_115[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
        float temp0_116[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0x55)
        float temp0_117[0x4] = _mm_mul_ps(temp0_115, temp0_77)
        float temp0_119[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xaa), zmm9_1)
        float temp0_121[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xff), temp0_88)
        float temp0_122[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0)
        float temp0_124[0x4] = _mm_mul_ps(_mm_add_ps(temp0_114, temp0_121), temp0_116)
        float temp0_126[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0), zmm7_1)
        float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xff), temp0_88)
        float temp0_134[0x4] = _mm_add_ps(temp0_112, 
            _mm_add_ps(temp0_124, 
                _mm_mul_ps(
                    _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_117, temp0_126), temp0_119), temp0_128), 
                    temp0_122)))
        int64_t var_158_2 = temp0_134[0].q
        float temp0_135[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xff)
        
        if (temp0_135[0] <= 0f)
            result.b = 0
        else
            zmm2_1 = 0x3f800000
            bool cond:0_1 = data_1439c7a1c[0] <= 0f
            zmm2_1[0] = 1f / temp0_135[0]
            
            if (cond:0_1)
                zmm10.d = 1f f- var_158_2:4.d
            else
                zmm10 = var_158_2:4.d
            
            zmm1_1 = 0x3f000000
            result.b = 1
            zmm0_2 = var_158_2.d
            zmm0_2[0] = zmm0_2[0] * 0.5f
            zmm10.d = zmm10.d f* 0.5f
            zmm0_2[0] = zmm0_2[0] * zmm2_1[0]
            zmm10.d = zmm10.d f* zmm2_1[0]
            zmm0_2[0] = zmm0_2[0] + 0.5f
            zmm1_1[0] = 0.5f f- zmm10.d
            zmm0_2[0] = zmm0_2[0] * arg_8
            zmm1_1[0] = zmm1_1[0] * arg_20
            *arg3 = (_mm_unpacklo_ps(zmm0_2, zmm1_1[0].q)).q

return result
