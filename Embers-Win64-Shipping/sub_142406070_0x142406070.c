// 函数: sub_142406070
// 地址: 0x142406070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg2
float zmm0_1[0x4]
float zmm6[0x4]
int128_t zmm8
int128_t zmm9
zmm0_1, zmm6, zmm8, zmm9 = sub_140a454f0(*(arg1 + 0x98), 0x43b40000)

if (not(zmm0_1[0] >= 0f))
    zmm0_1[0] = zmm0_1[0] + zmm6[0]

float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm11[0x4]
float var_a8[0x4] = zmm11
float zmm12[0x4]
float var_b8[0x4] = zmm12
float zmm13[0x4]
float var_c8[0x4] = zmm13
float zmm14[0x4]
float var_d8[0x4] = zmm14
float zmm15[0x4]
float var_e8[0x4] = zmm15
float var_238[0x4]
float var_208[0x4]
float var_1f8[0x4]
float zmm0_3[0x4]
float zmm6_2[0x4]

if (zmm0_1[0] != 0f)
label_14240614f:
    zmm14 = *(arg1 + 0xa4)
    zmm15 = *(arg1 + 0xa8)
    zmm14[0] = zmm14[0] f* *(arg1 + 0x38)
    zmm15[0] = zmm15[0] f* *(arg1 + 0x3c)
    sub_14077e760(&var_208, arg1 + 0x98)
    float zmm2_1[0x4] = data_142d4cc00
    float zmm3_1[0x4] = data_142d4cc20
    float zmm4_1[0x4] = data_142d4cc30
    float zmm9_1[0x4] = var_208
    float zmm6_3[0x4] = zmm14 ^ data_142d3f780
    float zmm8_1[0x4] = zmm15 ^ data_142d3f780
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
    float temp0_5[0x4] = _mm_mul_ps(temp0_1, zmm9_1)
    int32_t var_f0_1 = 0
    float var_1e8[0x4]
    float temp0_6[0x4] = _mm_mul_ps(temp0_2, var_1e8)
    int32_t var_ec_1 = 0x3f800000
    float var_1d8[0x4]
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), var_1d8)
    int32_t var_130_1 = 0
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    float temp0_10[0x4] = _mm_mul_ps(temp0_3, var_1f8)
    int32_t var_12c_1 = 0x3f800000
    float temp0_11[0x4] = _mm_mul_ps(temp0_4, var_1f8)
    float temp0_12[0x4] = _mm_mul_ps(temp0_9, var_1f8)
    float temp0_13[0x4] = _mm_add_ps(temp0_10, temp0_5)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), zmm9_1)
    float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_6)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
    float temp0_18[0x4] = _mm_add_ps(temp0_11, temp0_15)
    float temp0_19[0x4] = _mm_mul_ps(temp0_17, var_1e8)
    float temp0_20[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
    float temp0_21[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
    float temp0_22[0x4] = _mm_add_ps(temp0_16, temp0_8)
    float temp0_23[0x4] = _mm_add_ps(temp0_18, temp0_19)
    float temp0_24[0x4] = _mm_mul_ps(temp0_20, var_1d8)
    float temp0_25[0x4] = _mm_mul_ps(temp0_21, zmm9_1)
    float var_f8[0x4]
    var_f8[0] = zmm6_3[0]
    float temp0_26[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xe1)
    float temp0_27[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    float temp0_28[0x4] = _mm_add_ps(temp0_23, temp0_24)
    float temp0_29[0x4] = _mm_mul_ps(temp0_27, var_1e8)
    temp0_26[0] = zmm8_1[0]
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xe1)
    float temp0_31[0x4] = _mm_add_ps(temp0_12, temp0_25)
    float temp0_32[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
    float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0x55), var_1f8)
    float temp0_35[0x4] = _mm_add_ps(temp0_31, temp0_29)
    float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0), zmm9_1)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
    float temp0_39[0x4] = _mm_mul_ps(temp0_32, var_1d8)
    float temp0_40[0x4] = _mm_add_ps(temp0_34, temp0_37)
    float temp0_41[0x4] = _mm_mul_ps(temp0_38, var_1e8)
    float temp0_42[0x4] = _mm_add_ps(temp0_35, temp0_39)
    float temp0_43[0x4] = _mm_add_ps(temp0_40, temp0_41)
    zmm4_1 = data_142d4cc20
    zmm6_3 = data_142d4cc30
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0)
    float temp0_45[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
    float temp0_46[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
    float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm6_3)
    int32_t var_f0_2 = 0
    float temp0_49[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0xff), var_1d8)
    int32_t var_ec_2 = 0x3f800000
    float zmm5_1[0x4] = data_142d4cc00
    float temp0_50[0x4] = _mm_mul_ps(temp0_44, zmm5_1)
    float temp0_51[0x4] = _mm_add_ps(temp0_43, temp0_49)
    float temp0_52[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xff)
    float var_138[0x4]
    var_138[0] = zmm14[0]
    float temp0_53[0x4] = _mm_mul_ps(temp0_46, zmm4_1)
    float temp0_54[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0x55)
    temp0_54[0] = zmm15[0]
    float temp0_57[0x4] = _mm_add_ps(temp0_53, temp0_50)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xe1)
    float temp0_59[0x4] = _mm_mul_ps(temp0_52, temp0_58)
    zmm15 = zmm4_1
    float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0), zmm5_1)
    float temp0_62[0x4] = _mm_add_ps(temp0_57, temp0_47)
    float temp0_63[0x4] = _mm_mul_ps(temp0_55, zmm4_1)
    float temp0_64[0x4] = _mm_mul_ps(temp0_56, zmm4_1)
    float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xaa), zmm6_3)
    float temp0_67[0x4] = _mm_add_ps(temp0_63, temp0_61)
    float temp0_68[0x4] = _mm_add_ps(temp0_62, temp0_59)
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xff), temp0_58)
    float temp0_71[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
    float temp0_72[0x4] = _mm_add_ps(temp0_67, temp0_66)
    float temp0_73[0x4] = _mm_mul_ps(temp0_71, zmm4_1)
    float temp0_74[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0)
    float temp0_75[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
    float temp0_76[0x4] = _mm_mul_ps(temp0_74, zmm5_1)
    float temp0_77[0x4] = _mm_add_ps(temp0_72, temp0_70)
    zmm11 = *(arg1 + 8)
    float temp0_78[0x4] = _mm_mul_ps(temp0_75, zmm6_3)
    float temp0_79[0x4] = _mm_add_ps(temp0_73, temp0_76)
    float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xff), temp0_58)
    float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0), zmm5_1)
    zmm5_1 = zmm11 ^ data_142d3f780
    float temp0_84[0x4] = _mm_add_ps(temp0_79, temp0_78)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xaa), zmm6_3)
    float temp0_87[0x4] = _mm_add_ps(temp0_64, temp0_83)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xff)
    float temp0_89[0x4] = _mm_add_ps(temp0_84, temp0_81)
    zmm12 = *(arg1 + 0xc)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_58)
    zmm6_3 = zmm12 ^ data_142d3f780
    float temp0_91[0x4] = _mm_add_ps(temp0_87, temp0_86)
    zmm2_1 = data_142d4cc00
    var_238 = temp0_68
    float temp0_92[0x4] = _mm_add_ps(temp0_91, temp0_90)
    zmm3_1 = zmm4_1
    zmm4_1 = data_142d4cc30
    int32_t var_130_2 = 0
    float temp0_93[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_94[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_95[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_68)
    int32_t var_12c_2 = 0x3f800000
    float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_89)
    float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), temp0_92)
    float temp0_100[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
    float temp0_101[0x4] = _mm_mul_ps(temp0_93, temp0_77)
    float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_77)
    float temp0_103[0x4] = _mm_add_ps(temp0_101, temp0_96)
    float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), temp0_68)
    float temp0_106[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    float temp0_107[0x4] = _mm_add_ps(temp0_103, temp0_97)
    float temp0_108[0x4] = _mm_mul_ps(temp0_106, temp0_77)
    float temp0_109[0x4] = _mm_add_ps(temp0_102, temp0_105)
    float temp0_110[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
    float temp0_112[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), var_238)
    float temp0_113[0x4] = _mm_add_ps(temp0_107, temp0_99)
    temp0_58[0] = zmm5_1[0]
    float temp0_114[0x4] = _mm_mul_ps(temp0_110, temp0_89)
    float temp0_115[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xe1)
    float temp0_116[0x4] = _mm_add_ps(temp0_108, temp0_112)
    temp0_115[0] = zmm6_3[0]
    float temp0_117[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
    zmm6_3 = data_142d4cc00
    float temp0_118[0x4] = _mm_shuffle_ps(temp0_115, temp0_115, 0xe1)
    float temp0_119[0x4] = _mm_add_ps(temp0_109, temp0_114)
    float var_138_2[0x4] = temp0_118
    float temp0_120[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0x55)
    float temp0_122[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_118, temp0_118, 0), var_238)
    float temp0_124[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), temp0_89)
    float temp0_126[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), temp0_92)
    float temp0_127[0x4] = _mm_add_ps(temp0_116, temp0_124)
    float temp0_128[0x4] = _mm_mul_ps(temp0_120, temp0_77)
    float temp0_129[0x4] = _mm_mul_ps(temp0_117, temp0_92)
    float temp0_130[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xaa)
    float temp0_131[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xff)
    float temp0_132[0x4] = _mm_add_ps(temp0_128, temp0_122)
    float temp0_133[0x4] = _mm_mul_ps(temp0_131, temp0_92)
    float temp0_134[0x4] = _mm_add_ps(temp0_127, temp0_126)
    zmm10 = data_142d4cc30
    float temp0_135[0x4] = _mm_add_ps(temp0_119, temp0_129)
    float temp0_136[0x4] = _mm_mul_ps(temp0_130, temp0_89)
    temp0_30[0] = zmm11[0]
    float temp0_138[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0), zmm6_3)
    float temp0_139[0x4] = _mm_add_ps(temp0_132, temp0_136)
    float temp0_140[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xe1)
    float temp0_142[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0xaa), zmm10)
    float temp0_143[0x4] = _mm_add_ps(temp0_139, temp0_133)
    float temp0_145[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0x55), zmm15)
    float temp0_146[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xff)
    float temp0_148[0x4] = _mm_add_ps(_mm_add_ps(temp0_145, temp0_138), temp0_142)
    float temp0_149[0x4] = _mm_shuffle_ps(temp0_135, temp0_135, 0)
    float temp0_150[0x4] = _mm_shuffle_ps(temp0_135, temp0_135, 0xaa)
    float temp0_151[0x4] = _mm_mul_ps(temp0_149, zmm6_3)
    temp0_140[0] = zmm12[0]
    float temp0_152[0x4] = _mm_mul_ps(temp0_150, zmm10)
    float temp0_153[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0x55)
    float temp0_154[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xe1)
    float temp0_155[0x4] = _mm_mul_ps(temp0_153, zmm15)
    float var_168[0x4] = _mm_add_ps(temp0_148, _mm_mul_ps(temp0_146, temp0_154))
    float temp0_159[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_135, temp0_135, 0x55), zmm15)
    float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_135, temp0_135, 0xff), temp0_154)
    float temp0_162[0x4] = _mm_add_ps(temp0_159, temp0_151)
    float temp0_164[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_134, temp0_134, 0), zmm6_3)
    float temp0_165[0x4] = _mm_add_ps(temp0_162, temp0_152)
    float temp0_166[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xaa)
    float temp0_167[0x4] = _mm_add_ps(temp0_155, temp0_164)
    float temp0_168[0x4] = _mm_mul_ps(temp0_166, zmm10)
    float temp0_169[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xff)
    float temp0_170[0x4] = _mm_add_ps(temp0_165, temp0_161)
    float temp0_172[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0), zmm6_3)
    float temp0_173[0x4] = _mm_add_ps(temp0_167, temp0_168)
    float temp0_174[0x4] = _mm_mul_ps(temp0_169, temp0_154)
    float var_158_1[0x4] = temp0_170
    float temp0_175[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0xaa)
    float temp0_177[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0x55), zmm15)
    float temp0_178[0x4] = _mm_add_ps(temp0_173, temp0_174)
    float temp0_179[0x4] = _mm_mul_ps(temp0_175, zmm10)
    float temp0_180[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0xff)
    float temp0_181[0x4] = _mm_add_ps(temp0_177, temp0_172)
    float temp0_182[0x4] = _mm_mul_ps(temp0_180, temp0_154)
    float var_148_1[0x4] = temp0_178
    float var_138_3[0x4] = _mm_add_ps(_mm_add_ps(temp0_181, temp0_179), temp0_182)
    sub_14241d720(rbx, &var_168)
else
    float zmm0_2[0x4]
    float zmm6_1[0x4]
    int32_t zmm7_1
    zmm0_2, zmm6_1, zmm7_1 = sub_140a454f0(*(arg1 + 0x9c), zmm6)
    
    if (not(zmm0_2[0] f>= zmm7_1))
        zmm0_2[0] = zmm0_2[0] + zmm6_1[0]
    
    if (zmm0_2[0] f!= zmm7_1)
        goto label_14240614f
    
    int32_t zmm7_2
    zmm0_3, zmm6_2, zmm7_2 = sub_140a454f0(*(arg1 + 0xa0), zmm6_1)
    
    if (not(zmm0_3[0] f>= zmm7_2))
        zmm0_3[0] = zmm0_3[0] + zmm6_2[0]
    
    if (not(zmm0_3[0] f== zmm7_2))
        goto label_14240614f

int64_t rcx_2 = *(arg1 + 0x68)

if (rcx_2 != 0)
    int64_t* rax_1 = *(arg1 + 0x70)
    zmm0_3 = *(arg1 + 0x28)
    void* r8_1 = *(arg1 + 0x20)
    float var_218[0x4] = zmm0_3
    int64_t* rdi_1 = data_143f10dc8
    int64_t* rsi_1 = rdi_1
    
    if (rax_1 != 0)
        rsi_1 = rax_1
    
    float temp0_185[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xff)
    int64_t* rax_2 = *(arg1 + 0x78)
    int64_t* r14_1 = rdi_1
    temp0_185[0] = temp0_185[0] f* *rbx
    int64_t* rdx_2 = rdi_1
    
    if (rax_2 != 0)
        r14_1 = rax_2
    
    char var_248_1 = 1
    int64_t* rax_3 = *(arg1 + 0x80)
    int64_t* r15_1 = rdi_1
    var_218[3] = temp0_185[0]
    int64_t* var_228 = rsi_1
    
    if (rax_3 != 0)
        r15_1 = rax_3
    
    int64_t* rax_4 = *(arg1 + 0x88)
    var_208 = zx.o(0)
    
    if (rax_4 != 0)
        rdx_2 = rax_4
    
    int64_t* rax_5 = *(arg1 + 0x90)
    
    if (rax_5 != 0)
        rdi_1 = rax_5
    
    var_208[0] &= 0xfffffffe
    var_1f8 = zx.o(0)
    void* rax_7 = sub_14240fbe0(rbx, 1, r8_1, rcx_2, *(arg1 + 0x14), &var_208, 1)
    void* rcx_4 = *(rbx + 0x68)
    int32_t rbx_1
    
    if (rcx_4 == 0)
        rbx_1 = -1
    else
        rbx_1 = *(rcx_4 + 0x18)
    
    int32_t zmm0_5 = *(arg1 + 0x50)
    float zmm8_2[0x4] = *(arg1 + 8)
    zmm10 = *(arg1 + 0xc)
    zmm8_2[0] = zmm8_2[0] f+ *(arg1 + 0x38)
    int64_t rax_8 = *r14_1
    zmm14 = zmm10
    zmm10[0] = zmm10[0] f+ *(arg1 + 0x3c)
    zmm8_2[0] = zmm8_2[0] f* zmm0_5
    zmm8_2[0] = zmm8_2[0] f* zmm0_5
    zmm10[0] = zmm10[0] f* zmm0_5
    float arg_8 = zmm8_2[0]
    float arg_18 = zmm8_2[0]
    float arg_20 = zmm10[0]
    zmm14[0] = zmm14[0] f* zmm0_5
    int32_t rax_9 = (*(rax_8 + 0x40))(r14_1)
    zmm6_2 = *(arg1 + 0x44)
    zmm12 = zx.o(0)
    zmm12[0] = float.s(zx.q(rax_9))
    int64_t rax_11 = *r14_1
    zmm12[0] = zmm12[0] f* *(arg1 + 0x40)
    zmm0_5 = float.s(zx.q((*(rax_11 + 0x48))(r14_1))) f* zmm6_2[0]
    zmm6_2 = *(arg1 + 0x40)
    int32_t var_19c_1 = zmm0_5
    zmm11 = zx.o(0)
    zmm11[0] = float.s(zx.q((*(*rdx_2 + 0x40))(rdx_2)))
    int64_t rax_17 = *rdx_2
    zmm11[0] = zmm11[0] * zmm6_2[0]
    zmm13 = zx.o(0)
    zmm13[0] = float.s(zx.q((*(rax_17 + 0x48))(rdx_2)))
    int64_t rax_20 = *r15_1
    zmm13[0] = zmm13[0] f* *(arg1 + 0x44)
    int32_t rax_21 = (*(rax_20 + 0x40))(r15_1)
    zmm6_2 = *(arg1 + 0x44)
    float zmm9_2[0x4] = zx.o(0)
    zmm9_2[0] = float.s(zx.q(rax_21))
    int64_t rax_23 = *r15_1
    zmm9_2[0] = zmm9_2[0] f* *(arg1 + 0x40)
    zmm0_5 = float.s(zx.q((*(rax_23 + 0x48))(r15_1))) f* zmm6_2[0]
    int32_t var_1a0_1 = float.s(zx.q((*(*rdi_1 + 0x40))(rdi_1))) f* (*(arg1 + 0x40))[0]
    float zmm7_4[0x4] = zx.o(0)
    zmm7_4[0] = float.s(zx.q((*(*rdi_1 + 0x48))(rdi_1)))
    int64_t rax_32 = *rsi_1
    zmm7_4[0] = zmm7_4[0] f* *(arg1 + 0x44)
    uint64_t rax_34 = zx.q((*(rax_32 + 0x40))(rsi_1))
    zmm8_2[0] = zmm8_2[0] - zmm8_2[0]
    int64_t rax_35 = *rsi_1
    zmm8_2[0] = zmm8_2[0] f/ (float.s(rax_34) f* *(arg1 + 0x48))
    uint64_t rax_37 = zx.q((*(rax_35 + 0x48))(rsi_1))
    zmm10[0] = zmm10[0] - zmm14[0]
    zmm10[0] = zmm10[0] f/ (float.s(rax_37) f* *(arg1 + 0x4c))
    sub_141eab450(rax_7, 0x24)
    int64_t var_1a8 = 0
    int32_t var_1b0_1 = 0
    int32_t zmm0_6 = *(arg1 + 0x50)
    zmm12[0] = zmm12[0] + zmm8_2[0]
    zmm13[0] = zmm13[0] + zmm14[0]
    int32_t var_1ac_1 = zmm0_6
    float var_198_1 = zmm12[0]
    float var_1b8 = zmm12[0]
    float var_1b4_1 = zmm13[0]
    int32_t rax_38 = sub_141e93fc0(rax_7, &var_1b8, &var_1a8, &var_218, rbx_1)
    int32_t zmm0_7 = *(arg1 + 0x50)
    zmm15 = arg_8
    zmm15[0] = zmm15[0] - zmm9_2[0]
    var_1b8 = zmm8_2[0]
    var_238[1] = zmm13[0]
    var_238[3] = zmm0_7
    int32_t var_1b4_2 = 0
    var_238[2] = 0
    var_1a8.d = zmm15[0]
    var_238[0] = zmm15[0]
    int32_t rax_39 = sub_141e93fc0(rax_7, &var_238, &var_1b8, &var_218, rbx_1)
    int32_t zmm0_8 = *(arg1 + 0x50)
    var_238[0] = zmm12[0]
    zmm12 = zmm10
    float var_1b4_3 = zmm10[0]
    zmm12[0] = zmm12[0] - zmm7_4[0]
    var_238[3] = zmm0_8
    var_1b8 = 0f
    var_238[2] = 0
    var_238[1] = zmm12[0]
    int32_t rax_40 = sub_141e93fc0(rax_7, &var_238, &var_1b8, &var_218, rbx_1)
    var_238[3] = *(arg1 + 0x50)
    var_1b8 = zmm8_2[0]
    float var_1b4_4 = zmm10[0]
    var_238[0] = zmm15[0]
    var_238[1] = zmm12[0]
    var_238[2] = 0
    int32_t rax_41 = sub_141e93fc0(rax_7, &var_238, &var_1b8, &var_218, rbx_1)
    int32_t rcx_20 = *(arg1 + 0x14)
    var_208[0] &= 0xfffffffe
    int64_t* rax_42 = var_228
    var_248_1.d = rcx_20
    int32_t var_258_5
    var_258_5.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_38, rax_39, rax_41, var_258_5, rax_42, 1, &var_208)
    var_208[0] &= 0xfffffffe
    var_248_1.d = *(arg1 + 0x14)
    int64_t* rax_44 = var_228
    var_258_5.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_38, rax_41, rax_40, var_258_5, rax_44, 1, &var_208)
    int64_t* rcx_24 = *(arg1 + 0x68)
    int32_t rax_47 = (*(*rcx_24 + 0x40))(rcx_24)
    int64_t* rcx_25 = *(arg1 + 0x68)
    zmm6_2 = *(arg1 + 0x5c)
    zmm6_2[0] = zmm6_2[0] f- *(arg1 + 0x54)
    int64_t rax_49 = *rcx_25
    zmm6_2[0] = zmm6_2[0] f* float.s(zx.q(rax_47))
    int32_t rax_50 = (*(rax_49 + 0x48))(rcx_25)
    int32_t zmm1_5 = *(arg1 + 0x58)
    zmm7_4 = *(arg1 + 0x60)
    zmm6_2[0] = zmm6_2[0] f* *(arg1 + 0xac)
    zmm7_4[0] = zmm7_4[0] f- zmm1_5
    zmm9_2 = arg_18
    var_228:4.d = zmm1_5
    zmm6_2[0] = zmm6_2[0] f* *(arg1 + 0x40)
    var_238[2] = 0
    var_238[0] = zmm9_2[0]
    var_238[1] = zmm14[0]
    zmm7_4[0] = zmm7_4[0] f* float.s(zx.q(rax_50))
    var_228.d = *(arg1 + 0x54)
    zmm7_4[0] = zmm7_4[0] f* *(arg1 + 0xb0)
    var_238[3] = *(arg1 + 0x50)
    zmm7_4[0] = zmm7_4[0] f* *(arg1 + 0x44)
    int32_t rax_52 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    var_228.d = *(arg1 + 0xac) f* *(arg1 + 0x5c)
    var_228:4.d = *(arg1 + 0x58)
    float zmm0_11 = *(arg1 + 0x50)
    zmm10 = zmm6_2
    var_238[1] = zmm14[0]
    zmm10[0] = zmm10[0] + zmm9_2[0]
    var_238[3] = zmm0_11
    var_238[2] = 0
    var_238[0] = zmm10[0]
    int32_t rax_53 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    float zmm1_6 = *(arg1 + 0xb0) f* *(arg1 + 0x60)
    var_228.d = *(arg1 + 0x54)
    zmm15 = zmm7_4
    int32_t zmm0_12 = *(arg1 + 0x50)
    zmm15[0] = zmm15[0] + zmm14[0]
    var_228:4.d = zmm1_6
    var_238[0] = zmm9_2[0]
    var_238[3] = zmm0_12
    var_238[2] = 0
    var_238[1] = zmm15[0]
    int32_t rax_54 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    float zmm0_13 = *(arg1 + 0xac) f* *(arg1 + 0x5c)
    float zmm1_7 = *(arg1 + 0xb0) f* *(arg1 + 0x60)
    var_238[2] = 0
    var_228.d = zmm0_13
    var_238[3] = *(arg1 + 0x50)
    var_228:4.d = zmm1_7
    var_238[0] = zmm10[0]
    var_238[1] = zmm15[0]
    int32_t rax_55 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    int32_t rcx_30 = *(arg1 + 0x14)
    var_208[0] &= 0xfffffffe
    var_248_1.d = rcx_30
    int32_t var_258_9
    var_258_9.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_52, rax_53, rax_55, var_258_9, rcx_2, 1, &var_208)
    var_208[0] &= 0xfffffffe
    var_248_1.d = *(arg1 + 0x14)
    __builtin_memset(&var_208[1], 0, 0x20)
    var_258_9.q = *(arg1 + 0x20)
    sub_141e93b80(rax_7, rax_52, rax_55, rax_54, var_258_9, rcx_2, 1, &var_208)
    float zmm1_8 = *(arg1 + 0x5c)
    zmm8_2 = arg_8
    var_238[1] = zmm14[0]
    float zmm0_14 = zmm1_8 f- *(arg1 + 0x54)
    zmm8_2[0] = zmm8_2[0] - zmm6_2[0]
    var_238[2] = 0
    zmm0_14 = zmm0_14 f* *(arg1 + 0xac)
    var_238[0] = zmm8_2[0]
    var_228:4.d = *(arg1 + 0x58)
    var_238[3] = *(arg1 + 0x50)
    var_228.d = zmm1_8 - zmm0_14
    int32_t rax_60 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    int32_t zmm1_9 = *(arg1 + 0x58)
    zmm6_2 = arg_8
    var_228.d = *(arg1 + 0x5c)
    var_238[3] = *(arg1 + 0x50)
    var_228:4.d = zmm1_9
    var_238[0] = zmm6_2[0]
    var_238[1] = zmm14[0]
    var_238[2] = 0
    int32_t rax_61 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    float zmm1_10 = *(arg1 + 0x5c)
    var_238[0] = zmm8_2[0]
    float zmm0_16 = zmm1_10 f- *(arg1 + 0x54)
    var_238[1] = zmm15[0]
    var_238[2] = 0
    zmm1_10 = zmm1_10 - zmm0_16 f* *(arg1 + 0xac)
    var_228:4.d = *(arg1 + 0xb0) f* *(arg1 + 0x60)
    var_238[3] = *(arg1 + 0x50)
    var_228.d = zmm1_10
    int32_t rax_62 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    int32_t zmm0_17 = *(arg1 + 0x5c)
    float zmm1_11 = *(arg1 + 0xb0) f* *(arg1 + 0x60)
    var_238[2] = 0
    var_228.d = zmm0_17
    zmm0_17 = *(arg1 + 0x50)
    var_228:4.d = zmm1_11
    var_238[0] = zmm6_2[0]
    var_238[1] = zmm15[0]
    var_238[3] = zmm0_17
    int32_t rax_63 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    int32_t rcx_38 = *(arg1 + 0x14)
    var_208[0] &= 0xfffffffe
    var_248_1.d = rcx_38
    int32_t var_258_13
    var_258_13.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_60, rax_61, rax_63, var_258_13, rcx_2, 1, &var_208)
    var_208[0] &= 0xfffffffe
    var_248_1.d = *(arg1 + 0x14)
    var_258_13.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_60, rax_63, rax_62, var_258_13, rcx_2, 1, &var_208)
    float zmm2_2 = *(arg1 + 0x60)
    int32_t zmm0_18 = *(arg1 + 0x54)
    zmm6_2 = arg_20
    var_238[0] = zmm9_2[0]
    float zmm1_12 = zmm2_2 f- *(arg1 + 0x58)
    var_228.d = zmm0_18
    zmm9_2 = zmm6_2
    zmm0_18 = *(arg1 + 0x50)
    zmm9_2[0] = zmm9_2[0] - zmm7_4[0]
    var_238[3] = zmm0_18
    var_238[2] = 0
    zmm1_12 = zmm1_12 f* *(arg1 + 0xb0)
    var_238[1] = zmm9_2[0]
    var_228:4.d = zmm2_2 - zmm1_12
    int32_t rax_68 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    zmm2_2 = *(arg1 + 0x60)
    float zmm0_19 = *(arg1 + 0xac) f* *(arg1 + 0x5c)
    var_238[2] = 0
    float zmm1_13 = zmm2_2 f- *(arg1 + 0x58)
    var_238[0] = zmm10[0]
    var_228.d = zmm0_19
    zmm0_19 = *(arg1 + 0x50)
    var_238[1] = zmm9_2[0]
    zmm1_13 = zmm1_13 f* *(arg1 + 0xb0)
    var_238[3] = zmm0_19
    var_228:4.d = zmm2_2 - zmm1_13
    int32_t rax_69 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    int32_t zmm1_14 = *(arg1 + 0x60)
    var_228.d = *(arg1 + 0x54)
    var_238[0] = arg_18
    var_238[3] = *(arg1 + 0x50)
    var_228:4.d = zmm1_14
    var_238[1] = zmm6_2[0]
    var_238[2] = 0
    int32_t rax_70 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    float zmm0_21 = *(arg1 + 0xac) f* *(arg1 + 0x5c)
    var_238[0] = zmm10[0]
    var_238[1] = zmm6_2[0]
    var_228.d = zmm0_21
    var_228:4.d = *(arg1 + 0x60)
    var_238[3] = *(arg1 + 0x50)
    var_238[2] = 0
    int32_t rax_71 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    int32_t rcx_46 = *(arg1 + 0x14)
    var_208[0] &= 0xfffffffe
    var_248_1.d = rcx_46
    int32_t var_258_17
    var_258_17.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_68, rax_69, rax_71, var_258_17, rcx_2, 1, &var_208)
    var_208[0] &= 0xfffffffe
    var_248_1.d = *(arg1 + 0x14)
    var_258_17.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_68, rax_71, rax_70, var_258_17, rcx_2, 1, &var_208)
    float zmm1_15 = *(arg1 + 0x5c)
    zmm2_2 = *(arg1 + 0x60)
    var_228.d = zmm1_15 - (zmm1_15 f- *(arg1 + 0x54)) f* *(arg1 + 0xac)
    float zmm0_22 = zmm2_2 f- *(arg1 + 0x58)
    var_238[0] = zmm8_2[0]
    var_238[1] = zmm9_2[0]
    var_238[2] = 0
    zmm2_2 = zmm2_2 - zmm0_22 f* *(arg1 + 0xb0)
    var_238[3] = *(arg1 + 0x50)
    var_228:4.d = zmm2_2
    int32_t rax_76 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    zmm2_2 = *(arg1 + 0x60)
    zmm7_4 = arg_8
    var_228.d = *(arg1 + 0x5c)
    float zmm1_16 = zmm2_2 f- *(arg1 + 0x58)
    int32_t zmm0_23 = *(arg1 + 0x50)
    var_238[0] = zmm7_4[0]
    var_238[1] = zmm9_2[0]
    var_238[3] = zmm0_23
    zmm1_16 = zmm1_16 f* *(arg1 + 0xb0)
    var_238[2] = 0
    var_228:4.d = zmm2_2 - zmm1_16
    int32_t rax_77 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    float zmm1_17 = *(arg1 + 0x5c)
    var_238[0] = zmm8_2[0]
    float zmm0_24 = zmm1_17 f- *(arg1 + 0x54)
    var_238[1] = zmm6_2[0]
    var_238[2] = 0
    zmm1_17 = zmm1_17 - zmm0_24 f* *(arg1 + 0xac)
    var_228:4.d = *(arg1 + 0x60)
    var_238[3] = *(arg1 + 0x50)
    var_228.d = zmm1_17
    int32_t rax_78 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    int32_t zmm1_18 = *(arg1 + 0x60)
    var_228.d = *(arg1 + 0x5c)
    var_238[3] = *(arg1 + 0x50)
    var_228:4.d = zmm1_18
    var_238[0] = zmm7_4[0]
    var_238[1] = zmm6_2[0]
    var_238[2] = 0
    int32_t rax_79 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    var_208[0] &= 0xfffffffe
    __builtin_memset(&var_208[1], 0, 0x20)
    var_248_1.d = *(arg1 + 0x14)
    int32_t var_258_21
    var_258_21.q = *(arg1 + 0x20)
    sub_141e93b80(rax_7, rax_76, rax_77, rax_79, var_258_21, rcx_2, 1, &var_208)
    var_208[0] &= 0xfffffffe
    var_248_1.d = *(arg1 + 0x14)
    var_258_21.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_76, rax_79, rax_78, var_258_21, rcx_2, 1, &var_208)
    int32_t zmm0_26 = *(arg1 + 0x50)
    var_238[0] = zmm10[0]
    zmm8_2[0] = zmm8_2[0] - zmm10[0]
    var_238[1] = zmm14[0]
    var_238[3] = zmm0_26
    var_228 = nullptr
    var_238[2] = 0
    zmm8_2[0] = zmm8_2[0] / zmm11[0]
    int32_t rax_84 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    var_228:4.d = 0
    var_238[2] = 0
    var_238[3] = *(arg1 + 0x50)
    var_228.d = zmm8_2[0]
    var_238[0] = zmm8_2[0]
    var_238[1] = zmm14[0]
    int32_t rax_85 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    var_238[3] = *(arg1 + 0x50)
    var_238[0] = zmm10[0]
    var_238[1] = zmm13[0]
    var_228.d = 0
    var_228:4.d = 0x3f800000
    var_238[2] = 0
    int32_t rax_86 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    var_228.d = zmm8_2[0]
    var_238[0] = zmm8_2[0]
    var_238[1] = zmm13[0]
    var_228:4.d = 0x3f800000
    var_238[3] = *(arg1 + 0x50)
    var_238[2] = 0
    int32_t rax_87 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    int32_t rcx_62 = *(arg1 + 0x14)
    var_208[0] &= 0xfffffffe
    var_248_1.d = rcx_62
    int32_t var_258_25
    var_258_25.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_84, rax_85, rax_87, var_258_25, rdx_2, 1, &var_208)
    var_208[0] &= 0xfffffffe
    var_248_1.d = *(arg1 + 0x14)
    var_258_25.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_84, rax_87, rax_86, var_258_25, rdx_2, 1, &var_208)
    int32_t zmm0_30 = *(arg1 + 0x50)
    zmm8_2[0] = zmm8_2[0] f/ var_1a0_1
    var_228 = nullptr
    var_238[2] = 0
    var_238[3] = zmm0_30
    var_238[0] = zmm10[0]
    var_238[1] = zmm12[0]
    int32_t rax_92 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    var_238[3] = *(arg1 + 0x50)
    var_228.d = zmm8_2[0]
    var_238[0] = zmm8_2[0]
    var_238[1] = zmm12[0]
    var_228:4.d = 0
    var_238[2] = 0
    int32_t rax_93 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    zmm6_2 = arg_20
    var_238[1] = zmm6_2[0]
    var_238[0] = zmm10[0]
    var_228.d = 0
    var_228:4.d = 0x3f800000
    var_238[2] = 0
    var_238[3] = *(arg1 + 0x50)
    int32_t rax_94 = sub_141e93fc0(rax_7, &var_238, &var_228, &var_218, rbx_1)
    var_238[3] = *(arg1 + 0x50)
    arg_20 = zmm8_2[0]
    var_238[0] = zmm8_2[0]
    var_238[1] = zmm6_2[0]
    int32_t arg_24 = 0x3f800000
    var_238[2] = 0
    int32_t rax_95 = sub_141e93fc0(rax_7, &var_238, &arg_20, &var_218, rbx_1)
    int32_t rcx_70 = *(arg1 + 0x14)
    var_208[0] &= 0xfffffffe
    var_248_1.d = rcx_70
    int32_t var_258_29
    var_258_29.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_92, rax_93, rax_95, var_258_29, rdi_1, 1, &var_208)
    var_208[0] &= 0xfffffffe
    var_248_1.d = *(arg1 + 0x14)
    var_258_29.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_92, rax_95, rax_94, var_258_29, rdi_1, 1, &var_208)
    int32_t zmm0_34 = *(arg1 + 0x50)
    zmm10 = arg_18
    var_238[0] = zmm10[0]
    zmm9_2[0] = zmm9_2[0] - zmm15[0]
    var_238[1] = zmm15[0]
    var_238[3] = zmm0_34
    arg_20.q = 0
    var_238[2] = 0
    zmm9_2[0] = zmm9_2[0] f/ var_19c_1
    int32_t rax_100 = sub_141e93fc0(rax_7, &var_238, &arg_20, &var_218, rbx_1)
    arg_18.q = 0x3f800000
    zmm8_2 = var_198_1
    var_238[0] = zmm8_2[0]
    var_238[3] = *(arg1 + 0x50)
    var_238[1] = zmm15[0]
    var_238[2] = 0
    int32_t rax_101 = sub_141e93fc0(rax_7, &var_238, &arg_18, &var_218, rbx_1)
    var_238[3] = *(arg1 + 0x50)
    float arg_1c = zmm9_2[0]
    var_238[0] = zmm10[0]
    var_238[1] = zmm9_2[0]
    arg_18 = 0f
    var_238[2] = 0
    int32_t rax_102 = sub_141e93fc0(rax_7, &var_238, &arg_18, &var_218, rbx_1)
    var_238[3] = *(arg1 + 0x50)
    arg_1c = zmm9_2[0]
    var_238[0] = zmm8_2[0]
    var_238[1] = zmm9_2[0]
    arg_18 = 1f
    var_238[2] = 0
    int32_t rax_103 = sub_141e93fc0(rax_7, &var_238, &arg_18, &var_218, rbx_1)
    int32_t rcx_78 = *(arg1 + 0x14)
    var_208[0] &= 0xfffffffe
    var_248_1.d = rcx_78
    int32_t var_258_33
    var_258_33.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_100, rax_101, rax_103, var_258_33, r14_1, 1, &var_208)
    var_208[0] &= 0xfffffffe
    var_248_1.d = *(arg1 + 0x14)
    var_258_33.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_100, rax_103, rax_102, var_258_33, r14_1, 1, &var_208)
    zmm6_2 = var_1a8.d
    zmm9_2[0] = zmm9_2[0] f/ zmm0_5
    arg_18.q = 0
    var_238[0] = zmm6_2[0]
    var_238[1] = zmm15[0]
    var_238[3] = *(arg1 + 0x50)
    var_238[2] = 0
    int32_t rax_108 = sub_141e93fc0(rax_7, &var_238, &arg_18, &var_218, rbx_1)
    zmm8_2 = arg_8
    var_238[3] = *(arg1 + 0x50)
    var_238[0] = zmm8_2[0]
    var_238[1] = zmm15[0]
    arg_18.q = 0x3f800000
    var_238[2] = 0
    int32_t rax_109 = sub_141e93fc0(rax_7, &var_238, &arg_18, &var_218, rbx_1)
    var_238[3] = *(arg1 + 0x50)
    float arg_c = zmm9_2[0]
    var_238[0] = zmm6_2[0]
    var_238[1] = zmm9_2[0]
    arg_8 = 0f
    var_238[2] = 0
    int32_t rax_110 = sub_141e93fc0(rax_7, &var_238, &arg_8, &var_218, rbx_1)
    var_238[3] = *(arg1 + 0x50)
    arg_c = zmm9_2[0]
    var_238[0] = zmm8_2[0]
    var_238[1] = zmm9_2[0]
    arg_8 = 1f
    var_238[2] = 0
    int32_t rax_111 = sub_141e93fc0(rax_7, &var_238, &arg_8, &var_218, rbx_1)
    int32_t rcx_86 = *(arg1 + 0x14)
    var_208[0] &= 0xfffffffe
    var_248_1.d = rcx_86
    int32_t var_258_37
    var_258_37.q = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    sub_141e93b80(rax_7, rax_108, rax_109, rax_111, var_258_37, r15_1, 1, &var_208)
    var_208[0] &= 0xfffffffe
    var_248_1.d = *(arg1 + 0x14)
    int64_t rax_113 = *(arg1 + 0x20)
    __builtin_memset(&var_208[1], 0, 0x20)
    var_258_37.q = rax_113
    sub_141e93b80(rax_7, rax_108, rax_111, rax_110, var_258_37, r15_1, 1, &var_208)
    rbx = arg2

float zmm0_42[0x4]
float zmm6_4[0x4]
int512_t zmm8_3
int512_t zmm9_3
zmm0_42, zmm6_4, zmm8_3, zmm9_3 = sub_140a454f0(*(arg1 + 0x98), 0x43b40000)
zmm9_3.o = zmm9
zmm8_3.o = zmm8

if (not(zmm0_42[0] >= 0f))
    zmm0_42[0] = zmm0_42[0] + zmm6_4[0]

if (not(zmm0_42[0] != 0f))
    float zmm0_43[0x4]
    float zmm6_5[0x4]
    int32_t zmm7_5
    zmm0_43, zmm6_5, zmm7_5 = sub_140a454f0(*(arg1 + 0x9c), zmm6_4)
    
    if (not(zmm0_43[0] f>= zmm7_5))
        zmm0_43[0] = zmm0_43[0] + zmm6_5[0]
    
    if (not(zmm0_43[0] f!= zmm7_5))
        int64_t result
        float zmm0_44
        float zmm6_6
        int32_t zmm7_6
        zmm0_44, result, zmm6_6, zmm7_6 = sub_140a454f0(*(arg1 + 0xa0), zmm6_5)
        
        if (not(zmm0_44 f>= zmm7_6))
            zmm0_44 = zmm0_44 + zmm6_6
        
        if (zmm0_44 f== zmm7_6)
            return result

rbx[0xc] -= 1
return sub_140976b40(&rbx[0xa])
