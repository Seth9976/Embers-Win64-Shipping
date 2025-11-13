// 函数: sub_141106710
// 地址: 0x141106710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg2 + 0x1a0)
int64_t arg_10 = rdi
int64_t arg_8 = 0
int32_t var_1d0 = 0xf
sub_141439db0(arg1, arg2, rdi, arg4, (*(*arg4 + 0x40))(arg4, zx.q(arg3[0x2a9].d), &arg_8), arg3, 
    arg3.d + 0x10)
void* arg_28
void* r12 = arg_28
float zmm10[0x4] = data_143e51070
float zmm14[0x4] = *(r12 + 0x10)
float zmm9[0x4] = *(r12 + 0x30)
float zmm8[0x4] = *(r12 + 0x20)
float temp0[0x4] = _mm_add_ps(zmm14, zmm14)
float temp0_1[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xff)
float temp0_2[0x4] = _mm_shuffle_ps(zmm14, zmm14, 4)
float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
float temp0_4[0x4] = _mm_mul_ps(zmm14, temp0)
float temp0_5[0x4] = _mm_shuffle_ps(temp0, temp0, 0x29)
float temp0_6[0x4] = _mm_mul_ps(temp0_2, temp0_5)
float temp0_7[0x4] = _mm_shuffle_ps(temp0, temp0, 0x12)
float temp0_8[0x4] = _mm_mul_ps(temp0_1, temp0_7)
float var_188[0x4] = temp0
float temp0_9[0x4] = _mm_add_ps(temp0_8, temp0_6)
float temp0_10[0x4] = _mm_sub_ps(temp0_6, temp0_8)
float temp0_13[0x4] =
    _mm_add_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x1a), _mm_shuffle_ps(temp0_4, temp0_4, 1))
float temp0_14[0x4] = _mm_mul_ps(temp0_9, zmm9)
float temp0_15[0x4] = _mm_mul_ps(temp0_10, temp0_3)
float zmm3[0x4] =
    __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_13), zmm9), data_143e51080)
float var_1c8[0x4] =
    _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, zmm3, 0), _mm_shuffle_ps(temp0_15, zmm3, 0x32), 0x82)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_14, zmm3, 0x31)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_14, temp0_15, 0x12)
zmm10[0].q = zmm8 u>> 0x40
float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm3, 0x10), temp0_22, 0x88)
float temp0_26[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
float var_1a8[0x4] = _mm_shuffle_ps(temp0_23, zmm3, 0xe8)
uint32_t var_118[0x4]
float zmm6_1[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]
float zmm10_1[0x4]
float zmm12_1[0x4]
float zmm14_1[0x4]
float zmm15_1[0x4]
zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm12_1, zmm14_1, zmm15_1 =
    sub_140631b10(&var_1c8, &var_118)
float zmm13[0x4] = zx.o(0)
float zmm11[0x4] = 0x3f800000
float zmm2_1[0x4]
float zmm3_1[0x4]

if (*(arg1 + 0x134) u> 0)
    int32_t rcx_4 = arg3[0x2b3].d
    float zmm0_1[0x4] = zx.o(0)
    float zmm5_1[0x4] = data_142d4cc30
    float zmm1_1[0x4] = zx.o(0)
    int32_t rdx_3 = *(arg3 + 0x159c)
    zmm3_1 = 0x3f800000
    zmm7_1 = *(arg3 + 0x410)
    zmm10_1 = zx.o(0)
    zmm6_1 = *(arg3 + 0x400)
    float zmm4_1[0x4] = 0x3f800000
    zmm8_1 = *(arg3 + 0x420)
    int32_t rax_3 = arg3[0x2b4].d - rcx_4
    zmm9_1 = 0xbf800000
    zmm1_1[0] = float.s(rcx_4)
    var_1c8[3].q = 0
    var_1c8[1].q = 0
    temp0_25[2].q = 0
    temp0_26[2] = 0
    zmm2_1 = var_1c8
    zmm0_1[0] = float.s(rax_3)
    int32_t rax_5 = *(arg3 + 0x15a4) - rdx_3
    temp0_26[3] = 0x3f800000
    zmm1_1[0] = zmm1_1[0] + zmm1_1[0]
    float temp0_28[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
    zmm3_1[0] = 1f / zmm0_1[0]
    zmm0_1 = zx.o(0)
    float temp0_29[0x4] = _mm_mul_ps(temp0_28, zmm6_1)
    zmm1_1[0] = zmm1_1[0] * zmm3_1[0]
    zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
    zmm0_1[0] = float.s(rax_5)
    zmm2_1[0] = zmm3_1[0]
    zmm9_1[0] = -1f - zmm1_1[0]
    zmm4_1[0] = 1f / zmm0_1[0]
    var_1c8 = zmm2_1
    float temp0_30[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_31[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_32[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_33[0x4] = _mm_mul_ps(temp0_31, zmm7_1)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
    float temp0_35[0x4] = _mm_mul_ps(temp0_32, zmm8_1)
    zmm10_1[0] = float.s(rdx_3)
    float temp0_36[0x4] = _mm_mul_ps(temp0_30, zmm6_1)
    zmm10_1[0] = zmm10_1[0] + zmm10_1[0]
    float temp0_37[0x4] = _mm_add_ps(temp0_36, temp0_33)
    zmm10_1[0] = zmm10_1[0] * zmm4_1[0]
    zmm4_1[0] = zmm4_1[0] * -2f
    float temp0_38[0x4] = _mm_add_ps(temp0_37, temp0_35)
    zmm10_1[0] = zmm10_1[0] + 1f
    zmm11 = *(arg3 + 0x430)
    float temp0_40[0x4] = _mm_add_ps(temp0_38, _mm_mul_ps(temp0_34, zmm11))
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xe1)
    temp0_41[0] = zmm4_1[0]
    float temp0_42[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xe1)
    float var_1b8_1[0x4] = temp0_42
    float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0)
    float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0x55), zmm7_1)
    float temp0_46[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
    float temp0_47[0x4] = _mm_mul_ps(temp0_43, zmm6_1)
    float temp0_48[0x4] = _mm_mul_ps(temp0_46, zmm8_1)
    float temp0_49[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xff)
    float temp0_50[0x4] = _mm_add_ps(temp0_47, temp0_45)
    float temp0_51[0x4] = _mm_mul_ps(temp0_49, zmm11)
    float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), zmm7_1)
    float temp0_54[0x4] = _mm_add_ps(temp0_50, temp0_48)
    float temp0_55[0x4] = _mm_add_ps(temp0_29, temp0_53)
    float temp0_56[0x4] = _mm_add_ps(temp0_54, temp0_51)
    temp0_26[0] = zmm9_1[0]
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xe1)
    temp0_57[0] = zmm10_1[0]
    float temp0_58[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xe1)
    float var_198_1[0x4] = temp0_59
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0)
    float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), zmm7_1)
    float temp0_63[0x4] = _mm_mul_ps(temp0_58, zmm8_1)
    float temp0_64[0x4] = _mm_mul_ps(temp0_60, zmm6_1)
    zmm6_1 = var_118
    float temp0_65[0x4] = _mm_add_ps(temp0_55, temp0_63)
    float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm11)
    float temp0_68[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)
    float temp0_69[0x4] = _mm_add_ps(temp0_64, temp0_62)
    float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xff), zmm11)
    float temp0_72[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0)
    float temp0_73[0x4] = _mm_add_ps(temp0_65, temp0_67)
    float temp0_74[0x4] = _mm_mul_ps(temp0_68, zmm8_1)
    float temp0_75[0x4] = _mm_mul_ps(temp0_72, zmm6_1)
    float temp0_76[0x4] = _mm_add_ps(temp0_69, temp0_74)
    float var_f8[0x4]
    float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xaa), var_f8)
    float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_71)
    float var_108[0x4]
    float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0x55), var_108)
    float var_e8[0x4]
    float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xff), var_e8)
    float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_75)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0), zmm6_1)
    float temp0_87[0x4] = _mm_add_ps(temp0_84, temp0_78)
    float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), var_f8)
    var_1c8 = _mm_add_ps(temp0_87, temp0_83)
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
    float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), var_e8)
    float temp0_95[0x4] = _mm_add_ps(_mm_mul_ps(temp0_91, var_108), temp0_86)
    float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0), zmm6_1)
    float temp0_98[0x4] = _mm_add_ps(temp0_95, temp0_89)
    float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xaa), var_f8)
    float temp0_101[0x4] = _mm_add_ps(temp0_98, temp0_93)
    float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0x55), var_108)
    float var_1b8_2[0x4] = temp0_101
    float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xff), var_e8)
    float temp0_106[0x4] = _mm_add_ps(temp0_103, temp0_97)
    float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0x55), var_108)
    float temp0_110[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0), zmm6_1)
    float var_1a8_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_106, temp0_100), temp0_105)
    float temp0_113[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0xaa)
    float temp0_114[0x4] = _mm_add_ps(temp0_108, temp0_110)
    float temp0_115[0x4] = _mm_mul_ps(temp0_113, var_f8)
    float temp0_117[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0xff), var_e8)
    float var_198_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_114, temp0_115), temp0_117)
    sub_1405eb5d0(arg2, &arg_10, arg1 + 0x130, &var_1c8, 0)
    zmm10_1 = data_143e51070
    zmm13 = zx.o(0)
    zmm6_1 = var_188
    zmm7_1 = temp0_7
    zmm8_1 = zmm8
    zmm11 = 0x3f800000
    zmm9_1 = zmm9
    zmm12_1 = temp0_1

if (*(arg1 + 0x13a) u> 0)
    float temp0_120[0x4] = __mulps_xmmps_memps(zmm15_1, temp0_5)
    float temp0_121[0x4] = _mm_mul_ps(zmm7_1, zmm12_1)
    zmm10_1[0].q = zmm8_1 u>> 0x40
    float temp0_122[0x4] = _mm_mul_ps(zmm14_1, zmm6_1)
    float temp0_123[0x4] = _mm_shuffle_ps(zmm8_1, zmm10_1, 0xc4)
    float temp0_124[0x4] = _mm_add_ps(temp0_121, temp0_120)
    float var_198_3[0x4] = temp0_123
    float temp0_125[0x4] = _mm_sub_ps(temp0_120, temp0_121)
    float temp0_128[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_122, temp0_122, 0x1a), 
        _mm_shuffle_ps(temp0_122, temp0_122, 1))
    float temp0_129[0x4] = _mm_mul_ps(temp0_124, zmm9_1)
    float temp0_130[0x4] = __mulps_xmmps_memps(temp0_125, temp0_3)
    zmm3_1 =
        __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10_1, temp0_128), zmm9_1), data_143e51080)
    float temp0_134[0x4] = _mm_shuffle_ps(temp0_130, zmm3_1, 0x32)
    float temp0_136[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_129, zmm3_1, 0), temp0_134, 0x82)
    float temp0_137[0x4] = _mm_shuffle_ps(temp0_129, zmm3_1, 0x31)
    float temp0_138[0x4] = _mm_shuffle_ps(temp0_130, zmm3_1, 0x10)
    float temp0_139[0x4] = _mm_shuffle_ps(temp0_129, temp0_130, 0x12)
    float temp0_140[0x4] = _mm_shuffle_ps(temp0_138, temp0_137, 0x88)
    float temp0_141[0x4] = _mm_shuffle_ps(temp0_139, zmm3_1, 0xe8)
    float var_1b8_3[0x4] = temp0_140
    var_1c8 = temp0_136
    float var_1a8_2[0x4] = temp0_141
    sub_1405eb5d0(arg2, &arg_10, arg1 + 0x136, &var_1c8, 0)

sub_1405eb5d0(arg2, &arg_10, arg1 + 0x13c, &var_118, 0)

if (*(arg1 + 0x146) u> 0)
    float zmm4_2[0x4] = data_142d4cc00
    uint32_t count = zx.d(*(arg1 + 0x146))
    float temp0_142[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xd2)
    float temp0_143[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
    float temp0_144[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xd2)
    float temp0_145[0x4] = _mm_mul_ps(temp0_143, temp0_144)
    
    if (count u>= 0xc)
        count = 0xc
    
    float temp0_146[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xc9)
    float temp0_148[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_142, temp0_146), temp0_145)
    float temp0_149[0x4] = _mm_add_ps(temp0_148, temp0_148)
    float temp0_150[0x4] = _mm_shuffle_ps(temp0_149, temp0_149, 0xd2)
    float temp0_151[0x4] = _mm_shuffle_ps(temp0_149, temp0_149, 0xc9)
    float temp0_152[0x4] = _mm_mul_ps(temp0_150, temp0_146)
    float temp0_153[0x4] = _mm_mul_ps(temp0_151, temp0_144)
    float temp0_154[0x4] = _mm_mul_ps(temp0_149, zmm12_1)
    float temp0_157[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_152, temp0_153), _mm_add_ps(temp0_154, zmm4_2))
    var_188[0] = temp0_157[0]
    float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0x55)
    var_188[2] = _mm_shuffle_ps(temp0_157, temp0_157, 0xaa)[0]
    var_188[1] = temp0_158[0]
    
    if (count != 0)
        arg_8.d = zx.d(*(arg1 + 0x144))
        int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        arg_28.d = zx.d(*(arg1 + 0x142))
        int64_t rax_9 = zx.q(count) + rbx_3
        
        if (rax_9 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, count + 0x10)
            rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_9 = zx.q(count) + rbx_3
        
        *(arg2 + 0x30) = rax_9
        memcpy(rbx_3, &var_188, count)
        void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_11 = &rcx_12[6]
        
        if (rax_11 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_11 = &rcx_12[6]
        
        *(arg2 + 0x30) = rax_11
        void** rax_12 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_12 = rcx_12
        *(arg2 + 8) = &rcx_12[1]
        rcx_12[1] = 0
        *rcx_12 = &data_142d549d8
        rcx_12[2] = rdi
        rcx_12[4].d = arg_28.d
        *(rcx_12 + 0x24) = arg_8.d
        rcx_12[3] = rbx_3
        rcx_12[5].d = count

zmm2_1 = *(*arg3 + 0x30)

if (not(zmm2_1[0] == zmm13[0]))
    float zmm1_2[0x4] = *(r12 + 0x50)
    zmm2_1[0] = zmm2_1[0] f* *(r12 + 0x48)
    zmm2_1[0] = zmm2_1[0] f* *(r12 + 0x4c)
    zmm1_2[0] = zmm1_2[0] - zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] f+ *(r12 + 0x54)
    float temp0_160[0x4] = _mm_min_ss(zmm1_2[0], zmm2_1[0])
    
    if (temp0_160[0] >= zmm13[0])
        zmm11 = _mm_min_ss(temp0_160[0], zmm11[0])
    else
        zmm11 = zx.o(0)

arg_28.d = arg5[0]
arg_28:4.d = zmm11[0]
return sub_1405d0cd0(arg2, &arg_10, arg1 + 0x148, &arg_28, 0)
