// 函数: sub_142081c50
// 地址: 0x142081c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x440)
float zmm2[0x4]

if (rcx == 0 || *(arg1 + 0x4a0) s<= 0)
    zmm2 = arg3[1]
    (*arg2)[6] = 0f
    float var_184_2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    float zmm0[0x4] = zx.o(data_143dbb1f8.q)
    (*arg2)[2] = var_184_2
    float rax_7 = data_143dbb200
    *(arg2 + 0xc) = zmm0.q
    (*arg2)[5] = rax_7
    return arg2

float zmm1[0x4] = *arg3
float temp0[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
float temp0_2[0x4] = _mm_mul_ps(zmm1, temp0)
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0, temp0, 0x29), temp0_1)
float temp0_5[0x4] = _mm_shuffle_ps(temp0, temp0, 0x12)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x1a)
float temp0_8[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(zmm1, zmm1, 0xff))
zmm1 = arg3[2]
float zmm10[0x4] = arg3[1]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 1)
float temp0_10[0x4] = _mm_add_ps(temp0_8, temp0_4)
float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_12[0x4] = _mm_sub_ps(temp0_4, temp0_8)
float zmm3[0x4] = data_143f47560
float temp0_13[0x4] = _mm_add_ps(temp0_6, temp0_9)
float temp0_14[0x4] = _mm_mul_ps(temp0_10, zmm1)
float temp0_15[0x4] = _mm_mul_ps(temp0_11, temp0_12)
float temp0_16[0x4] = _mm_sub_ps(zmm3, temp0_13)
zmm3[0].q = zmm10 u>> 0x40
zmm10 = _mm_shuffle_ps(zmm10, zmm3, 0xc4)
float var_108[0x4] = zmm10
zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_16, zmm1), data_143f47570)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x32)
float zmm8[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, zmm2, 0), temp0_20, 0x82)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_14, zmm2, 0x31)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x10)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_14, temp0_15, 0x12)
float zmm9[0x4] = _mm_shuffle_ps(temp0_24, temp0_23, 0x88)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, zmm2, 0xe8)
float var_118[0x4] = zmm9
float var_128[0x4] = zmm8
void var_f8
sub_1423633d0(rcx, &var_f8)
float (* rax)[0x4] = *(arg1 + 0x498)
zmm2 = *rax
float zmm4[0x4] = rax[1]
float zmm5[0x4] = rax[2]
float zmm6[0x4] = rax[3]
float temp0_28[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_30[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm10)
float temp0_33[0x4] = _mm_mul_ps(temp0_28, zmm9)
float temp0_34[0x4] = _mm_mul_ps(temp0_29, zmm8)
float temp0_35[0x4] = _mm_mul_ps(temp0_30, temp0_27)
float temp0_38[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_33, temp0_34), temp0_35), temp0_32)
float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm9)
float var_178[0x4] = temp0_38
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm8)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), temp0_27)
float temp0_45[0x4] = _mm_add_ps(temp0_40, temp0_42)
float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), zmm9)
float temp0_49[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm8)
float temp0_50[0x4] = _mm_add_ps(temp0_45, temp0_44)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm10)
float temp0_53[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
float temp0_54[0x4] = _mm_add_ps(temp0_47, temp0_49)
float temp0_55[0x4] = _mm_mul_ps(temp0_53, temp0_27)
float temp0_56[0x4] = _mm_add_ps(temp0_50, temp0_52)
float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm8)
float temp0_59[0x4] = _mm_add_ps(temp0_54, temp0_55)
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm10)
float var_168[0x4] = temp0_56
float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0x55), zmm9)
float temp0_64[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
float temp0_65[0x4] = _mm_add_ps(temp0_59, temp0_61)
float temp0_66[0x4] = _mm_mul_ps(temp0_64, temp0_27)
float temp0_67[0x4] = _mm_add_ps(temp0_63, temp0_58)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm10)
float var_158[0x4] = temp0_65
float var_148[0x4] = _mm_add_ps(_mm_add_ps(temp0_67, temp0_66), temp0_69)
float var_1c8[0x4]
float zmm7_1[0x4] = sub_140ae2d40(&var_f8, &var_1c8, &var_178)
int32_t i = 1
float rax_4
float zmm0_2[0x4]
float zmm1_2[0x4]
int64_t var_1b8
float var_1b0

if (*(arg1 + 0x4a0) s<= 1)
    rax_4 = var_1b0
    zmm1_2 = zx.o(var_1b8)
    zmm0_2 = var_1c8
else
    int128_t* rbx_1 = 0x40
    float zmm11[0x4]
    float var_78_1[0x4] = zmm11
    float zmm12[0x4]
    float var_88_1[0x4] = zmm12
    float zmm13[0x4]
    float var_98_1[0x4] = zmm13
    float zmm14[0x4]
    float var_a8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_b8_1[0x4] = zmm15
    
    do
        int64_t rax_1 = *(arg1 + 0x498)
        float zmm2_1[0x4] = *(rbx_1 + rax_1)
        float zmm4_1[0x4] = *(rbx_1 + rax_1 + 0x10)
        float zmm5_1[0x4] = *(rbx_1 + rax_1 + 0x20)
        float zmm6_1[0x4] = *(rbx_1 + rax_1 + 0x30)
        float temp0_72[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
        float temp0_73[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
        float temp0_74[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm10)
        float temp0_77[0x4] = _mm_mul_ps(temp0_73, zmm8)
        float temp0_78[0x4] = _mm_mul_ps(temp0_74, zmm7_1)
        float temp0_80[0x4] = _mm_add_ps(_mm_mul_ps(temp0_72, zmm9), temp0_77)
        float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm9)
        float temp0_83[0x4] = _mm_add_ps(temp0_80, temp0_78)
        float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm7_1)
        float temp0_86[0x4] = _mm_add_ps(temp0_83, temp0_76)
        float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm8)
        float temp0_89[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        var_178 = temp0_86
        float temp0_90[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
        float temp0_91[0x4] = _mm_add_ps(temp0_88, temp0_82)
        float temp0_92[0x4] = _mm_mul_ps(temp0_90, zmm8)
        float temp0_93[0x4] = _mm_mul_ps(temp0_89, zmm10)
        float temp0_94[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
        float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_85)
        float temp0_96[0x4] = _mm_mul_ps(temp0_94, zmm9)
        float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm7_1)
        float temp0_99[0x4] = _mm_add_ps(temp0_95, temp0_93)
        float temp0_100[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_101[0x4] = _mm_add_ps(temp0_92, temp0_96)
        float temp0_102[0x4] = _mm_mul_ps(temp0_100, zmm10)
        float temp0_103[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
        float var_168_1[0x4] = temp0_99
        float temp0_104[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
        float temp0_105[0x4] = _mm_add_ps(temp0_101, temp0_98)
        float temp0_106[0x4] = _mm_mul_ps(temp0_104, zmm8)
        float temp0_107[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
        float temp0_108[0x4] = _mm_mul_ps(temp0_103, zmm9)
        float temp0_109[0x4] = _mm_mul_ps(temp0_107, zmm7_1)
        float temp0_110[0x4] = _mm_add_ps(temp0_105, temp0_102)
        float temp0_111[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
        float temp0_112[0x4] = _mm_add_ps(temp0_106, temp0_108)
        float temp0_113[0x4] = _mm_mul_ps(temp0_111, zmm10)
        float var_158_1[0x4] = temp0_110
        float var_148_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_112, temp0_109), temp0_113)
        float var_d8[0x8]
        float* rax_2 = sub_140ae2d40(&var_f8, &var_d8, &var_178)
        float zmm3_1[0x4] = var_1c8[0]
        zmm13 = var_1c8[1]
        zmm4_1 = zmm3_1
        zmm2_1 = var_1c8[3]
        zmm6_1 = zmm13
        zmm0_2 = var_1b8.d
        zmm4_1[0] = zmm4_1[0] - zmm2_1[0]
        zmm7_1 = var_1c8[2]
        zmm6_1[0] = zmm6_1[0] - zmm0_2[0]
        float arg_8 = zmm3_1[0]
        float arg_20 = zmm7_1[0]
        zmm1_2 = var_1b8:4.d
        zmm2_1[0] = zmm2_1[0] + zmm3_1[0]
        zmm5_1 = zmm7_1
        zmm0_2[0] = zmm0_2[0] + zmm13[0]
        zmm5_1[0] = zmm5_1[0] - zmm1_2[0]
        zmm10 = zmm4_1
        zmm9 = zmm6_1
        zmm1_2[0] = zmm1_2[0] + zmm7_1[0]
        zmm8 = zmm5_1
        
        if (not(zmm4_1[0] <= zmm2_1[0]))
            zmm10 = zmm2_1
        
        if (not(zmm6_1[0] <= zmm0_2[0]))
            zmm9 = zmm0_2
        
        if (not(zmm5_1[0] <= zmm1_2[0]))
            zmm8 = zmm1_2
        
        if (not(zmm4_1[0] >= zmm2_1[0]))
            zmm4_1 = zmm2_1
        
        if (not(zmm6_1[0] >= zmm0_2[0]))
            zmm6_1 = zmm0_2
        
        if (not(zmm5_1[0] >= zmm1_2[0]))
            zmm5_1 = zmm1_2
        
        zmm14 = *rax_2
        zmm2_1 = rax_2[3]
        zmm7_1 = rax_2[1]
        zmm14[0] = zmm14[0] - zmm2_1[0]
        zmm15 = rax_2[2]
        zmm0_2 = rax_2[4]
        zmm1_2 = rax_2[5]
        zmm7_1[0] = zmm7_1[0] - zmm0_2[0]
        zmm15[0] = zmm15[0] - zmm1_2[0]
        
        if (not(zmm10[0] <= zmm14[0]))
            zmm10 = zmm14
        
        if (not(zmm9[0] <= zmm7_1[0]))
            zmm9 = zmm7_1
        
        if (not(zmm8[0] <= zmm15[0]))
            zmm8 = zmm15
        
        if (not(zmm4_1[0] >= zmm14[0]))
            zmm4_1 = zmm14
        
        if (not(zmm6_1[0] >= zmm7_1[0]))
            zmm6_1 = zmm7_1
        
        if (not(zmm5_1[0] >= zmm15[0]))
            zmm5_1 = zmm15
        
        zmm2_1[0] = zmm2_1[0] + zmm14[0]
        zmm0_2[0] = zmm0_2[0] + zmm7_1[0]
        zmm1_2[0] = zmm1_2[0] + zmm15[0]
        
        if (not(zmm10[0] <= zmm2_1[0]))
            zmm10 = zmm2_1
        
        if (not(zmm9[0] <= zmm0_2[0]))
            zmm9 = zmm0_2
        
        if (not(zmm8[0] <= zmm1_2[0]))
            zmm8 = zmm1_2
        
        if (not(zmm4_1[0] >= zmm2_1[0]))
            zmm4_1 = zmm2_1
        
        if (not(zmm6_1[0] >= zmm0_2[0]))
            zmm6_1 = zmm0_2
        
        if (not(zmm5_1[0] >= zmm1_2[0]))
            zmm5_1 = zmm1_2
        
        zmm4_1[0] = zmm4_1[0] - zmm10[0]
        zmm6_1[0] = zmm6_1[0] - zmm9[0]
        zmm5_1[0] = zmm5_1[0] - zmm8[0]
        zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
        zmm4_1[0] = zmm4_1[0] * 0.5f
        zmm6_1[0] = zmm6_1[0] * 0.5f
        zmm10[0] = zmm10[0] + zmm4_1[0]
        zmm5_1[0] = zmm5_1[0] * 0.5f
        zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
        float temp0_116[0x4] = _mm_unpacklo_ps(zmm4_1, zmm6_1[0].q)
        zmm9[0] = zmm9[0] + zmm6_1[0]
        zmm2_1 = arg_20
        zmm8[0] = zmm8[0] + zmm5_1[0]
        int64_t var_19c_1 = temp0_116.q
        zmm4_1[0] = zmm4_1[0] + zmm6_1[0]
        zmm0_2 = arg_8
        zmm14[0] = zmm14[0] - zmm10[0]
        zmm0_2[0] = zmm0_2[0] - zmm10[0]
        float var_184_1 = zmm5_1[0]
        zmm7_1[0] = zmm7_1[0] - zmm9[0]
        zmm13[0] = zmm13[0] - zmm9[0]
        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
        float var_194_1 = var_184_1
        float var_1a8_1 = zmm10[0]
        zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
        zmm15[0] = zmm15[0] - zmm8[0]
        zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
        zmm2_1[0] = zmm2_1[0] - zmm8[0]
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm4_1[0] = zmm4_1[0] + zmm5_1[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm13[0] = zmm13[0] + zmm0_2[0]
        zmm15[0] = zmm15[0] * zmm15[0]
        zmm4_1[0] = zmm4_1[0] * 0.25f
        zmm7_1[0] = zmm7_1[0] + zmm14[0]
        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
        float temp0_117[0x4] = _mm_sqrt_ss(0, zmm4_1[0])
        zmm13[0] = zmm13[0] + zmm2_1[0]
        float var_1a4_1 = zmm9[0]
        zmm7_1[0] = zmm7_1[0] + zmm15[0]
        float var_1a0_1 = zmm8[0]
        float temp0_118[0x4] = _mm_sqrt_ss(0, zmm13[0])
        float temp0_119[0x4] = _mm_sqrt_ss(0, zmm7_1[0])
        temp0_118[0] = temp0_118[0] + var_1b0
        temp0_119[0] = temp0_119[0] + rax_2[6]
        float temp0_120[0x4] = _mm_max_ss(temp0_119[0], temp0_118[0])
        float var_190_1
        
        if (temp0_117[0] > temp0_120[0])
            var_190_1 = temp0_120[0]
        else
            var_190_1 = temp0_117[0]
        
        zmm0_2 = var_1a8_1.o
        i += 1
        rax_4 = var_190_1
        zmm1_2 = zx.o(var_19c_1)
        rbx_1 = &rbx_1[4]
        zmm7_1 = temp0_27
        zmm8 = var_128
        zmm9 = var_118
        zmm10 = var_108
        var_1c8 = zmm0_2
        var_1b0 = rax_4
        var_1b8 = zmm1_2.q
    while (i s< *(arg1 + 0x4a0))
*arg2 = zmm0_2
arg2[1][0].q = zmm1_2.q
(*arg2)[6] = rax_4
return arg2
