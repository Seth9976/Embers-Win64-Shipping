// 函数: sub_1400e7780
// 地址: 0x1400e7780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_38[0x4] = zmm15
float zmm14[0x4]
float var_48[0x4] = zmm14
float zmm13[0x4]
float var_58[0x4] = zmm13
float zmm12[0x4]
float var_68[0x4] = zmm12
float zmm11[0x4]
float var_78[0x4] = zmm11
float zmm10[0x4]
float var_88[0x4] = zmm10
uint32_t zmm9[0x4]
uint32_t var_98[0x4] = zmm9
uint32_t zmm6[0x4]
uint32_t var_c8[0x4] = zmm6
float zmm0[0x4] = arg5
int32_t r10_4 = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
uint32_t var_268_1[0x4]
int32_t* r10_5
int64_t* r14
float zmm1[0x4]
uint32_t zmm5[0x4]
float zmm7[0x4]
float zmm8[0x4]
float var_258_1[0x4]
int32_t rsi
float zmm2[0x4]
float zmm3[0x4]

if (r10_4 s<= 0)
    rsi = 0
    zmm8 = zx.o(0)
    zmm7 = zx.o(0)
    __builtin_memset(&var_268_1, 0, 0x20)
    r14 = arg7
    r10_5 = arg6
    
    if (0 s>= arg8)
        zmm5 = var_258_1
    else
    label_1400e7cb8:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rsi), 0), data_142e11d00)
        zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm0)
        zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm9
        int64_t rax_3 = sx.q(zmm1[0])
        void* r11_1 = arg4 + (rax_3 << 2)
        zmm0 = *(arg4 + (rax_3 << 2))
        int64_t rax_5 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
        void* rsi_1 = arg4 + (rax_5 << 2)
        float temp0_119[0x4] = _mm_unpacklo_ps(zmm0, (*(arg4 + (rax_5 << 2)))[0].q)
        int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
        void* rax_7 = arg4 + (rbx_1 << 2)
        zmm2 = *(arg4 + (rbx_1 << 2))
        int64_t rdi_4 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
        void* rbx_3 = arg4 + (rdi_4 << 2)
        float temp0_122[0x4] = _mm_unpacklo_ps(zmm2, (*(arg4 + (rdi_4 << 2)))[0].q)
        zmm0 = temp0_119[0].q | temp0_122[0].q << 0x40
        zmm2 = data_142fc95e0 & zmm9
        float temp0_124[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + r11_1), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_1))[0].q)
        float temp0_127[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rax_7), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_3))[0].q)
        zmm13 = temp0_124[0].q | temp0_127[0].q << 0x40
        zmm2 = data_142fc95f0 & zmm9
        float temp0_129[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + r11_1), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_1))[0].q)
        float temp0_132[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rax_7), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_3))[0].q)
        zmm3 = temp0_129[0].q | temp0_132[0].q << 0x40
        zmm10 = zx.o(0)
        float zmm4[0x4] = *(arg3 + 0xc)
        float temp0_133[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        float var_148_2[0x4] = temp0_133
        float var_138_2[0x4] = temp0_133
        float var_128_2[0x4] = temp0_133
        float var_118_2[0x4] = temp0_133
        zmm5 = *arg3
        zmm6 = *(arg3 + 4)
        zmm1 = *(arg3 + 8)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_136[0x4] = _mm_mul_ps(zmm13, zmm5)
        zmm5 = _mm_mul_ps(zmm5, zmm3)
        float temp0_138[0x4] = _mm_mul_ps(zmm3, zmm6)
        float temp0_139[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm6 = _mm_mul_ps(zmm6, zmm0)
        float temp0_141[0x4] = _mm_mul_ps(zmm0, temp0_139)
        float temp0_142[0x4] = _mm_mul_ps(temp0_133, zmm10)
        float temp0_144[0x4] = _mm_sub_ps(temp0_138, _mm_mul_ps(temp0_139, zmm13))
        float temp0_145[0x4] = _mm_sub_ps(temp0_141, zmm5)
        float temp0_146[0x4] = _mm_sub_ps(temp0_136, zmm6)
        float temp0_147[0x4] = _mm_sub_ps(temp0_142, temp0_142)
        float temp0_148[0x4] = _mm_add_ps(temp0_144, temp0_144)
        float temp0_149[0x4] = _mm_add_ps(temp0_145, temp0_145)
        float temp0_150[0x4] = _mm_add_ps(temp0_146, temp0_146)
        float temp0_151[0x4] = _mm_add_ps(temp0_147, temp0_147)
        float var_248_2[0x4] = temp0_148
        float var_238_2[0x4] = temp0_149
        float var_228_2[0x4] = temp0_150
        float var_218_2[0x4] = temp0_151
        float temp0_152[0x4] = _mm_mul_ps(temp0_133, temp0_148)
        float temp0_153[0x4] = _mm_mul_ps(temp0_133, temp0_149)
        float temp0_154[0x4] = _mm_mul_ps(temp0_133, temp0_150)
        float temp0_155[0x4] = __addps_xmmps_memps(temp0_152, zmm0)
        float temp0_156[0x4] = __addps_xmmps_memps(temp0_153, zmm13)
        float temp0_157[0x4] = __addps_xmmps_memps(temp0_154, zmm3)
        float temp0_159[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_151, temp0_133), zmm10)
        float var_108_1[0x4] = temp0_155
        float var_f8_1[0x4] = temp0_156
        float var_e8_1[0x4] = temp0_157
        zmm6 = *arg3
        zmm1 = *(arg3 + 4)
        zmm5 = *(arg3 + 8)
        float temp0_160[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_162[0x4] = _mm_mul_ps(temp0_149, zmm6)
        zmm6 = _mm_mul_ps(zmm6, temp0_150)
        float temp0_164[0x4] = _mm_mul_ps(temp0_150, temp0_160)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_166[0x4] = _mm_mul_ps(temp0_160, temp0_148)
        float temp0_167[0x4] = _mm_mul_ps(temp0_148, zmm5)
        float temp0_169[0x4] = _mm_sub_ps(temp0_164, _mm_mul_ps(zmm5, temp0_149))
        float temp0_170[0x4] = _mm_sub_ps(temp0_167, zmm6)
        float temp0_171[0x4] = _mm_sub_ps(temp0_162, temp0_166)
        float temp0_172[0x4] = _mm_add_ps(temp0_169, temp0_155)
        float temp0_173[0x4] = _mm_add_ps(temp0_170, temp0_156)
        float temp0_174[0x4] = _mm_add_ps(temp0_171, temp0_157)
        zmm0 = arg3[1].d
        zmm12 = *(arg3 + 0x14)
        float temp0_176[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_172)
        float temp0_178[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm12, zmm12, 0), temp0_173)
        zmm11 = *(arg3 + 0x18)
        float temp0_180[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_174)
        zmm4 = *arg1
        zmm1 = *arg2
        zmm2 = (*arg2)[1]
        float temp0_182[0x4] = _mm_sub_ps(temp0_176, _mm_shuffle_ps(zmm1, zmm1, 0))
        float temp0_184[0x4] = _mm_sub_ps(temp0_178, _mm_shuffle_ps(zmm2, zmm2, 0))
        zmm2 = (*arg2)[2]
        zmm5 = _mm_sub_ps(temp0_180, _mm_shuffle_ps(zmm2, zmm2, 0))
        float temp0_188[0x4] = _mm_add_ps(_mm_mul_ps(temp0_182, temp0_182), zmm10)
        float temp0_190[0x4] = _mm_add_ps(_mm_mul_ps(temp0_184, temp0_184), temp0_188)
        zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm5), temp0_190)
        float temp0_193[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_194[0x4] = _mm_rsqrt_ps(zmm5)
        zmm5 = _mm_mul_ps(_mm_mul_ps(zmm5, temp0_194), temp0_194)
        float temp0_199[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), temp0_194), data_142d3f640)
        float temp0_200[0x4] = _mm_rcp_ps(temp0_199)
        float temp0_201[0x4] = _mm_mul_ps(temp0_199, temp0_200)
        zmm1 = arg5
        float temp0_206[0x4] = _mm_sub_ps(
            _mm_sub_ps(temp0_193, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_201), temp0_200)), 
            _mm_shuffle_ps(zmm1, zmm1, 0))
        float var_d8_1[0x4] = temp0_159
        uint32_t temp0_208[0x4] =
            _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_206, data_142fc95d0, 1), zmm9)
        char temp0_209 = _mm_movemask_ps(temp0_208)
        
        if (temp0_209 == 0)
            zmm5 = var_258_1
        else
            float temp0_210[0x4] = _mm_mul_ps(temp0_176, temp0_206)
            zmm1 = var_268_1
            zmm2 = zmm1
            char temp0_211 = temp0_209 & 1
            
            if (temp0_211 != 0)
                zmm2 = zmm1
                zmm2[0] = zmm2[0] + temp0_210[0]
                zmm12 = _mm_mul_ps(temp0_178, temp0_206)
                zmm1 = zmm7
                
                if (temp0_211 != 0)
                    goto label_1400e8075
                
                goto label_1400e8026
            
            zmm12 = _mm_mul_ps(temp0_178, temp0_206)
            zmm1 = zmm7
            
            if (temp0_211 == 0)
            label_1400e8026:
                zmm11 = _mm_mul_ps(temp0_180, temp0_206)
                zmm3 = zmm8
                
                if (temp0_211 != 0)
                    zmm3 = zmm8
                    zmm3[0] = zmm3[0] + zmm11[0]
            else
            label_1400e8075:
                zmm1 = zmm7
                zmm1[0] = zmm1[0] + zmm12[0]
                zmm11 = _mm_mul_ps(temp0_180, temp0_206)
                zmm3 = zmm8
                
                if (temp0_211 != 0)
                    zmm3 = zmm8
                    zmm3[0] = zmm3[0] + zmm11[0]
            
            zmm6 = _mm_add_ps(var_268_1, temp0_210)
            char temp2_1 = temp0_209 & 2
            zmm9 = var_258_1
            
            if (temp2_1 == 0)
                zmm10 = zmm6
                zmm7 = _mm_add_ps(zmm7, zmm12)
                
                if (temp2_1 != 0)
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 1), zmm1, 0xe2)
            else
                zmm10 = zmm6
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm2, 1), zmm2, 0xe2)
                zmm7 = _mm_add_ps(zmm7, zmm12)
                
                if (temp2_1 != 0)
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 1), zmm1, 0xe2)
            
            float temp0_223[0x4] = _mm_add_ps(zmm8, zmm11)
            bool cond:18_1
            bool cond:19_1
            bool cond:22_1
            bool cond:23_1
            
            if (temp2_1 != 0)
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_223, zmm3, 1), zmm3, 0xe2)
                char temp6_1 = temp0_209 & 4
                cond:18_1 = temp6_1 == 0
                cond:19_1 = temp6_1 != 0
                cond:22_1 = temp6_1 == 0
                cond:23_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                    goto label_1400e8223
                
                goto label_1400e80c3
            
            char temp5_1 = temp0_209 & 4
            cond:18_1 = temp5_1 == 0
            cond:19_1 = temp5_1 != 0
            cond:22_1 = temp5_1 == 0
            cond:23_1 = temp5_1 != 0
            
            if (temp5_1 == 0)
            label_1400e80c3:
                
                if (not(cond:18_1))
                label_1400e80d0:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm7, zmm1, 0x32), 0x84)
                    
                    if (cond:23_1)
                        goto label_1400e823b
                    
                    goto label_1400e80da
            else
            label_1400e8223:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x32), 0x84)
                
                if (cond:19_1)
                    goto label_1400e80d0
            
            bool cond:26_1
            bool cond:27_1
            bool cond:30_1
            bool cond:31_1
            
            if (not(cond:22_1))
            label_1400e823b:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(temp0_223, zmm3, 0x32), 0x84)
                char temp10_1 = temp0_209 & 8
                cond:26_1 = temp10_1 == 0
                cond:27_1 = temp10_1 != 0
                cond:30_1 = temp10_1 == 0
                cond:31_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                    goto label_1400e80ed
                
                goto label_1400e8248
            
        label_1400e80da:
            char temp9_1 = temp0_209 & 8
            cond:26_1 = temp9_1 == 0
            cond:27_1 = temp9_1 != 0
            cond:30_1 = temp9_1 == 0
            cond:31_1 = temp9_1 != 0
            
            if (temp9_1 != 0)
            label_1400e80ed:
                var_268_1 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x23), 0x24)
                
                if (cond:27_1)
                    goto label_1400e825a
                
                goto label_1400e80f7
            
        label_1400e8248:
            var_268_1 = zmm2
            
            if (cond:26_1)
            label_1400e80f7:
                zmm7 = zmm1
                
                if (not(cond:30_1))
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(temp0_223, zmm3, 0x23), 0x24)
            else
            label_1400e825a:
                zmm7 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm7, zmm1, 0x23), 0x24)
                
                if (cond:31_1)
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(temp0_223, zmm3, 0x23), 0x24)
            
            zmm4 = _mm_and_ps(_mm_add_ps(temp0_206, zmm9), temp0_208)
            zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_208, zmm9), zmm4)
            zmm8 = zmm3
else
    zmm15 = *(arg3 + 0xc)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
    float var_198_1[0x4] = *arg3
    uint32_t var_1a8_1[0x4] = *(arg3 + 4)
    float var_1b8_1[0x4] = *(arg3 + 8)
    zmm1 = *arg1
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm1 = *arg2
    zmm2 = (*arg2)[1]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm1 = (*arg2)[2]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    int32_t rax_1 = 0
    rsi = 0
    __builtin_memset(&var_268_1, 0, 0x20)
    zmm7 = zx.o(0)
    zmm8 = zx.o(0)
    
    while (true)
        int64_t rdi_1 = sx.q(rax_1)
        zmm6 = *(arg4 + rdi_1)
        zmm0 = *(arg4 + rdi_1 + 0x10)
        zmm1 = *(arg4 + rdi_1 + 0x20)
        zmm5 = _mm_shuffle_ps(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm6, 0x4e), _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
            zmm1, 0xc4)
        float temp0_12[0x4] = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
        zmm6 = _mm_shuffle_ps(zmm6, zmm0, 5)
        zmm6 =
            _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm6, zmm0, 0xf8), 0x22), 0x28)
        uint32_t var_238_1[0x4] = zmm6
        uint32_t var_228_1[0x4] = zmm5
        int128_t var_218_1 = zx.o(0)
        zmm9 = _mm_shuffle_ps(var_1a8_1, var_1a8_1, 0)
        float temp0_18[0x4] = _mm_mul_ps(zmm9, zmm5)
        float temp0_19[0x4] = _mm_shuffle_ps(var_1b8_1, var_1b8_1, 0)
        float temp0_20[0x4] = _mm_mul_ps(temp0_19, temp0_12)
        float temp0_21[0x4] = _mm_shuffle_ps(var_198_1, var_198_1, 0)
        float temp0_22[0x4] = _mm_mul_ps(temp0_21, zmm6)
        float temp0_24[0x4] = _mm_sub_ps(temp0_18, _mm_mul_ps(zmm6, temp0_19))
        float temp0_26[0x4] = _mm_sub_ps(temp0_20, _mm_mul_ps(zmm5, temp0_21))
        float temp0_28[0x4] = _mm_sub_ps(temp0_22, _mm_mul_ps(temp0_12, zmm9))
        float temp0_29[0x4] = _mm_add_ps(temp0_24, temp0_24)
        float temp0_30[0x4] = _mm_add_ps(temp0_26, temp0_26)
        float temp0_31[0x4] = _mm_add_ps(temp0_28, temp0_28)
        float temp0_32[0x4] = _mm_mul_ps(temp0_1, temp0_30)
        zmm6 = _mm_mul_ps(temp0_29, temp0_19)
        float temp0_34[0x4] = _mm_mul_ps(temp0_30, temp0_19)
        float temp0_39[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_31, zmm9), temp0_34), 
            __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_29), temp0_12))
        float temp0_40[0x4] = _mm_mul_ps(temp0_1, temp0_31)
        zmm5 = _mm_mul_ps(temp0_30, temp0_21)
        float temp0_42[0x4] = _mm_mul_ps(temp0_31, temp0_21)
        float temp0_43[0x4] = __addps_xmmps_memps(temp0_32, var_238_1)
        zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, temp0_42), temp0_43)
        float temp0_46[0x4] = __addps_xmmps_memps(temp0_40, var_228_1)
        zmm5 = _mm_add_ps(_mm_sub_ps(zmm5, _mm_mul_ps(temp0_29, zmm9)), temp0_46)
        zmm13 = arg3[1].d
        zmm14 = *(arg3 + 0x14)
        float temp0_51[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_39)
        float temp0_53[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm6)
        zmm10 = *(arg3 + 0x18)
        float temp0_55[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm5)
        float temp0_56[0x4] = __subps_xmmps_memps(temp0_51, temp0_3)
        float temp0_57[0x4] = __subps_xmmps_memps(temp0_53, temp0_4)
        float temp0_58[0x4] = __subps_xmmps_memps(temp0_55, temp0_5)
        float temp0_60[0x4] = _mm_add_ps(_mm_mul_ps(temp0_56, temp0_56), zx.o(0))
        float temp0_62[0x4] = _mm_add_ps(_mm_mul_ps(temp0_57, temp0_57), temp0_60)
        float temp0_64[0x4] = _mm_add_ps(_mm_mul_ps(temp0_58, temp0_58), temp0_62)
        float temp0_65[0x4] = _mm_rsqrt_ps(temp0_64)
        float temp0_67[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_64, temp0_65), temp0_65)
        float temp0_70[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_67), temp0_65), data_142d3f640)
        float temp0_71[0x4] = _mm_rcp_ps(temp0_70)
        float temp0_72[0x4] = _mm_mul_ps(temp0_70, temp0_71)
        float var_148_1[0x4] = temp0_1
        float var_138_1[0x4] = temp0_1
        float var_128_1[0x4] = temp0_1
        float var_118_1[0x4] = temp0_1
        float temp0_76[0x4] = __subps_xmmps_memps(
            _mm_sub_ps(temp0_2, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_72), temp0_71)), 
            temp0_6)
        zmm9 = __cmpps_xmmps_memps_immb(temp0_76, data_142fc95d0, 1)
        char temp0_78 = _mm_movemask_ps(zmm9)
        
        if (temp0_78 == 0)
            zmm7 = zmm7
            rsi += 4
            rax_1 += 0x30
            
            if (rsi s>= r10_4)
                break
        else
            float temp0_79[0x4] = _mm_mul_ps(temp0_51, temp0_76)
            zmm6 = var_268_1
            zmm2 = zmm6
            char temp1_1 = temp0_78 & 1
            
            if (temp1_1 != 0)
                zmm2 = zmm6
                zmm2[0] = zmm2[0] + temp0_79[0]
                zmm14 = _mm_mul_ps(temp0_53, temp0_76)
                zmm1 = zmm7
                
                if (temp1_1 != 0)
                    goto label_1400e7b7e
                
                goto label_1400e7ac9
            
            zmm14 = _mm_mul_ps(temp0_53, temp0_76)
            zmm1 = zmm7
            
            if (temp1_1 != 0)
            label_1400e7b7e:
                zmm1 = zmm7
                zmm1[0] = zmm1[0] + zmm14[0]
                zmm10 = _mm_mul_ps(temp0_55, temp0_76)
                zmm3 = zmm8
                
                if (temp1_1 != 0)
                    goto label_1400e7ad7
                
                goto label_1400e7b95
            
        label_1400e7ac9:
            zmm10 = _mm_mul_ps(temp0_55, temp0_76)
            zmm3 = zmm8
            bool cond:9_1
            bool cond:10_1
            bool cond:13_1
            bool cond:14_1
            
            if (temp1_1 != 0)
            label_1400e7ad7:
                zmm3 = zmm8
                zmm3[0] = zmm3[0] + zmm10[0]
                zmm6 = _mm_add_ps(zmm6, temp0_79)
                char temp4_1 = temp0_78 & 2
                cond:9_1 = temp4_1 == 0
                cond:10_1 = temp4_1 != 0
                cond:13_1 = temp4_1 == 0
                cond:14_1 = temp4_1 != 0
                
                if (temp4_1 != 0)
                    goto label_1400e7bae
                
                goto label_1400e7aee
            
        label_1400e7b95:
            zmm6 = _mm_add_ps(zmm6, temp0_79)
            char temp3_1 = temp0_78 & 2
            cond:9_1 = temp3_1 == 0
            cond:10_1 = temp3_1 != 0
            cond:13_1 = temp3_1 == 0
            cond:14_1 = temp3_1 != 0
            
            if (temp3_1 != 0)
            label_1400e7bae:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm2, 1), zmm2, 0xe2)
                zmm12 = _mm_add_ps(zmm7, zmm14)
                
                if (cond:10_1)
                    goto label_1400e7b04
                
                goto label_1400e7bbb
            
        label_1400e7aee:
            zmm12 = _mm_add_ps(zmm7, zmm14)
            
            if (not(cond:9_1))
            label_1400e7b04:
                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 1), zmm1, 0xe2)
                zmm8 = _mm_add_ps(zmm8, zmm10)
                
                if (cond:14_1)
                    goto label_1400e7bd1
                
                goto label_1400e7b11
            
        label_1400e7bbb:
            zmm8 = _mm_add_ps(zmm8, zmm10)
            bool cond:16_1
            bool cond:17_1
            bool cond:20_1
            bool cond:21_1
            
            if (not(cond:13_1))
            label_1400e7bd1:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm3, 1), zmm3, 0xe2)
                char temp8_1 = temp0_78 & 4
                cond:16_1 = temp8_1 == 0
                cond:17_1 = temp8_1 != 0
                cond:20_1 = temp8_1 == 0
                cond:21_1 = temp8_1 != 0
                
                if (temp8_1 != 0)
                    goto label_1400e7b22
                
                goto label_1400e7bde
            
        label_1400e7b11:
            char temp7_1 = temp0_78 & 4
            cond:16_1 = temp7_1 == 0
            cond:17_1 = temp7_1 != 0
            cond:20_1 = temp7_1 == 0
            cond:21_1 = temp7_1 != 0
            
            if (temp7_1 == 0)
            label_1400e7bde:
                
                if (not(cond:16_1))
                label_1400e7bec:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x32), 0x84)
                    
                    if (cond:21_1)
                        goto label_1400e7b3a
                    
                    goto label_1400e7bf6
            else
            label_1400e7b22:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm6, zmm2, 0x32), 0x84)
                
                if (cond:17_1)
                    goto label_1400e7bec
            
            bool cond:24_1
            bool cond:25_1
            bool cond:28_1
            bool cond:29_1
            
            if (not(cond:20_1))
            label_1400e7b3a:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x32), 0x84)
                char temp12_1 = temp0_78 & 8
                cond:24_1 = temp12_1 == 0
                cond:25_1 = temp12_1 != 0
                cond:28_1 = temp12_1 == 0
                cond:29_1 = temp12_1 != 0
                
                if (temp12_1 != 0)
                    goto label_1400e7c08
                
                goto label_1400e7b48
            
        label_1400e7bf6:
            char temp11_1 = temp0_78 & 8
            cond:24_1 = temp11_1 == 0
            cond:25_1 = temp11_1 != 0
            cond:28_1 = temp11_1 == 0
            cond:29_1 = temp11_1 != 0
            
            if (temp11_1 != 0)
            label_1400e7c08:
                var_268_1 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm6, zmm2, 0x23), 0x24)
                
                if (cond:25_1)
                    goto label_1400e7b5c
                
                goto label_1400e7c12
            
        label_1400e7b48:
            var_268_1 = zmm2
            
            if (cond:24_1)
            label_1400e7c12:
                zmm7 = zmm1
                
                if (not(cond:28_1))
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x23), 0x24)
            else
            label_1400e7b5c:
                zmm7 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x23), 0x24)
                
                if (cond:29_1)
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x23), 0x24)
            
            zmm0 = _mm_and_ps(_mm_add_ps(temp0_76, var_258_1), zmm9)
            zmm8 = zmm3
            var_258_1 = _mm_or_ps(_mm_andnot_ps(zmm9, var_258_1), zmm0)
            rsi += 4
            rax_1 += 0x30
            
            if (rsi s>= r10_4)
                break
    
    r14 = arg7
    r10_5 = arg6
    
    if (rsi s< arg8)
        goto label_1400e7cb8
    
    zmm5 = var_258_1
zmm1 = var_268_1
float temp0_237[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm1, zmm1[0].q), zmm1)
float temp0_238[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0xe5)
temp0_238[0] = temp0_238[0] + temp0_237[0]
float temp0_240[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm7, zmm7[0].q), zmm7)
float temp0_241[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 0xe5)
temp0_241[0] = temp0_241[0] + temp0_240[0]
float temp0_242[0x4] = _mm_unpacklo_ps(temp0_238, temp0_241[0].q)
float temp0_244[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm8, zmm8[0].q), zmm8)
float temp0_245[0x4] = _mm_shuffle_ps(temp0_244, temp0_244, 0xe5)
temp0_245[0] = temp0_245[0] + temp0_244[0]
float temp0_246[0x4] =
    _mm_add_ps(zx.o(*r14)[0].q | r14[1].d[0].q << 0x40, temp0_242[0].q | temp0_245[0].q << 0x40)
*r14 = temp0_246[0]
float temp0_247[0x4] = _mm_shuffle_ps(temp0_246, temp0_246, 0xe5)
temp0_246[0].q = temp0_246 u>> 0x40
*(r14 + 4) = temp0_247[0]
r14[1].d = temp0_246[0]
float result[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm5, 0xee), zmm5)
float temp0_249[0x4] = _mm_shuffle_ps(result, result, 0xe5)
temp0_249[0] = temp0_249[0] + result[0]
temp0_249[0] = temp0_249[0] f+ *r10_5
*r10_5 = temp0_249[0]
return result
