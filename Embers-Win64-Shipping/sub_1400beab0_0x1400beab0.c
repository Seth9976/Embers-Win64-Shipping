// 函数: sub_1400beab0
// 地址: 0x1400beab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm14[0x4]
float var_58[0x4] = zmm14
float zmm13[0x4]
float var_68[0x4] = zmm13
float zmm10[0x4]
float var_98[0x4] = zmm10
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
int32_t* r10_5
int64_t* r14
float zmm2[0x4]
float zmm11[0x4]
uint32_t zmm12[0x4]
float zmm15[0x4]
float var_268[0x4]
int32_t rsi
float zmm1[0x4]
uint32_t zmm3[0x4]
float zmm4[0x4]
uint32_t zmm5[0x4]

if (r10_4 s<= 0)
    rsi = 0
    zmm11 = zx.o(0)
    zmm12 = zx.o(0)
    zmm15 = zx.o(0)
    var_268 = zx.o(0)
    r14 = arg7
    r10_5 = arg6
    
    if (0 s>= arg8)
        zmm2 = var_268
    else
    label_1400bef9b:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rsi), 0), data_142e11d00)
        zmm8 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm0)
        zmm0 = __pmulld_xmmdq_memdq(zmm0, data_142fc95c0) & zmm8
        int64_t rax_3 = sx.q(zmm0[0])
        void* rbx_1 = &(*arg4)[rax_3]
        zmm1 = (*arg4)[rax_3]
        int64_t rdi_4 = sx.q(_mm_extract_epi32(zmm0, 1))
        void* r11_1 = &(*arg4)[rdi_4]
        int64_t rsi_1 = sx.q(_mm_extract_epi32(zmm0, 2))
        void* r15_1 = &(*arg4)[rsi_1]
        int64_t rax_7 = sx.q(_mm_extract_epi32(zmm0, 3))
        void* r12_1 = &(*arg4)[rax_7]
        float temp0_112[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm1, (*arg4)[rdi_4], 0x10), 
                (*arg4)[rsi_1], 0x20), 
            (*arg4)[rax_7], 0x30)
        zmm0 = data_142fc95e0 & zmm8
        zmm2 = *(zx.q(zmm0[0]) + rbx_1)
        uint64_t rax_9 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdi_5 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint64_t rsi_2 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_118[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm2, *(rax_9 + r11_1), 0x10), 
                *(rdi_5 + r15_1), 0x20), 
            *(rsi_2 + r12_1), 0x30)
        zmm0 = data_142fc95f0 & zmm8
        zmm4 = *(zx.q(zmm0[0]) + rbx_1)
        uint64_t rax_11 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rbx_2 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rdi_6 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_124[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rax_11 + r11_1), 0x10), 
                *(rbx_2 + r15_1), 0x20), 
            *(rdi_6 + r12_1), 0x30)
        zmm10 = zx.o(0)
        zmm5 = *(arg3 + 0xc)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        uint32_t var_158_2[0x4] = zmm5
        uint32_t var_148_2[0x4] = zmm5
        uint32_t var_138_2[0x4] = zmm5
        uint32_t var_128_2[0x4] = zmm5
        zmm0 = *arg3
        zmm7 = *(arg3 + 4)
        zmm6 = *(arg3 + 8)
        float temp0_126[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_127[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        zmm3 = _mm_mul_ps(temp0_118, temp0_127)
        float temp0_129[0x4] = _mm_mul_ps(temp0_127, temp0_124)
        float temp0_130[0x4] = _mm_mul_ps(temp0_124, temp0_126)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_132[0x4] = _mm_mul_ps(temp0_126, temp0_112)
        float temp0_133[0x4] = _mm_mul_ps(temp0_112, zmm6)
        float temp0_134[0x4] = _mm_mul_ps(zmm5, zmm10)
        float temp0_136[0x4] = _mm_sub_ps(temp0_130, _mm_mul_ps(zmm6, temp0_118))
        float temp0_137[0x4] = _mm_sub_ps(temp0_133, temp0_129)
        zmm3 = _mm_sub_ps(zmm3, temp0_132)
        float temp0_139[0x4] = _mm_sub_ps(temp0_134, temp0_134)
        float temp0_140[0x4] = _mm_add_ps(temp0_136, temp0_136)
        float temp0_141[0x4] = _mm_add_ps(temp0_137, temp0_137)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        float temp0_143[0x4] = _mm_add_ps(temp0_139, temp0_139)
        float var_258_2[0x4] = temp0_140
        float var_248_2[0x4] = temp0_141
        uint32_t var_238_2[0x4] = zmm3
        float var_228_2[0x4] = temp0_143
        float temp0_144[0x4] = _mm_mul_ps(zmm5, temp0_140)
        float temp0_145[0x4] = _mm_mul_ps(zmm5, temp0_141)
        float temp0_146[0x4] = _mm_mul_ps(zmm5, zmm3)
        float temp0_147[0x4] = __addps_xmmps_memps(temp0_144, temp0_112)
        float temp0_148[0x4] = __addps_xmmps_memps(temp0_145, temp0_118)
        float temp0_149[0x4] = __addps_xmmps_memps(temp0_146, temp0_124)
        float temp0_151[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_143, zmm5), zmm10)
        float var_118_1[0x4] = temp0_147
        float var_108_1[0x4] = temp0_148
        float var_f8_1[0x4] = temp0_149
        zmm6 = *arg3
        zmm2 = *(arg3 + 4)
        zmm7 = *(arg3 + 8)
        float temp0_152[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm5 = _mm_mul_ps(temp0_141, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm3)
        zmm3 = _mm_mul_ps(zmm3, temp0_152)
        float temp0_157[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_158[0x4] = _mm_mul_ps(temp0_152, temp0_140)
        float temp0_159[0x4] = _mm_mul_ps(temp0_140, temp0_157)
        zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(temp0_157, temp0_141))
        float temp0_162[0x4] = _mm_sub_ps(temp0_159, zmm6)
        zmm5 = _mm_sub_ps(zmm5, temp0_158)
        zmm3 = _mm_add_ps(zmm3, temp0_147)
        float temp0_165[0x4] = _mm_add_ps(temp0_162, temp0_148)
        zmm5 = _mm_add_ps(zmm5, temp0_149)
        zmm2 = arg3[1].d
        zmm1 = *(arg3 + 0x14)
        float temp0_168[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
        float temp0_170[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_165)
        zmm7 = *(arg3 + 0x18)
        float temp0_172[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm5)
        zmm9 = *arg1
        zmm0 = *arg2
        zmm3 = (*arg2)[1]
        float temp0_174[0x4] = _mm_sub_ps(temp0_168, _mm_shuffle_ps(zmm0, zmm0, 0))
        float temp0_176[0x4] = _mm_sub_ps(temp0_170, _mm_shuffle_ps(zmm3, zmm3, 0))
        zmm3 = (*arg2)[2]
        zmm5 = _mm_sub_ps(temp0_172, _mm_shuffle_ps(zmm3, zmm3, 0))
        float temp0_180[0x4] = _mm_add_ps(_mm_mul_ps(temp0_174, temp0_174), zmm10)
        float temp0_182[0x4] = _mm_add_ps(_mm_mul_ps(temp0_176, temp0_176), temp0_180)
        zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm5), temp0_182)
        float temp0_185[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_186[0x4] = _mm_rsqrt_ps(zmm5)
        zmm5 = _mm_mul_ps(_mm_mul_ps(zmm5, temp0_186), temp0_186)
        zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), temp0_186), 
            data_142d3f640)
        float temp0_192[0x4] = _mm_rcp_ps(zmm3)
        zmm3 = _mm_mul_ps(zmm3, temp0_192)
        zmm0 = arg5
        float temp0_198[0x4] = _mm_sub_ps(
            _mm_sub_ps(temp0_185, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), temp0_192)), 
            _mm_shuffle_ps(zmm0, zmm0, 0))
        float var_e8_1[0x4] = temp0_151
        zmm0 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_198, data_142fc95d0, 1), zmm8)
        char temp0_201 = _mm_movemask_ps(zmm0)
        
        if (temp0_201 == 0)
            zmm2 = var_268
        else
            float temp0_202[0x4] = _mm_mul_ps(temp0_168, temp0_198)
            zmm5 = zmm15
            char temp1_1 = temp0_201 & 1
            
            if (temp1_1 != 0)
                zmm5 = zmm15
                zmm5[0] = zmm5[0] f+ temp0_202[0]
                zmm1 = _mm_mul_ps(temp0_170, temp0_198)
                zmm3 = zmm12
                
                if (temp1_1 != 0)
                    goto label_1400bf45b
                
                goto label_1400bf2e7
            
            zmm1 = _mm_mul_ps(temp0_170, temp0_198)
            zmm3 = zmm12
            
            if (temp1_1 != 0)
            label_1400bf45b:
                zmm3 = zmm12
                zmm3[0] = zmm3[0] f+ zmm1[0]
                zmm7 = _mm_mul_ps(temp0_172, temp0_198)
                zmm4 = zmm11
                
                if (temp1_1 != 0)
                    goto label_1400bf2f5
                
                goto label_1400bf471
            
        label_1400bf2e7:
            zmm7 = _mm_mul_ps(temp0_172, temp0_198)
            zmm4 = zmm11
            bool cond:10_1
            bool cond:11_1
            bool cond:14_1
            bool cond:15_1
            
            if (temp1_1 != 0)
            label_1400bf2f5:
                zmm4 = zmm11
                zmm4[0] = zmm4[0] + zmm7[0]
                zmm15 = _mm_add_ps(zmm15, temp0_202)
                char temp4_1 = temp0_201 & 2
                cond:10_1 = temp4_1 == 0
                cond:11_1 = temp4_1 != 0
                cond:14_1 = temp4_1 == 0
                cond:15_1 = temp4_1 != 0
                zmm2 = var_268
                
                if (temp4_1 != 0)
                    goto label_1400bf482
                
                goto label_1400bf30e
            
        label_1400bf471:
            zmm15 = _mm_add_ps(zmm15, temp0_202)
            char temp3_1 = temp0_201 & 2
            cond:10_1 = temp3_1 == 0
            cond:11_1 = temp3_1 != 0
            cond:14_1 = temp3_1 == 0
            cond:15_1 = temp3_1 != 0
            zmm2 = var_268
            
            if (temp3_1 != 0)
            label_1400bf482:
                zmm5 = _mm_blend_ps(zmm5, zmm15, 2)
                zmm12 = _mm_add_ps(zmm12, zmm1)
                
                if (cond:11_1)
                    goto label_1400bf318
                
                goto label_1400bf493
            
        label_1400bf30e:
            zmm12 = _mm_add_ps(zmm12, zmm1)
            
            if (not(cond:10_1))
            label_1400bf318:
                zmm3 = _mm_blend_ps(zmm3, zmm12, 2)
                zmm11 = _mm_add_ps(zmm11, zmm7)
                
                if (cond:15_1)
                    goto label_1400bf49d
                
                goto label_1400bf329
            
        label_1400bf493:
            zmm11 = _mm_add_ps(zmm11, zmm7)
            bool cond:18_1
            bool cond:19_1
            bool cond:22_1
            bool cond:23_1
            
            if (not(cond:14_1))
            label_1400bf49d:
                zmm4 = _mm_blend_ps(zmm4, zmm11, 2)
                char temp8_1 = temp0_201 & 4
                cond:18_1 = temp8_1 == 0
                cond:19_1 = temp8_1 != 0
                cond:22_1 = temp8_1 == 0
                cond:23_1 = temp8_1 != 0
                
                if (temp8_1 != 0)
                    goto label_1400bf332
                
                goto label_1400bf4ad
            
        label_1400bf329:
            char temp7_1 = temp0_201 & 4
            cond:18_1 = temp7_1 == 0
            cond:19_1 = temp7_1 != 0
            cond:22_1 = temp7_1 == 0
            cond:23_1 = temp7_1 != 0
            
            if (temp7_1 == 0)
            label_1400bf4ad:
                
                if (not(cond:18_1))
                label_1400bf4b3:
                    zmm3 = _mm_blend_ps(zmm3, zmm12, 4)
                    
                    if (cond:23_1)
                        goto label_1400bf345
                    
                    goto label_1400bf4c0
            else
            label_1400bf332:
                zmm5 = _mm_blend_ps(zmm5, zmm15, 4)
                
                if (cond:19_1)
                    goto label_1400bf4b3
            
            bool cond:26_1
            bool cond:27_1
            bool cond:30_1
            bool cond:31_1
            
            if (not(cond:22_1))
            label_1400bf345:
                zmm4 = _mm_blend_ps(zmm4, zmm11, 4)
                char temp12_1 = temp0_201 & 8
                cond:26_1 = temp12_1 == 0
                cond:27_1 = temp12_1 != 0
                cond:30_1 = temp12_1 != 0
                cond:31_1 = temp12_1 == 0
                
                if (temp12_1 != 0)
                    goto label_1400bf4c9
                
                goto label_1400bf355
            
        label_1400bf4c0:
            char temp11_1 = temp0_201 & 8
            cond:26_1 = temp11_1 == 0
            cond:27_1 = temp11_1 != 0
            cond:30_1 = temp11_1 != 0
            cond:31_1 = temp11_1 == 0
            
            if (temp11_1 != 0)
            label_1400bf4c9:
                zmm15 = _mm_blend_ps(zmm15, zmm5, 7)
                
                if (cond:27_1)
                    goto label_1400bf35f
                
                goto label_1400bf4d6
            
        label_1400bf355:
            zmm15 = zmm5
            
            if (cond:26_1)
            label_1400bf4d6:
                zmm12 = zmm3
                
                if (cond:30_1)
                    zmm4 = _mm_blend_ps(zmm4, zmm11, 8)
            else
            label_1400bf35f:
                zmm12 = _mm_blend_ps(zmm12, zmm3, 7)
                
                if (not(cond:31_1))
                    zmm4 = _mm_blend_ps(zmm4, zmm11, 8)
            
            zmm2 = _mm_blendv_ps(zmm2, _mm_add_ps(temp0_198, zmm2), zmm0)
            zmm11 = zmm4
else
    zmm8 = *(arg3 + 0xc)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float var_1a8_1[0x4] = *arg3
    float var_1b8_1[0x4] = *(arg3 + 4)
    float var_1c8_1[0x4] = *(arg3 + 8)
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
    var_268 = zx.o(0)
    zmm15 = zx.o(0)
    zmm12 = zx.o(0)
    zmm11 = zx.o(0)
    
    do
        int64_t rdi_1 = sx.q(rax_1)
        zmm0 = *(arg4 + rdi_1)
        zmm1 = *(arg4 + rdi_1 + 0x10)
        zmm2 = *(arg4 + rdi_1 + 0x20)
        uint32_t temp0_16[0x4] = _mm_shuffle_epi32(zmm0, 0xe5)
        uint32_t temp0_17[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
        float temp0_18[0x4] = _mm_shuffle_ps(zmm0, zmm1, 0xec)
        zmm5 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0x44), temp0_18, 0x3f)
        zmm0 = _mm_blend_epi16(_mm_shuffle_epi32(zmm1, 0xf0), temp0_16, 3)
        zmm3 = _mm_blend_epi16(_mm_shuffle_epi32(zmm2, 0xa4), zmm0, 0x3f)
        zmm6 = _mm_shuffle_ps(_mm_blend_epi16(temp0_17, zmm1, 0xc), zmm2, 0xc4)
        uint32_t var_248_1[0x4] = zmm3
        uint32_t var_238_1[0x4] = zmm6
        zmm14 = zx.o(0)
        float var_228_1[0x4] = zmm14
        float temp0_27[0x4] = _mm_shuffle_ps(var_1b8_1, var_1b8_1, 0)
        float temp0_28[0x4] = _mm_mul_ps(temp0_27, zmm6)
        float temp0_29[0x4] = _mm_shuffle_ps(var_1c8_1, var_1c8_1, 0)
        float temp0_30[0x4] = _mm_mul_ps(temp0_29, zmm5)
        float temp0_31[0x4] = _mm_shuffle_ps(var_1a8_1, var_1a8_1, 0)
        float temp0_32[0x4] = _mm_mul_ps(temp0_31, zmm3)
        float temp0_34[0x4] = _mm_sub_ps(temp0_28, _mm_mul_ps(zmm3, temp0_29))
        float temp0_36[0x4] = _mm_sub_ps(temp0_30, _mm_mul_ps(zmm6, temp0_31))
        float temp0_38[0x4] = _mm_sub_ps(temp0_32, _mm_mul_ps(zmm5, temp0_27))
        float temp0_39[0x4] = _mm_add_ps(temp0_34, temp0_34)
        float temp0_40[0x4] = _mm_add_ps(temp0_36, temp0_36)
        float temp0_41[0x4] = _mm_add_ps(temp0_38, temp0_38)
        zmm3 = _mm_mul_ps(temp0_1, temp0_40)
        zmm6 = _mm_mul_ps(temp0_39, temp0_29)
        float temp0_44[0x4] = _mm_mul_ps(temp0_40, temp0_29)
        float temp0_49[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_41, temp0_27), temp0_44), 
            __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_39), zmm5))
        float temp0_50[0x4] = _mm_mul_ps(temp0_1, temp0_41)
        zmm5 = _mm_mul_ps(temp0_40, temp0_31)
        float temp0_52[0x4] = _mm_mul_ps(temp0_41, temp0_31)
        zmm3 = __addps_xmmps_memps(zmm3, var_248_1)
        zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, temp0_52), zmm3)
        float temp0_56[0x4] = __addps_xmmps_memps(temp0_50, var_238_1)
        zmm5 = _mm_add_ps(_mm_sub_ps(zmm5, _mm_mul_ps(temp0_39, temp0_27)), temp0_56)
        zmm13 = arg3[1].d
        zmm10 = *(arg3 + 0x14)
        float temp0_61[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_49)
        float temp0_63[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm6)
        zmm9 = *(arg3 + 0x18)
        float temp0_65[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm9, zmm9, 0), zmm5)
        float temp0_66[0x4] = __subps_xmmps_memps(temp0_61, temp0_3)
        float temp0_67[0x4] = __subps_xmmps_memps(temp0_63, temp0_4)
        float temp0_68[0x4] = __subps_xmmps_memps(temp0_65, temp0_5)
        float temp0_70[0x4] = _mm_add_ps(_mm_mul_ps(temp0_66, temp0_66), zmm14)
        float temp0_72[0x4] = _mm_add_ps(_mm_mul_ps(temp0_67, temp0_67), temp0_70)
        float temp0_74[0x4] = _mm_add_ps(_mm_mul_ps(temp0_68, temp0_68), temp0_72)
        float temp0_75[0x4] = _mm_rsqrt_ps(temp0_74)
        float temp0_77[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_74, temp0_75), temp0_75)
        float temp0_80[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_77), temp0_75), data_142d3f640)
        float temp0_81[0x4] = _mm_rcp_ps(temp0_80)
        float temp0_82[0x4] = _mm_mul_ps(temp0_80, temp0_81)
        float var_158_1[0x4] = temp0_1
        float var_148_1[0x4] = temp0_1
        float var_138_1[0x4] = temp0_1
        float var_128_1[0x4] = temp0_1
        float temp0_86[0x4] = __subps_xmmps_memps(
            _mm_sub_ps(temp0_2, _mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_82), temp0_81)), 
            temp0_6)
        float temp0_87[0x4] = __cmpps_xmmps_memps_immb(temp0_86, data_142fc95d0, 1)
        char temp0_88 = _mm_movemask_ps(temp0_87)
        
        if (temp0_88 != 0)
            float temp0_89[0x4] = _mm_mul_ps(temp0_61, temp0_86)
            zmm2 = zmm15
            char temp2_1 = temp0_88 & 1
            
            if (temp2_1 != 0)
                zmm2 = zmm15
                zmm2[0] = zmm2[0] + temp0_89[0]
                zmm10 = _mm_mul_ps(temp0_63, temp0_86)
                zmm3 = zmm12
                
                if (temp2_1 != 0)
                    goto label_1400bebee
                
                goto label_1400bee9c
            
            zmm10 = _mm_mul_ps(temp0_63, temp0_86)
            zmm3 = zmm12
            
            if (temp2_1 != 0)
            label_1400bebee:
                zmm3 = zmm12
                zmm3[0] = zmm3[0] f+ zmm10[0]
                zmm9 = _mm_mul_ps(temp0_65, temp0_86)
                zmm4 = zmm11
                
                if (temp2_1 != 0)
                    goto label_1400beeaa
                
                goto label_1400bec05
            
        label_1400bee9c:
            zmm9 = _mm_mul_ps(temp0_65, temp0_86)
            zmm4 = zmm11
            bool cond:12_1
            bool cond:13_1
            bool cond:16_1
            bool cond:17_1
            
            if (temp2_1 != 0)
            label_1400beeaa:
                zmm4 = zmm11
                zmm4[0] = zmm4[0] + zmm9[0]
                zmm15 = _mm_add_ps(zmm15, temp0_89)
                char temp6_1 = temp0_88 & 2
                cond:12_1 = temp6_1 == 0
                cond:13_1 = temp6_1 != 0
                cond:16_1 = temp6_1 == 0
                cond:17_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                    goto label_1400bec13
                
                goto label_1400beec1
            
        label_1400bec05:
            zmm15 = _mm_add_ps(zmm15, temp0_89)
            char temp5_1 = temp0_88 & 2
            cond:12_1 = temp5_1 == 0
            cond:13_1 = temp5_1 != 0
            cond:16_1 = temp5_1 == 0
            cond:17_1 = temp5_1 != 0
            
            if (temp5_1 != 0)
            label_1400bec13:
                zmm2 = _mm_blend_ps(zmm2, zmm15, 2)
                zmm12 = _mm_add_ps(zmm12, zmm10)
                
                if (cond:13_1)
                    goto label_1400beecb
                
                goto label_1400bec24
            
        label_1400beec1:
            zmm12 = _mm_add_ps(zmm12, zmm10)
            
            if (not(cond:12_1))
            label_1400beecb:
                zmm3 = _mm_blend_ps(zmm3, zmm12, 2)
                zmm11 = _mm_add_ps(zmm11, zmm9)
                
                if (cond:17_1)
                    goto label_1400bec2e
                
                goto label_1400beedc
            
        label_1400bec24:
            zmm11 = _mm_add_ps(zmm11, zmm9)
            bool cond:20_1
            bool cond:21_1
            bool cond:24_1
            bool cond:25_1
            
            if (not(cond:16_1))
            label_1400bec2e:
                zmm4 = _mm_blend_ps(zmm4, zmm11, 2)
                char temp10_1 = temp0_88 & 4
                cond:20_1 = temp10_1 == 0
                cond:21_1 = temp10_1 != 0
                cond:24_1 = temp10_1 == 0
                cond:25_1 = temp10_1 != 0
                
                if (temp10_1 != 0)
                    goto label_1400beee6
                
                goto label_1400bec3f
            
        label_1400beedc:
            char temp9_1 = temp0_88 & 4
            cond:20_1 = temp9_1 == 0
            cond:21_1 = temp9_1 != 0
            cond:24_1 = temp9_1 == 0
            cond:25_1 = temp9_1 != 0
            
            if (temp9_1 == 0)
            label_1400bec3f:
                
                if (not(cond:20_1))
                label_1400bec45:
                    zmm3 = _mm_blend_ps(zmm3, zmm12, 4)
                    
                    if (cond:25_1)
                        goto label_1400beef9
                    
                    goto label_1400bec52
            else
            label_1400beee6:
                zmm2 = _mm_blend_ps(zmm2, zmm15, 4)
                
                if (cond:21_1)
                    goto label_1400bec45
            
            bool cond:28_1
            bool cond:29_1
            bool cond:32_1
            bool cond:33_1
            
            if (not(cond:24_1))
            label_1400beef9:
                zmm4 = _mm_blend_ps(zmm4, zmm11, 4)
                char temp14_1 = temp0_88 & 8
                cond:28_1 = temp14_1 == 0
                cond:29_1 = temp14_1 != 0
                cond:32_1 = temp14_1 != 0
                cond:33_1 = temp14_1 == 0
                
                if (temp14_1 != 0)
                    goto label_1400bec5c
                
                goto label_1400bef0a
            
        label_1400bec52:
            char temp13_1 = temp0_88 & 8
            cond:28_1 = temp13_1 == 0
            cond:29_1 = temp13_1 != 0
            cond:32_1 = temp13_1 != 0
            cond:33_1 = temp13_1 == 0
            
            if (temp13_1 != 0)
            label_1400bec5c:
                zmm15 = _mm_blend_ps(zmm15, zmm2, 7)
                
                if (cond:29_1)
                    goto label_1400bef14
                
                goto label_1400bec69
            
        label_1400bef0a:
            zmm15 = zmm2
            
            if (cond:28_1)
            label_1400bec69:
                zmm12 = zmm3
                
                if (cond:32_1)
                    zmm4 = _mm_blend_ps(zmm4, zmm11, 8)
            else
            label_1400bef14:
                zmm12 = _mm_blend_ps(zmm12, zmm3, 7)
                
                if (not(cond:33_1))
                    zmm4 = _mm_blend_ps(zmm4, zmm11, 8)
            
            var_268 = _mm_blendv_ps(var_268, _mm_add_ps(temp0_86, var_268), temp0_87)
            zmm11 = zmm4
        
        rsi += 4
        rax_1 += 0x30
    while (rsi s< r10_4)
    
    r14 = arg7
    r10_5 = arg6
    
    if (rsi s< arg8)
        goto label_1400bef9b
    
    zmm2 = var_268
float temp0_215[0x4] = _mm_hadd_ps(zmm15, zmm15)
float temp0_216[0x4] = _mm_hadd_ps(temp0_215, temp0_215)
zmm12 = _mm_hadd_ps(zmm12, zmm12)
float temp0_219[0x4] = _mm_insert_ps(temp0_216, _mm_hadd_ps(zmm12, zmm12), 0x1c)
float temp0_220[0x4] = _mm_hadd_ps(zmm11, zmm11)
float temp0_221[0x4] = _mm_hadd_ps(temp0_220, temp0_220)
float result[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*r14), r14[1].d, 0x20), 
    temp0_219[0].q | temp0_221[0].q << 0x40)
*r14 = result[0]
*(r14 + 4) = __extractps_memd_xmmps_immb(result, 1)
r14[1].d = __extractps_memd_xmmps_immb(result, 2)
float temp0_225[0x4] = _mm_hadd_ps(zmm2, zmm2)
float temp0_226[0x4] = _mm_hadd_ps(temp0_225, temp0_225)
temp0_226[0] = temp0_226[0] f+ *r10_5
*r10_5 = temp0_226[0]
return result
