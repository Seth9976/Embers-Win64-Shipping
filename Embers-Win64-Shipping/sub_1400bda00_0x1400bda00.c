// 函数: sub_1400bda00
// 地址: 0x1400bda00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_48[0x4] = zmm15
float zmm14[0x4]
float var_58[0x4] = zmm14
float zmm13[0x4]
float var_68[0x4] = zmm13
float zmm9[0x4]
float var_a8[0x4] = zmm9
float zmm8[0x4]
float var_b8[0x4] = zmm8
float zmm7[0x4]
float var_c8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_d8[0x4] = zmm6
float zmm0[0x4] = arg5
int32_t r10_4 = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
float* r10_5
int64_t* r14
float zmm3[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float var_288[0x4]
int32_t rsi
float zmm1[0x4]
float zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (r10_4 s<= 0)
    rsi = 0
    zmm10 = zx.o(0)
    zmm12 = zx.o(0)
    zmm11 = zx.o(0)
    var_288 = zx.o(0)
    r14 = arg7
    r10_5 = arg6
    
    if (0 s>= arg8)
        zmm3 = var_288
    else
    label_1400bdedc:
        zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rsi), 0), data_142e11d00)
        zmm8 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm1)
        zmm1 = __pmulld_xmmdq_memdq(zmm1, data_142fc95c0) & zmm8
        int64_t rax_3 = sx.q(zmm1[0])
        void* rbx_1 = &(*arg4)[rax_3]
        zmm0 = (*arg4)[rax_3]
        int64_t rdi_4 = sx.q(_mm_extract_epi32(zmm1, 1))
        void* r11_1 = &(*arg4)[rdi_4]
        int64_t rsi_1 = sx.q(_mm_extract_epi32(zmm1, 2))
        void* r15_1 = &(*arg4)[rsi_1]
        int64_t rax_7 = sx.q(_mm_extract_epi32(zmm1, 3))
        void* r12_1 = &(*arg4)[rax_7]
        float temp0_102[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm0, (*arg4)[rdi_4], 0x10), 
                (*arg4)[rsi_1], 0x20), 
            (*arg4)[rax_7], 0x30)
        zmm2 = data_142fc95e0 & zmm8
        zmm1 = *(zx.q(zmm2[0]) + rbx_1)
        uint64_t rax_9 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t rdi_5 = zx.q(_mm_extract_epi32(zmm2, 2))
        uint64_t rsi_2 = zx.q(_mm_extract_epi32(zmm2, 3))
        float temp0_108[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm1, *(rax_9 + r11_1), 0x10), 
                *(rdi_5 + r15_1), 0x20), 
            *(rsi_2 + r12_1), 0x30)
        zmm2 = data_142fc95f0 & zmm8
        zmm3 = *(zx.q(zmm2[0]) + rbx_1)
        uint64_t rax_11 = zx.q(_mm_extract_epi32(zmm2, 1))
        uint64_t rbx_2 = zx.q(_mm_extract_epi32(zmm2, 2))
        int32_t* rdi_6 = zx.q(_mm_extract_epi32(zmm2, 3))
        float temp0_114[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm3, *(rax_11 + r11_1), 0x10), 
                *(rbx_2 + r15_1), 0x20), 
            *(rdi_6 + r12_1), 0x30)
        zmm9 = zx.o(0)
        zmm4 = *(arg3 + 0xc)
        float temp0_115[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        float var_158_2[0x4] = temp0_115
        float var_148_2[0x4] = temp0_115
        float var_138_2[0x4] = temp0_115
        float var_128_2[0x4] = temp0_115
        zmm5 = *arg3
        zmm7 = *(arg3 + 4)
        zmm6 = *(arg3 + 8)
        float temp0_116[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_117[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_118[0x4] = _mm_mul_ps(temp0_108, temp0_117)
        float temp0_119[0x4] = _mm_mul_ps(temp0_117, temp0_114)
        float temp0_120[0x4] = _mm_mul_ps(temp0_114, temp0_116)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_122[0x4] = _mm_mul_ps(temp0_116, temp0_102)
        float temp0_123[0x4] = _mm_mul_ps(temp0_102, zmm6)
        float temp0_124[0x4] = _mm_mul_ps(zmm9, temp0_115)
        float temp0_126[0x4] = _mm_sub_ps(temp0_120, _mm_mul_ps(zmm6, temp0_108))
        float temp0_127[0x4] = _mm_sub_ps(temp0_123, temp0_119)
        float temp0_128[0x4] = _mm_sub_ps(temp0_118, temp0_122)
        float temp0_129[0x4] = _mm_sub_ps(temp0_124, temp0_124)
        float temp0_130[0x4] = _mm_add_ps(temp0_126, temp0_126)
        float temp0_131[0x4] = _mm_add_ps(temp0_127, temp0_127)
        float temp0_132[0x4] = _mm_add_ps(temp0_128, temp0_128)
        float temp0_133[0x4] = _mm_add_ps(temp0_129, temp0_129)
        float var_278_2[0x4] = temp0_130
        float var_268_2[0x4] = temp0_131
        float var_258_2[0x4] = temp0_132
        float var_248_2[0x4] = temp0_133
        float temp0_134[0x4] = _mm_mul_ps(temp0_133, temp0_115)
        float temp0_135[0x4] = _mm_mul_ps(temp0_115, temp0_130)
        float temp0_136[0x4] = _mm_mul_ps(temp0_115, temp0_131)
        float temp0_137[0x4] = _mm_mul_ps(temp0_115, temp0_132)
        float temp0_138[0x4] = __addps_xmmps_memps(temp0_135, temp0_102)
        float temp0_139[0x4] = __addps_xmmps_memps(temp0_136, temp0_108)
        float temp0_140[0x4] = __addps_xmmps_memps(temp0_137, temp0_114)
        float temp0_141[0x4] = __addps_xmmps_memps(temp0_134, zmm9)
        float var_118_1[0x4] = temp0_138
        float var_108_1[0x4] = temp0_139
        float var_f8_1[0x4] = temp0_140
        zmm6 = *arg3
        zmm1 = *(arg3 + 4)
        zmm5 = *(arg3 + 8)
        float temp0_142[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_144[0x4] = _mm_mul_ps(temp0_131, zmm6)
        zmm6 = _mm_mul_ps(zmm6, temp0_132)
        float temp0_146[0x4] = _mm_mul_ps(temp0_132, temp0_142)
        float temp0_147[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_148[0x4] = _mm_mul_ps(temp0_142, temp0_130)
        float temp0_149[0x4] = _mm_mul_ps(temp0_130, temp0_147)
        float temp0_151[0x4] = _mm_sub_ps(temp0_146, _mm_mul_ps(temp0_147, temp0_131))
        float temp0_152[0x4] = _mm_sub_ps(temp0_149, zmm6)
        float temp0_153[0x4] = _mm_sub_ps(temp0_144, temp0_148)
        float temp0_154[0x4] = _mm_add_ps(temp0_151, temp0_138)
        float temp0_155[0x4] = _mm_add_ps(temp0_152, temp0_139)
        float temp0_156[0x4] = _mm_add_ps(temp0_153, temp0_140)
        zmm6 = arg3[1].d
        zmm1 = *(arg3 + 0x14)
        zmm6 = _mm_add_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_154)
        float temp0_160[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_155)
        zmm13 = *(arg3 + 0x18)
        float temp0_162[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_156)
        zmm0 = *arg2
        zmm2 = *(arg2 + 4)
        float temp0_164[0x4] = _mm_sub_ps(zmm6, _mm_shuffle_ps(zmm0, zmm0, 0))
        float temp0_166[0x4] = _mm_sub_ps(temp0_160, _mm_shuffle_ps(zmm2, zmm2, 0))
        zmm2 = *(arg2 + 8)
        float temp0_168[0x4] = _mm_sub_ps(temp0_162, _mm_shuffle_ps(zmm2, zmm2, 0))
        zmm2 = *arg1
        zmm3 = (*arg1)[1]
        float temp0_170[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_164)
        float temp0_173[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_166), temp0_170)
        zmm5 = (*arg1)[2]
        zmm0 = arg5
        float temp0_178[0x4] = _mm_sub_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_168), temp0_173), 
            _mm_shuffle_ps(zmm0, zmm0, 0))
        float var_e8_1[0x4] = temp0_141
        zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_178, data_142fc95d0, 1), zmm8)
        char temp0_181 = _mm_movemask_ps(zmm0)
        
        if (temp0_181 == 0)
            zmm3 = var_288
        else
            zmm6 = _mm_mul_ps(zmm6, temp0_178)
            zmm2 = zmm11
            char temp1_1 = temp0_181 & 1
            
            if (temp1_1 != 0)
                zmm2 = zmm11
                zmm2[0] = zmm2[0] f+ zmm6[0]
                zmm1 = _mm_mul_ps(temp0_160, temp0_178)
                zmm7 = zmm12
                
                if (temp1_1 != 0)
                    goto label_1400be36a
                
                goto label_1400be1f8
            
            zmm1 = _mm_mul_ps(temp0_160, temp0_178)
            zmm7 = zmm12
            
            if (temp1_1 != 0)
            label_1400be36a:
                zmm7 = zmm12
                zmm7[0] = zmm7[0] + zmm1[0]
                zmm13 = _mm_mul_ps(temp0_162, temp0_178)
                zmm4 = zmm10
                
                if (temp1_1 != 0)
                    goto label_1400be206
                
                goto label_1400be380
            
        label_1400be1f8:
            zmm13 = _mm_mul_ps(temp0_162, temp0_178)
            zmm4 = zmm10
            bool cond:10_1
            bool cond:11_1
            bool cond:14_1
            bool cond:15_1
            
            if (temp1_1 != 0)
            label_1400be206:
                zmm4 = zmm10
                zmm4[0] = zmm4[0] + zmm13[0]
                zmm11 = _mm_add_ps(zmm11, zmm6)
                char temp4_1 = temp0_181 & 2
                cond:10_1 = temp4_1 == 0
                cond:11_1 = temp4_1 != 0
                cond:14_1 = temp4_1 == 0
                cond:15_1 = temp4_1 != 0
                zmm3 = var_288
                
                if (temp4_1 != 0)
                    goto label_1400be391
                
                goto label_1400be220
            
        label_1400be380:
            zmm11 = _mm_add_ps(zmm11, zmm6)
            char temp3_1 = temp0_181 & 2
            cond:10_1 = temp3_1 == 0
            cond:11_1 = temp3_1 != 0
            cond:14_1 = temp3_1 == 0
            cond:15_1 = temp3_1 != 0
            zmm3 = var_288
            
            if (temp3_1 != 0)
            label_1400be391:
                zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
                zmm12 = _mm_add_ps(zmm12, zmm1)
                
                if (cond:11_1)
                    goto label_1400be22a
                
                goto label_1400be3a2
            
        label_1400be220:
            zmm12 = _mm_add_ps(zmm12, zmm1)
            
            if (not(cond:10_1))
            label_1400be22a:
                zmm7 = _mm_blend_ps(zmm7, zmm12, 2)
                zmm10 = _mm_add_ps(zmm10, zmm13)
                
                if (cond:15_1)
                    goto label_1400be3ac
                
                goto label_1400be23b
            
        label_1400be3a2:
            zmm10 = _mm_add_ps(zmm10, zmm13)
            bool cond:18_1
            bool cond:19_1
            bool cond:22_1
            bool cond:23_1
            
            if (not(cond:14_1))
            label_1400be3ac:
                zmm4 = _mm_blend_ps(zmm4, zmm10, 2)
                char temp8_1 = temp0_181 & 4
                cond:18_1 = temp8_1 == 0
                cond:19_1 = temp8_1 != 0
                cond:22_1 = temp8_1 == 0
                cond:23_1 = temp8_1 != 0
                
                if (temp8_1 != 0)
                    goto label_1400be244
                
                goto label_1400be3bc
            
        label_1400be23b:
            char temp7_1 = temp0_181 & 4
            cond:18_1 = temp7_1 == 0
            cond:19_1 = temp7_1 != 0
            cond:22_1 = temp7_1 == 0
            cond:23_1 = temp7_1 != 0
            
            if (temp7_1 == 0)
            label_1400be3bc:
                
                if (not(cond:18_1))
                label_1400be3c2:
                    zmm7 = _mm_blend_ps(zmm7, zmm12, 4)
                    
                    if (cond:23_1)
                        goto label_1400be257
                    
                    goto label_1400be3cf
            else
            label_1400be244:
                zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
                
                if (cond:19_1)
                    goto label_1400be3c2
            
            bool cond:26_1
            bool cond:27_1
            bool cond:30_1
            bool cond:31_1
            
            if (not(cond:22_1))
            label_1400be257:
                zmm4 = _mm_blend_ps(zmm4, zmm10, 4)
                char temp12_1 = temp0_181 & 8
                cond:26_1 = temp12_1 == 0
                cond:27_1 = temp12_1 != 0
                cond:30_1 = temp12_1 != 0
                cond:31_1 = temp12_1 == 0
                
                if (temp12_1 != 0)
                    goto label_1400be3d8
                
                goto label_1400be267
            
        label_1400be3cf:
            char temp11_1 = temp0_181 & 8
            cond:26_1 = temp11_1 == 0
            cond:27_1 = temp11_1 != 0
            cond:30_1 = temp11_1 != 0
            cond:31_1 = temp11_1 == 0
            
            if (temp11_1 != 0)
            label_1400be3d8:
                zmm11 = _mm_blend_ps(zmm11, zmm2, 7)
                
                if (cond:27_1)
                    goto label_1400be271
                
                goto label_1400be3e5
            
        label_1400be267:
            zmm11 = zmm2
            
            if (cond:26_1)
            label_1400be3e5:
                zmm12 = zmm7
                
                if (cond:30_1)
                    zmm4 = _mm_blend_ps(zmm4, zmm10, 8)
            else
            label_1400be271:
                zmm12 = _mm_blend_ps(zmm12, zmm7, 7)
                
                if (not(cond:31_1))
                    zmm4 = _mm_blend_ps(zmm4, zmm10, 8)
            
            zmm3 = _mm_blendv_ps(zmm3, _mm_add_ps(temp0_178, zmm3), zmm0)
            zmm10 = zmm4
else
    zmm8 = *(arg3 + 0xc)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float var_1a8_1[0x4] = *arg3
    float var_1b8_1[0x4] = *(arg3 + 4)
    float var_1c8_1[0x4] = *(arg3 + 8)
    zmm1 = *arg2
    zmm2 = *(arg2 + 4)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm1 = *(arg2 + 8)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm1 = *arg1
    zmm2 = (*arg1)[1]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm1 = (*arg1)[2]
    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    int32_t rax_1 = 0
    rsi = 0
    var_288 = zx.o(0)
    zmm11 = zx.o(0)
    zmm12 = zx.o(0)
    zmm10 = zx.o(0)
    
    do
        int64_t rdi_1 = sx.q(rax_1)
        zmm0 = *(arg4 + rdi_1)
        zmm5 = *(arg4 + rdi_1 + 0x10)
        zmm3 = *(arg4 + rdi_1 + 0x20)
        zmm4 = _mm_shuffle_epi32(zmm0, 0xe5)
        uint32_t temp0_19[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
        float temp0_20[0x4] = _mm_shuffle_ps(zmm0, zmm5, 0xec)
        zmm1 = _mm_blend_epi16(_mm_shuffle_epi32(zmm3, 0x44), temp0_20, 0x3f)
        zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm5, 0xf0), zmm4, 3)
        zmm2 = _mm_blend_epi16(_mm_shuffle_epi32(zmm3, 0xa4), zmm0, 0x3f)
        zmm6 = _mm_shuffle_ps(_mm_blend_epi16(temp0_19, zmm5, 0xc), zmm3, 0xc4)
        uint32_t var_258_1[0x4] = zmm6
        int128_t var_248_1 = zx.o(0)
        float temp0_29[0x4] = _mm_shuffle_ps(var_1b8_1, var_1b8_1, 0)
        float temp0_30[0x4] = _mm_mul_ps(temp0_29, zmm6)
        float temp0_31[0x4] = _mm_shuffle_ps(var_1c8_1, var_1c8_1, 0)
        float temp0_32[0x4] = _mm_mul_ps(temp0_31, zmm1)
        float temp0_33[0x4] = _mm_shuffle_ps(var_1a8_1, var_1a8_1, 0)
        float temp0_34[0x4] = _mm_mul_ps(temp0_33, zmm2)
        float temp0_36[0x4] = _mm_sub_ps(temp0_30, _mm_mul_ps(zmm2, temp0_31))
        float temp0_38[0x4] = _mm_sub_ps(temp0_32, _mm_mul_ps(zmm6, temp0_33))
        float temp0_40[0x4] = _mm_sub_ps(temp0_34, _mm_mul_ps(zmm1, temp0_29))
        float temp0_41[0x4] = _mm_add_ps(temp0_36, temp0_36)
        float temp0_42[0x4] = _mm_add_ps(temp0_38, temp0_38)
        float temp0_43[0x4] = _mm_add_ps(temp0_40, temp0_40)
        float temp0_44[0x4] = _mm_mul_ps(temp0_1, temp0_42)
        zmm6 = _mm_mul_ps(temp0_41, temp0_31)
        float temp0_46[0x4] = _mm_mul_ps(temp0_42, temp0_31)
        float temp0_51[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_43, temp0_29), temp0_46), 
            __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_41), zmm1))
        float temp0_52[0x4] = _mm_mul_ps(temp0_1, temp0_43)
        float temp0_53[0x4] = _mm_mul_ps(temp0_42, temp0_33)
        float temp0_54[0x4] = _mm_mul_ps(temp0_43, temp0_33)
        float temp0_55[0x4] = __addps_xmmps_memps(temp0_44, zmm2)
        zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, temp0_54), temp0_55)
        float temp0_58[0x4] = _mm_mul_ps(temp0_41, temp0_29)
        float var_158_1[0x4] = temp0_1
        float var_148_1[0x4] = temp0_1
        float var_138_1[0x4] = temp0_1
        float temp0_59[0x4] = __addps_xmmps_memps(temp0_52, var_258_1)
        float var_128_1[0x4] = temp0_1
        float temp0_61[0x4] = _mm_add_ps(_mm_sub_ps(temp0_53, temp0_58), temp0_59)
        zmm15 = arg3[1].d
        zmm14 = *(arg3 + 0x14)
        float temp0_63[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_51)
        float temp0_65[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm6)
        zmm13 = *(arg3 + 0x18)
        float temp0_67[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_61)
        float temp0_69[0x4] = __mulps_xmmps_memps(__subps_xmmps_memps(temp0_63, temp0_2), temp0_5)
        float temp0_72[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(__subps_xmmps_memps(temp0_65, temp0_3), temp0_6), temp0_69)
        float temp0_76[0x4] = __subps_xmmps_memps(
            _mm_add_ps(__mulps_xmmps_memps(__subps_xmmps_memps(temp0_67, temp0_4), temp0_7), 
                temp0_72), 
            temp0_8)
        float temp0_77[0x4] = __cmpps_xmmps_memps_immb(temp0_76, data_142fc95d0, 1)
        char temp0_78 = _mm_movemask_ps(temp0_77)
        
        if (temp0_78 != 0)
            float temp0_79[0x4] = _mm_mul_ps(temp0_63, temp0_76)
            zmm2 = zmm11
            char temp2_1 = temp0_78 & 1
            
            if (temp2_1 != 0)
                zmm2 = zmm11
                zmm2[0] = zmm2[0] + temp0_79[0]
                zmm14 = _mm_mul_ps(temp0_65, temp0_76)
                zmm3 = zmm12
                
                if (temp2_1 != 0)
                    goto label_1400bdb5e
                
                goto label_1400bdddd
            
            zmm14 = _mm_mul_ps(temp0_65, temp0_76)
            zmm3 = zmm12
            
            if (temp2_1 != 0)
            label_1400bdb5e:
                zmm3 = zmm12
                zmm3[0] = zmm3[0] + zmm14[0]
                zmm13 = _mm_mul_ps(temp0_67, temp0_76)
                zmm4 = zmm10
                
                if (temp2_1 != 0)
                    goto label_1400bddeb
                
                goto label_1400bdb75
            
        label_1400bdddd:
            zmm13 = _mm_mul_ps(temp0_67, temp0_76)
            zmm4 = zmm10
            bool cond:12_1
            bool cond:13_1
            bool cond:16_1
            bool cond:17_1
            
            if (temp2_1 != 0)
            label_1400bddeb:
                zmm4 = zmm10
                zmm4[0] = zmm4[0] + zmm13[0]
                zmm11 = _mm_add_ps(zmm11, temp0_79)
                char temp6_1 = temp0_78 & 2
                cond:12_1 = temp6_1 == 0
                cond:13_1 = temp6_1 != 0
                cond:16_1 = temp6_1 == 0
                cond:17_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                    goto label_1400bdb83
                
                goto label_1400bde02
            
        label_1400bdb75:
            zmm11 = _mm_add_ps(zmm11, temp0_79)
            char temp5_1 = temp0_78 & 2
            cond:12_1 = temp5_1 == 0
            cond:13_1 = temp5_1 != 0
            cond:16_1 = temp5_1 == 0
            cond:17_1 = temp5_1 != 0
            
            if (temp5_1 != 0)
            label_1400bdb83:
                zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
                zmm12 = _mm_add_ps(zmm12, zmm14)
                
                if (cond:13_1)
                    goto label_1400bde0c
                
                goto label_1400bdb94
            
        label_1400bde02:
            zmm12 = _mm_add_ps(zmm12, zmm14)
            
            if (not(cond:12_1))
            label_1400bde0c:
                zmm3 = _mm_blend_ps(zmm3, zmm12, 2)
                zmm10 = _mm_add_ps(zmm10, zmm13)
                
                if (cond:17_1)
                    goto label_1400bdb9e
                
                goto label_1400bde1d
            
        label_1400bdb94:
            zmm10 = _mm_add_ps(zmm10, zmm13)
            bool cond:20_1
            bool cond:21_1
            bool cond:24_1
            bool cond:25_1
            
            if (not(cond:16_1))
            label_1400bdb9e:
                zmm4 = _mm_blend_ps(zmm4, zmm10, 2)
                char temp10_1 = temp0_78 & 4
                cond:20_1 = temp10_1 == 0
                cond:21_1 = temp10_1 != 0
                cond:24_1 = temp10_1 == 0
                cond:25_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                    goto label_1400bde27
                
                goto label_1400bdbaf
            
        label_1400bde1d:
            char temp9_1 = temp0_78 & 4
            cond:20_1 = temp9_1 == 0
            cond:21_1 = temp9_1 != 0
            cond:24_1 = temp9_1 == 0
            cond:25_1 = temp9_1 != 0
            
            if (temp9_1 == 0)
            label_1400bdbaf:
                
                if (not(cond:20_1))
                label_1400bdbb5:
                    zmm3 = _mm_blend_ps(zmm3, zmm12, 4)
                    
                    if (cond:25_1)
                        goto label_1400bde3a
                    
                    goto label_1400bdbc2
            else
            label_1400bde27:
                zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
                
                if (cond:21_1)
                    goto label_1400bdbb5
            
            bool cond:28_1
            bool cond:29_1
            bool cond:32_1
            bool cond:33_1
            
            if (not(cond:24_1))
            label_1400bde3a:
                zmm4 = _mm_blend_ps(zmm4, zmm10, 4)
                char temp14_1 = temp0_78 & 8
                cond:28_1 = temp14_1 == 0
                cond:29_1 = temp14_1 != 0
                cond:32_1 = temp14_1 != 0
                cond:33_1 = temp14_1 == 0
                
                if (temp14_1 != 0)
                    goto label_1400bdbcc
                
                goto label_1400bde4b
            
        label_1400bdbc2:
            char temp13_1 = temp0_78 & 8
            cond:28_1 = temp13_1 == 0
            cond:29_1 = temp13_1 != 0
            cond:32_1 = temp13_1 != 0
            cond:33_1 = temp13_1 == 0
            
            if (temp13_1 != 0)
            label_1400bdbcc:
                zmm11 = _mm_blend_ps(zmm11, zmm2, 7)
                
                if (cond:29_1)
                    goto label_1400bde55
                
                goto label_1400bdbd9
            
        label_1400bde4b:
            zmm11 = zmm2
            
            if (cond:28_1)
            label_1400bdbd9:
                zmm12 = zmm3
                
                if (cond:32_1)
                    zmm4 = _mm_blend_ps(zmm4, zmm10, 8)
            else
            label_1400bde55:
                zmm12 = _mm_blend_ps(zmm12, zmm3, 7)
                
                if (not(cond:33_1))
                    zmm4 = _mm_blend_ps(zmm4, zmm10, 8)
            
            var_288 = _mm_blendv_ps(var_288, _mm_add_ps(temp0_76, var_288), temp0_77)
            zmm10 = zmm4
        
        rsi += 4
        rax_1 += 0x30
    while (rsi s< r10_4)
    
    r14 = arg7
    r10_5 = arg6
    
    if (rsi s< arg8)
        goto label_1400bdedc
    
    zmm3 = var_288
float temp0_195[0x4] = _mm_hadd_ps(zmm11, zmm11)
float temp0_196[0x4] = _mm_hadd_ps(temp0_195, temp0_195)
float temp0_197[0x4] = _mm_hadd_ps(zmm12, zmm12)
float temp0_199[0x4] = _mm_insert_ps(temp0_196, _mm_hadd_ps(temp0_197, temp0_197), 0x1c)
float temp0_200[0x4] = _mm_hadd_ps(zmm10, zmm10)
float temp0_201[0x4] = _mm_hadd_ps(temp0_200, temp0_200)
float result[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*r14), r14[1].d, 0x20), 
    temp0_199[0].q | temp0_201[0].q << 0x40)
*r14 = result[0]
*(r14 + 4) = __extractps_memd_xmmps_immb(result, 1)
r14[1].d = __extractps_memd_xmmps_immb(result, 2)
float temp0_205[0x4] = _mm_hadd_ps(zmm3, zmm3)
float temp0_206[0x4] = _mm_hadd_ps(temp0_205, temp0_205)
temp0_206[0] = temp0_206[0] + *r10_5
*r10_5 = temp0_206[0]
return result
