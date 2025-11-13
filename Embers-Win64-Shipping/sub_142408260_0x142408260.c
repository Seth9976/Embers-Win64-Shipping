// 函数: sub_142408260
// 地址: 0x142408260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4] = 0x43b40000
float zmm0_1[0x4]
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
zmm0_1, zmm6, zmm7, zmm8, zmm9 = sub_140a454f0(*(arg1 + 0x68), 0x43b40000)
float zmm11[0x4] = zx.o(0)

if (not(zmm0_1[0] >= 0f))
    zmm0_1[0] = zmm0_1[0] + 360f

float var_1b8[0x4]
float var_198[0x4]
float zmm0_3[0x4]

if (zmm0_1[0] != 0f)
label_14240834a:
    float zmm14[0x4] = *(arg1 + 0x74)
    zmm14[0] = zmm14[0] f* *(arg1 + 0x38)
    float zmm15[0x4] = *(arg1 + 0x78)
    zmm15[0] = zmm15[0] f* *(arg1 + 0x3c)
    sub_14077e760(&var_198, arg1 + 0x68)
    float zmm2_1[0x4] = data_142d4cc00
    float zmm3_1[0x4] = data_142d4cc20
    float zmm4_1[0x4] = data_142d4cc30
    float zmm9_1[0x4] = var_198
    float zmm6_1[0x4] = zmm14 ^ data_142d3f780
    float zmm8_1[0x4] = zmm15 ^ data_142d3f780
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_4[0x4] = _mm_mul_ps(temp0_1, zmm9_1)
    int32_t var_e0_1 = 0
    float temp0_5[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
    float var_178[0x4]
    float temp0_6[0x4] = _mm_mul_ps(temp0_2, var_178)
    int32_t var_dc_1 = 0x3f800000
    float var_168[0x4]
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), var_168)
    int32_t var_120_1 = 0
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    float var_188[0x4]
    float temp0_10[0x4] = _mm_mul_ps(temp0_3, var_188)
    int32_t var_11c_1 = 0x3f800000
    float temp0_11[0x4] = _mm_mul_ps(temp0_5, var_188)
    float temp0_12[0x4] = _mm_mul_ps(temp0_9, var_188)
    float temp0_13[0x4] = _mm_add_ps(temp0_10, temp0_4)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), zmm9_1)
    float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_6)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
    float temp0_18[0x4] = _mm_add_ps(temp0_11, temp0_15)
    float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), var_168)
    float temp0_21[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
    float temp0_22[0x4] = _mm_add_ps(temp0_16, temp0_8)
    float temp0_23[0x4] = _mm_mul_ps(temp0_17, var_178)
    float var_e8[0x4]
    var_e8[0] = zmm6_1[0]
    float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm9_1)
    float temp0_25[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xe1)
    float temp0_26[0x4] = _mm_add_ps(temp0_18, temp0_23)
    temp0_25[0] = zmm8_1[0]
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xe1)
    float temp0_28[0x4] = _mm_add_ps(temp0_12, temp0_24)
    float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), var_178)
    float temp0_31[0x4] = _mm_add_ps(temp0_26, temp0_20)
    float temp0_32[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0)
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
    float temp0_35[0x4] = _mm_add_ps(temp0_28, temp0_30)
    float temp0_36[0x4] = _mm_mul_ps(temp0_34, var_188)
    float temp0_37[0x4] = _mm_mul_ps(temp0_32, var_168)
    float temp0_38[0x4] = _mm_mul_ps(temp0_33, zmm9_1)
    float temp0_39[0x4] = _mm_add_ps(temp0_35, temp0_37)
    float temp0_40[0x4] = _mm_add_ps(temp0_36, temp0_38)
    zmm4_1 = data_142d4cc20
    zmm6_1 = data_142d4cc30
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0)
    float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xaa), var_178)
    int32_t var_e0_2 = 0
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
    float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xff), var_168)
    int32_t var_dc_2 = 0x3f800000
    float zmm5_1[0x4] = data_142d4cc00
    float temp0_47[0x4] = _mm_add_ps(temp0_40, temp0_43)
    float temp0_48[0x4] = _mm_mul_ps(temp0_41, zmm5_1)
    float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xaa), zmm6_1)
    float temp0_51[0x4] = _mm_add_ps(temp0_47, temp0_46)
    float temp0_52[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xff)
    float var_128[0x4]
    var_128[0] = zmm14[0]
    float temp0_53[0x4] = _mm_mul_ps(temp0_44, zmm4_1)
    float temp0_54[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0x55)
    temp0_54[0] = zmm15[0]
    float temp0_57[0x4] = _mm_add_ps(temp0_53, temp0_48)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xe1)
    float temp0_59[0x4] = _mm_mul_ps(temp0_52, temp0_58)
    zmm15 = zmm4_1
    float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0), zmm5_1)
    float temp0_62[0x4] = _mm_add_ps(temp0_57, temp0_50)
    float temp0_63[0x4] = _mm_mul_ps(temp0_55, zmm4_1)
    float temp0_64[0x4] = _mm_mul_ps(temp0_56, zmm4_1)
    float temp0_65[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
    float temp0_66[0x4] = _mm_add_ps(temp0_63, temp0_61)
    float temp0_67[0x4] = _mm_mul_ps(temp0_65, zmm6_1)
    float temp0_68[0x4] = _mm_add_ps(temp0_62, temp0_59)
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xff), temp0_58)
    float temp0_71[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
    float temp0_72[0x4] = _mm_add_ps(temp0_66, temp0_67)
    float temp0_73[0x4] = _mm_mul_ps(temp0_71, zmm4_1)
    float temp0_74[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0)
    float temp0_75[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)
    float temp0_76[0x4] = _mm_mul_ps(temp0_74, zmm5_1)
    float temp0_77[0x4] = _mm_add_ps(temp0_72, temp0_70)
    zmm11 = *(arg1 + 8)
    float temp0_78[0x4] = _mm_mul_ps(temp0_75, zmm6_1)
    float temp0_79[0x4] = _mm_add_ps(temp0_73, temp0_76)
    float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xff), temp0_58)
    float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0), zmm5_1)
    zmm5_1 = zmm11 ^ data_142d3f780
    float temp0_84[0x4] = _mm_add_ps(temp0_79, temp0_78)
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xaa)
    float temp0_86[0x4] = _mm_add_ps(temp0_64, temp0_83)
    float temp0_87[0x4] = _mm_mul_ps(temp0_85, zmm6_1)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xff)
    float temp0_89[0x4] = _mm_add_ps(temp0_84, temp0_81)
    float zmm12[0x4] = *(arg1 + 0xc)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_58)
    float temp0_91[0x4] = _mm_add_ps(temp0_86, temp0_87)
    var_1b8 = temp0_68
    float temp0_92[0x4] = _mm_add_ps(temp0_91, temp0_90)
    zmm2_1 = data_142d4cc00
    zmm3_1 = zmm4_1
    zmm4_1 = data_142d4cc30
    zmm6_1 = zmm12 ^ data_142d3f780
    float temp0_93[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_94[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_68)
    int32_t var_120_2 = 0
    float temp0_96[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_97[0x4] = _mm_mul_ps(temp0_94, temp0_89)
    int32_t var_11c_2 = 0x3f800000
    float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), temp0_92)
    float temp0_100[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
    float temp0_101[0x4] = _mm_mul_ps(temp0_96, temp0_77)
    float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_77)
    float temp0_103[0x4] = _mm_add_ps(temp0_101, temp0_95)
    float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), temp0_68)
    float temp0_106[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    float temp0_107[0x4] = _mm_add_ps(temp0_103, temp0_97)
    float temp0_108[0x4] = _mm_mul_ps(temp0_106, temp0_77)
    float temp0_109[0x4] = _mm_add_ps(temp0_102, temp0_105)
    float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), temp0_89)
    float temp0_112[0x4] = _mm_add_ps(temp0_107, temp0_99)
    float temp0_114[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), var_1b8)
    float temp0_115[0x4] = _mm_add_ps(temp0_109, temp0_111)
    temp0_58[0] = zmm5_1[0]
    float temp0_116[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
    float temp0_117[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xe1)
    temp0_117[0] = zmm6_1[0]
    float temp0_118[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    zmm6_1 = data_142d4cc00
    float temp0_119[0x4] = _mm_add_ps(temp0_108, temp0_114)
    float temp0_120[0x4] = _mm_shuffle_ps(temp0_117, temp0_117, 0xe1)
    float temp0_121[0x4] = _mm_mul_ps(temp0_118, temp0_89)
    float temp0_122[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0x55)
    float temp0_124[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_120, temp0_120, 0), var_1b8)
    float temp0_125[0x4] = _mm_add_ps(temp0_119, temp0_121)
    float var_128_2[0x4] = temp0_120
    float temp0_126[0x4] = _mm_mul_ps(temp0_122, temp0_77)
    float temp0_127[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xaa)
    float temp0_129[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_120, temp0_120, 0xff), temp0_92)
    float temp0_130[0x4] = _mm_add_ps(temp0_126, temp0_124)
    float temp0_131[0x4] = _mm_mul_ps(temp0_127, temp0_89)
    float temp0_132[0x4] = _mm_mul_ps(temp0_116, temp0_92)
    float temp0_133[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0)
    float temp0_134[0x4] = _mm_add_ps(temp0_130, temp0_131)
    float temp0_135[0x4] = _mm_mul_ps(temp0_133, zmm6_1)
    float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), temp0_92)
    float temp0_138[0x4] = _mm_add_ps(temp0_115, temp0_132)
    zmm10 = data_142d4cc30
    float temp0_139[0x4] = _mm_add_ps(temp0_134, temp0_129)
    float temp0_140[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0xaa)
    float temp0_142[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_112, temp0_112, 0x55), zmm15)
    float temp0_143[0x4] = _mm_add_ps(temp0_125, temp0_137)
    float temp0_144[0x4] = _mm_mul_ps(temp0_140, zmm10)
    float temp0_146[0x4] = _mm_add_ps(_mm_add_ps(temp0_142, temp0_135), temp0_144)
    temp0_27[0] = zmm11[0]
    float temp0_147[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0xff)
    float temp0_148[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xe1)
    float temp0_149[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0)
    float temp0_150[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xaa)
    float temp0_151[0x4] = _mm_mul_ps(temp0_149, zmm6_1)
    temp0_148[0] = zmm12[0]
    float temp0_152[0x4] = _mm_mul_ps(temp0_150, zmm10)
    float temp0_153[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0x55)
    float temp0_154[0x4] = _mm_shuffle_ps(temp0_148, temp0_148, 0xe1)
    float temp0_155[0x4] = _mm_mul_ps(temp0_153, zmm15)
    float var_158[0x4] = _mm_add_ps(temp0_146, _mm_mul_ps(temp0_147, temp0_154))
    float temp0_159[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0x55), zmm15)
    float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xff), temp0_154)
    float temp0_162[0x4] = _mm_add_ps(temp0_159, temp0_151)
    float temp0_164[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0), zmm6_1)
    float temp0_165[0x4] = _mm_add_ps(temp0_162, temp0_152)
    float temp0_166[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0xaa)
    float temp0_167[0x4] = _mm_add_ps(temp0_155, temp0_164)
    float temp0_168[0x4] = _mm_mul_ps(temp0_166, zmm10)
    float temp0_169[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0xff)
    float temp0_170[0x4] = _mm_add_ps(temp0_165, temp0_161)
    float temp0_172[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0), zmm6_1)
    float temp0_173[0x4] = _mm_add_ps(temp0_167, temp0_168)
    float temp0_174[0x4] = _mm_mul_ps(temp0_169, temp0_154)
    float var_148_1[0x4] = temp0_170
    float temp0_175[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xaa)
    float temp0_177[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0x55), zmm15)
    float temp0_178[0x4] = _mm_add_ps(temp0_173, temp0_174)
    float temp0_179[0x4] = _mm_mul_ps(temp0_175, zmm10)
    float temp0_180[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xff)
    float temp0_181[0x4] = _mm_add_ps(temp0_177, temp0_172)
    float temp0_182[0x4] = _mm_mul_ps(temp0_180, temp0_154)
    float var_138_1[0x4] = temp0_178
    float var_128_3[0x4] = _mm_add_ps(_mm_add_ps(temp0_181, temp0_179), temp0_182)
    sub_14241d720(arg2, &var_158)
    zmm10 = 0x43b40000
    zmm11 = zx.o(0)
else
    float zmm0_2[0x4] = sub_140a454f0(*(arg1 + 0x6c), 0x43b40000)
    
    if (not(zmm0_2[0] >= 0f))
        zmm0_2[0] = zmm0_2[0] + 360f
    
    if (zmm0_2[0] != 0f)
        goto label_14240834a
    
    zmm0_3 = sub_140a454f0(*(arg1 + 0x70), 0x43b40000)
    
    if (not(zmm0_3[0] >= 0f))
        zmm0_3[0] = zmm0_3[0] + 360f
    
    if (not(zmm0_3[0] == 0f))
        goto label_14240834a

int64_t rcx_2 = *(arg1 + 0x58)
int32_t arg_8

if (rcx_2 == 0)
    void* rax_12 = sub_142411e90(arg2, *(*(arg2 + 0x18) + (sx.q(arg2[8]) << 2) - 4))
    void* rsi_4 = sx.q(arg2[0xc]) * 0x50 + *(arg2 + 0x28)
    void*** rdi_2
    
    if (*(rax_12 + 0x10) s<= 0)
    label_142408ba3:
        void*** rax_15 = j_sub_140a82f30(0x20)
        
        if (rax_15 == 0)
            rdi_2 = nullptr
        else
            rdi_2 =
                sub_1423faea0(rax_15, (arg2[0x24]).b, *(arg1 + 0x60), rsi_4 - 0x50, *(arg1 + 0x18))
        
        int64_t rsi_5 = sx.q(*(rax_12 + 0x10))
        int32_t rax_17 = (rsi_5 + 1).d
        *(rax_12 + 0x10) = rax_17
        
        if (rax_17 s> *(rax_12 + 0x14))
            sub_1405a4d70(rax_12 + 8)
        
        *(*(rax_12 + 8) + (rsi_5 << 3)) = rdi_2
    else
        int64_t* rcx_16 = *(*(rax_12 + 8) + (sx.q(*(rax_12 + 0x10)) << 3) - 8)
        int64_t rdx_10 = *rcx_16
        void*** rax_13 = (*(rdx_10 + 0x20))(rcx_16, rdx_10)
        rdi_2 = rax_13
        
        if (rax_13 == 0)
            goto label_142408ba3
        
        int64_t* rax_14 = rax_13[1]
        
        if (*rax_14 != *(arg1 + 0x60) || rax_14[0xa].d != *(rsi_4 - 0x10))
            goto label_142408ba3
    
    void* rax_19 = *(arg2 + 0x68)
    int32_t rbx_3
    
    if (rax_19 == 0)
        rbx_3 = -1
    else
        rbx_3 = *(rax_19 + 0x18)
    
    char* rax_20
    int32_t r8_10
    int32_t r9_9
    rax_20, r8_10, r9_9 = sub_140ae16d0(arg1 + 0x28, &arg_8, 1)
    int32_t zmm2_3 = *(arg1 + 0x48)
    float zmm3 = *(arg1 + 0x44)
    int128_t zmm1_9
    zmm1_9.d = (*(arg1 + 0x50)).d f- zmm2_3
    int32_t var_1c8_1 = *rax_20
    int32_t var_1d0_1 = rbx_3
    char var_1e8
    var_1e8.d = zmm2_3
    *(arg1 + 0xc)
    *(arg1 + 0x38)
    sub_1424021d0(rdi_2[1], *(arg1 + 8), r8_10, r9_9, *(arg1 + 0x3c), zmm3, var_1e8, 
        *(arg1 + 0x4c) - zmm3, zmm1_9.d)
else
    zmm0_3 = *(arg1 + 0x28)
    void* r8_1 = *(arg1 + 0x20)
    var_198[0] &= 0xfffffffe
    float var_1a8[0x4] = zmm0_3
    char var_1e8_1 = 1
    float temp0_185[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xff)
    temp0_185[0] = temp0_185[0] f* *arg2
    int32_t rax = *(arg1 + 0x14)
    var_1a8[3] = temp0_185[0]
    __builtin_memset(&var_198[1], 0, 0x20)
    void* rax_1
    rax_1, zmm10 = sub_14240fbe0(arg2, 1, r8_1, rcx_2, rax, &var_198, 1)
    void* rax_2 = *(arg2 + 0x68)
    int32_t rbx
    
    if (rax_2 == 0)
        rbx = -1
    else
        rbx = *(rax_2 + 0x18)
    
    float zmm2_2 = *(arg1 + 0x40)
    float zmm9_2 = *(arg1 + 8)
    float zmm8_2 = *(arg1 + 0xc)
    int32_t zmm0_5 = *(arg1 + 0x44)
    float zmm7_2 = zmm9_2
    zmm9_2 = zmm9_2 f+ *(arg1 + 0x38)
    int32_t zmm1_4 = *(arg1 + 0x48)
    float zmm6_2 = zmm8_2
    zmm8_2 = zmm8_2 f+ *(arg1 + 0x3c)
    zmm7_2 = zmm7_2 * zmm2_2
    var_1b8[2] = 0
    zmm6_2 = zmm6_2 * zmm2_2
    var_1b8[0] = zmm7_2
    zmm9_2 = zmm9_2 * zmm2_2
    var_1b8[1] = zmm6_2
    zmm8_2 = zmm8_2 * zmm2_2
    arg_8 = zmm0_5
    int32_t arg_c = zmm1_4
    var_1b8[3] = zmm2_2
    int32_t rax_3 = sub_141e93fc0(rax_1, &var_1b8, &arg_8, &var_1a8, rbx)
    int32_t zmm1_5 = *(arg1 + 0x48)
    arg_8 = *(arg1 + 0x4c)
    var_1b8[3] = *(arg1 + 0x40)
    arg_c = zmm1_5
    var_1b8[0] = zmm9_2
    var_1b8[1] = zmm6_2
    var_1b8[2] = 0
    int32_t rax_4 = sub_141e93fc0(rax_1, &var_1b8, &arg_8, &var_1a8, rbx)
    int32_t zmm1_6 = *(arg1 + 0x50)
    arg_8 = *(arg1 + 0x44)
    var_1b8[3] = *(arg1 + 0x40)
    arg_c = zmm1_6
    var_1b8[0] = zmm7_2
    var_1b8[1] = zmm8_2
    var_1b8[2] = 0
    int32_t rax_5 = sub_141e93fc0(rax_1, &var_1b8, &arg_8, &var_1a8, rbx)
    int32_t zmm1_7 = *(arg1 + 0x50)
    arg_8 = *(arg1 + 0x4c)
    var_1b8[3] = *(arg1 + 0x40)
    arg_c = zmm1_7
    var_1b8[0] = zmm9_2
    var_1b8[1] = zmm8_2
    var_1b8[2] = 0
    int32_t rax_6 = sub_141e93fc0(rax_1, &var_1b8, &arg_8, &var_1a8, rbx)
    var_198[0] &= 0xfffffffe
    __builtin_memset(&var_198[1], 0, 0x20)
    var_1e8_1.d = *(arg1 + 0x14)
    int32_t var_1f8_5
    var_1f8_5.q = *(arg1 + 0x20)
    sub_141e93b80(rax_1, rax_3, rax_4, rax_6, var_1f8_5, rcx_2, 1, &var_198)
    var_198[0] &= 0xfffffffe
    var_1e8_1.d = *(arg1 + 0x14)
    var_1f8_5.q = *(arg1 + 0x20)
    __builtin_memset(&var_198[1], 0, 0x20)
    sub_141e93b80(rax_1, rax_3, rax_6, rax_5, var_1f8_5, rcx_2, 1, &var_198)
float zmm0_11[0x4]
int512_t zmm6_3
int512_t zmm7_3
int512_t zmm8_3
int512_t zmm9_3
zmm0_11, zmm6_3, zmm7_3, zmm8_3, zmm9_3 = sub_140a454f0(*(arg1 + 0x68), zmm10)
zmm9_3.o = zmm9
zmm8_3.o = zmm8
zmm7_3.o = zmm7
zmm6_3.o = zmm6

if (not(zmm0_11[0] >= zmm11[0]))
    zmm0_11[0] = zmm0_11[0] + zmm10[0]

if (not(zmm0_11[0] != zmm11[0]))
    float zmm0_12[0x4] = sub_140a454f0(*(arg1 + 0x6c), zmm10)
    
    if (not(zmm0_12[0] >= zmm11[0]))
        zmm0_12[0] = zmm0_12[0] + zmm10[0]
    
    if (not(zmm0_12[0] != zmm11[0]))
        int64_t result
        float zmm0_13
        zmm0_13, result = sub_140a454f0(*(arg1 + 0x70), zmm10)
        
        if (not(zmm0_13 >= zmm11[0]))
            zmm0_13 = zmm0_13 + zmm10[0]
        
        if (zmm0_13 == zmm11[0])
            return result

arg2[0xc] -= 1
return sub_140976b40(&arg2[0xa])
