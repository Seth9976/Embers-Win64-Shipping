// 函数: sub_1400e65b0
// 地址: 0x1400e65b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_38[0x4] = zmm15
float zmm14[0x4]
float var_48[0x4] = zmm14
float zmm13[0x4]
float var_58[0x4] = zmm13
float zmm11[0x4]
float var_78[0x4] = zmm11
uint32_t zmm9[0x4]
uint32_t var_98[0x4] = zmm9
float zmm8[0x4]
float var_a8[0x4] = zmm8
uint32_t zmm7[0x4]
uint32_t var_b8[0x4] = zmm7
float zmm6[0x4]
float var_c8[0x4] = zmm6
float zmm0[0x4] = arg5
int32_t r10_4 = ((arg8 s>> 0x1f u>> 0x1e) + arg8) & 0xfffffffc
int32_t* r10_5
int64_t* r14
float zmm3[0x4]
uint32_t zmm5[0x4]
float zmm10[0x4]
float zmm12[0x4]
uint32_t var_288_1[0x4]
int32_t rsi
float zmm1[0x4]
float zmm2[0x4]
uint32_t zmm4[0x4]

if (r10_4 s<= 0)
    rsi = 0
    zmm3 = zx.o(0)
    zmm12 = zx.o(0)
    zmm10 = zx.o(0)
    var_288_1 = zx.o(0)
    r14 = arg7
    r10_5 = arg6
    
    if (0 s< arg8)
    label_1400e6a9d:
        float var_278_1[0x4] = zmm3
        zmm15 = zmm10
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rsi), 0), data_142e11d00)
        zmm8 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg8), 0), zmm0)
        zmm2 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0) & zmm8
        int64_t rax_3 = sx.q(zmm2[0])
        void* r11_1 = arg4 + (rax_3 << 2)
        zmm1 = *(arg4 + (rax_3 << 2))
        int64_t rax_5 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
        void* rsi_1 = arg4 + (rax_5 << 2)
        float temp0_109[0x4] = _mm_unpacklo_ps(zmm1, (*(arg4 + (rax_5 << 2)))[0].q)
        int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
        void* rax_7 = arg4 + (rbx_1 << 2)
        zmm0 = *(arg4 + (rbx_1 << 2))
        int64_t rdi_4 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
        void* rbx_3 = arg4 + (rdi_4 << 2)
        float temp0_112[0x4] = _mm_unpacklo_ps(zmm0, (*(arg4 + (rdi_4 << 2)))[0].q)
        zmm1 = temp0_109[0].q | temp0_112[0].q << 0x40
        zmm2 = data_142fc95e0 & zmm8
        zmm9 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + r11_1), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_1))[0].q)
        float temp0_117[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rax_7), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_3))[0].q)
        zmm9 = zmm9[0].q | temp0_117[0].q << 0x40
        zmm2 = data_142fc95f0 & zmm8
        zmm4 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + r11_1), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rsi_1))[0].q)
        float temp0_122[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rax_7), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_3))[0].q)
        zmm4 = zmm4[0].q | temp0_122[0].q << 0x40
        uint32_t var_178_1[0x4] = zmm9
        uint32_t var_168_1[0x4] = zmm4
        zmm11 = zx.o(0)
        zmm5 = *(arg3 + 0xc)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        uint32_t var_148_2[0x4] = zmm5
        uint32_t var_138_2[0x4] = zmm5
        uint32_t var_128_2[0x4] = zmm5
        uint32_t var_118_2[0x4] = zmm5
        zmm2 = *arg3
        zmm7 = *(arg3 + 4)
        zmm0 = *(arg3 + 8)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_125[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_126[0x4] = _mm_mul_ps(zmm9, temp0_125)
        float temp0_127[0x4] = _mm_mul_ps(temp0_125, zmm4)
        zmm4 = _mm_mul_ps(zmm4, zmm7)
        float temp0_129[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        zmm7 = _mm_mul_ps(zmm7, zmm1)
        float temp0_131[0x4] = _mm_mul_ps(zmm1, temp0_129)
        float temp0_132[0x4] = _mm_mul_ps(zmm11, zmm5)
        zmm4 = _mm_sub_ps(zmm4, _mm_mul_ps(temp0_129, zmm9))
        float temp0_135[0x4] = _mm_sub_ps(temp0_131, temp0_127)
        float temp0_136[0x4] = _mm_sub_ps(temp0_126, zmm7)
        float temp0_137[0x4] = _mm_sub_ps(temp0_132, temp0_132)
        zmm4 = _mm_add_ps(zmm4, zmm4)
        float temp0_139[0x4] = _mm_add_ps(temp0_135, temp0_135)
        float temp0_140[0x4] = _mm_add_ps(temp0_136, temp0_136)
        float temp0_141[0x4] = _mm_add_ps(temp0_137, temp0_137)
        uint32_t var_268_2[0x4] = zmm4
        float var_258_2[0x4] = temp0_139
        float var_248_2[0x4] = temp0_140
        float var_238_2[0x4] = temp0_141
        zmm9 = zmm5
        zmm13 = zmm5
        float temp0_142[0x4] = _mm_mul_ps(temp0_141, zmm5)
        zmm5 = _mm_mul_ps(zmm5, zmm4)
        zmm9 = _mm_mul_ps(zmm9, temp0_139)
        float temp0_145[0x4] = _mm_mul_ps(zmm13, temp0_140)
        zmm5 = __addps_xmmps_memps(zmm5, zmm1)
        zmm9 = __addps_xmmps_memps(zmm9, var_178_1)
        float temp0_148[0x4] = __addps_xmmps_memps(temp0_145, var_168_1)
        float temp0_149[0x4] = __addps_xmmps_memps(temp0_142, zmm11)
        uint32_t var_108_1[0x4] = zmm5
        uint32_t var_f8_1[0x4] = zmm9
        float var_e8_1[0x4] = temp0_148
        zmm6 = *arg3
        zmm0 = *(arg3 + 4)
        zmm7 = *(arg3 + 8)
        float temp0_150[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_151[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_152[0x4] = _mm_mul_ps(temp0_139, temp0_151)
        float temp0_153[0x4] = _mm_mul_ps(temp0_151, temp0_140)
        float temp0_154[0x4] = _mm_mul_ps(temp0_140, temp0_150)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_156[0x4] = _mm_mul_ps(temp0_150, zmm4)
        zmm4 = _mm_mul_ps(zmm4, zmm7)
        float temp0_159[0x4] = _mm_sub_ps(temp0_154, _mm_mul_ps(zmm7, temp0_139))
        zmm4 = _mm_sub_ps(zmm4, temp0_153)
        float temp0_161[0x4] = _mm_sub_ps(temp0_152, temp0_156)
        float temp0_162[0x4] = _mm_add_ps(temp0_159, zmm5)
        zmm4 = _mm_add_ps(zmm4, zmm9)
        float temp0_164[0x4] = _mm_add_ps(temp0_161, temp0_148)
        zmm0 = arg3[1].d
        zmm7 = *(arg3 + 0x14)
        float temp0_166[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_162)
        zmm7 = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm4)
        zmm3 = *(arg3 + 0x18)
        float temp0_170[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_164)
        zmm1 = *arg2
        zmm2 = *(arg2 + 4)
        zmm4 = _mm_sub_ps(temp0_166, _mm_shuffle_ps(zmm1, zmm1, 0))
        float temp0_174[0x4] = _mm_sub_ps(zmm7, _mm_shuffle_ps(zmm2, zmm2, 0))
        zmm2 = *(arg2 + 8)
        zmm5 = _mm_sub_ps(temp0_170, _mm_shuffle_ps(zmm2, zmm2, 0))
        zmm2 = *arg1
        zmm6 = (*arg1)[1]
        float temp0_178[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm4)
        float temp0_181[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_174), temp0_178)
        zmm4 = (*arg1)[2]
        zmm1 = arg5
        zmm4 = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm5), temp0_181), 
            _mm_shuffle_ps(zmm1, zmm1, 0))
        float var_d8_1[0x4] = temp0_149
        uint32_t temp0_188[0x4] =
            _mm_and_ps(__cmpps_xmmps_memps_immb(zmm4, data_142fc95d0, 1), zmm8)
        char temp0_189 = _mm_movemask_ps(temp0_188)
        
        if (temp0_189 == 0)
            zmm5 = var_288_1
            zmm10 = zmm15
            zmm3 = var_278_1
        else
            float temp0_190[0x4] = _mm_mul_ps(temp0_166, zmm4)
            zmm2 = zmm15
            char temp0_191 = temp0_189 & 1
            
            if (temp0_191 == 0)
                zmm7 = _mm_mul_ps(zmm7, zmm4)
                zmm1 = zmm12
                
                if (temp0_191 != 0)
                    goto label_1400e6e93
                
                goto label_1400e6de8
            
            zmm2 = zmm15
            zmm2[0] = zmm2[0] + temp0_190[0]
            zmm7 = _mm_mul_ps(zmm7, zmm4)
            zmm1 = zmm12
            
            if (temp0_191 != 0)
            label_1400e6e93:
                zmm1 = zmm12
                zmm1[0] = zmm1[0] f+ zmm7[0]
                zmm3 = _mm_mul_ps(temp0_170, zmm4)
                zmm6 = var_278_1
                zmm10 = zmm6
                
                if (temp0_191 == 0)
                    goto label_1400e6dfa
                
                goto label_1400e6ead
            
        label_1400e6de8:
            zmm3 = _mm_mul_ps(temp0_170, zmm4)
            zmm6 = var_278_1
            zmm10 = zmm6
            bool cond:10_1
            bool cond:11_1
            bool cond:14_1
            
            if (temp0_191 == 0)
            label_1400e6dfa:
                zmm15 = _mm_add_ps(zmm15, temp0_190)
                char temp3_1 = temp0_189 & 2
                cond:10_1 = temp3_1 != 0
                cond:11_1 = temp3_1 == 0
                cond:14_1 = temp3_1 == 0
                zmm8 = var_288_1
                
                if (temp3_1 == 0)
                    goto label_1400e6ec8
                
                goto label_1400e6e0c
            
        label_1400e6ead:
            zmm10 = zmm6
            zmm10[0] = zmm10[0] + zmm3[0]
            zmm15 = _mm_add_ps(zmm15, temp0_190)
            char temp2_1 = temp0_189 & 2
            cond:10_1 = temp2_1 != 0
            cond:11_1 = temp2_1 == 0
            cond:14_1 = temp2_1 == 0
            zmm8 = var_288_1
            
            if (temp2_1 != 0)
            label_1400e6e0c:
                zmm9 = zmm15
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm2, 1), zmm2, 0xe2)
                zmm12 = _mm_add_ps(zmm12, zmm7)
                
                if (cond:10_1)
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 1), zmm1, 0xe2)
            else
            label_1400e6ec8:
                zmm9 = zmm15
                zmm12 = _mm_add_ps(zmm12, zmm7)
                
                if (not(cond:11_1))
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 1), zmm1, 0xe2)
            
            float temp0_204[0x4] = _mm_add_ps(var_278_1, zmm3)
            bool cond:17_1
            bool cond:20_1
            bool cond:21_1
            
            if (cond:14_1)
                zmm3 = temp0_204
                char temp6_1 = temp0_189 & 4
                cond:17_1 = temp6_1 != 0
                cond:20_1 = temp6_1 == 0
                cond:21_1 = temp6_1 != 0
                
                if (temp6_1 != 0)
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x32), 0x84)
            else
                zmm3 = temp0_204
                zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_204, zmm10, 1), zmm10, 0xe2)
                char temp7_1 = temp0_189 & 4
                cond:17_1 = temp7_1 != 0
                cond:20_1 = temp7_1 == 0
                cond:21_1 = temp7_1 != 0
                
                if (temp7_1 != 0)
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x32), 0x84)
            
            if (not(cond:17_1))
                if (cond:21_1)
                    goto label_1400e706b
                
                goto label_1400e6f23
            
            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x32), 0x84)
            bool cond:24_1
            bool cond:25_1
            bool cond:28_1
            bool cond:29_1
            
            if (not(cond:20_1))
            label_1400e706b:
                zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm3, zmm10, 0x32), 0x84)
                char temp11_1 = temp0_189 & 8
                cond:24_1 = temp11_1 == 0
                cond:25_1 = temp11_1 != 0
                cond:28_1 = temp11_1 == 0
                cond:29_1 = temp11_1 != 0
                
                if (temp11_1 == 0)
                    goto label_1400e6f2c
                
                goto label_1400e707e
            
        label_1400e6f23:
            char temp10_1 = temp0_189 & 8
            cond:24_1 = temp10_1 == 0
            cond:25_1 = temp10_1 != 0
            cond:28_1 = temp10_1 == 0
            cond:29_1 = temp10_1 != 0
            
            if (temp10_1 == 0)
            label_1400e6f2c:
                
                if (cond:25_1)
                    goto label_1400e7093
                
                goto label_1400e6f32
            
        label_1400e707e:
            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x23), 0x24)
            
            if (cond:24_1)
            label_1400e6f32:
                zmm12 = zmm1
                
                if (not(cond:28_1))
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm3, zmm10, 0x23), 0x24)
            else
            label_1400e7093:
                zmm12 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x23), 0x24)
                
                if (cond:29_1)
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm3, zmm10, 0x23), 0x24)
            
            uint32_t temp0_212[0x4] = _mm_and_ps(_mm_add_ps(zmm4, zmm8), temp0_188)
            zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_188, zmm8), temp0_212)
            zmm3 = zmm10
            zmm10 = zmm2
    else
        zmm5 = var_288_1
else
    zmm11 = *(arg3 + 0xc)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
    float var_198_1[0x4] = *arg3
    float var_1a8_1[0x4] = *(arg3 + 4)
    float var_1b8_1[0x4] = *(arg3 + 8)
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
    __builtin_memset(&var_288_1, 0, 0x20)
    zmm10 = zx.o(0)
    zmm12 = zx.o(0)
    
    do
        int64_t rdi_1 = sx.q(rax_1)
        zmm7 = *(arg4 + rdi_1)
        zmm0 = *(arg4 + rdi_1 + 0x10)
        zmm1 = *(arg4 + rdi_1 + 0x20)
        zmm5 = _mm_shuffle_ps(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0x4e), _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
            zmm1, 0xc4)
        zmm4 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
        zmm7 = _mm_shuffle_ps(zmm7, zmm0, 5)
        zmm7 =
            _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm7, zmm0, 0xf8), 0x22), 0x28)
        uint32_t var_268_1[0x4] = zmm4
        uint32_t var_258_1[0x4] = zmm7
        uint32_t var_248_1[0x4] = zmm5
        int128_t var_238_1 = zx.o(0)
        float temp0_40[0x4] = _mm_shuffle_ps(var_1a8_1, var_1a8_1, 0)
        float temp0_41[0x4] = _mm_mul_ps(temp0_40, zmm5)
        float temp0_42[0x4] = _mm_shuffle_ps(var_1b8_1, var_1b8_1, 0)
        float temp0_43[0x4] = _mm_mul_ps(temp0_42, zmm4)
        float temp0_44[0x4] = _mm_shuffle_ps(var_198_1, var_198_1, 0)
        float temp0_45[0x4] = _mm_mul_ps(temp0_44, zmm7)
        float temp0_47[0x4] = _mm_sub_ps(temp0_41, _mm_mul_ps(zmm7, temp0_42))
        float temp0_49[0x4] = _mm_sub_ps(temp0_43, _mm_mul_ps(zmm5, temp0_44))
        float temp0_51[0x4] = _mm_sub_ps(temp0_45, _mm_mul_ps(zmm4, temp0_40))
        float temp0_52[0x4] = _mm_add_ps(temp0_47, temp0_47)
        float temp0_53[0x4] = _mm_add_ps(temp0_49, temp0_49)
        float temp0_54[0x4] = _mm_add_ps(temp0_51, temp0_51)
        zmm4 = _mm_mul_ps(temp0_1, temp0_53)
        zmm7 = _mm_mul_ps(temp0_52, temp0_42)
        float temp0_57[0x4] = _mm_mul_ps(temp0_53, temp0_42)
        float temp0_62[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_54, temp0_40), temp0_57), 
            __addps_xmmps_memps(_mm_mul_ps(temp0_1, temp0_52), var_268_1))
        float temp0_63[0x4] = _mm_mul_ps(temp0_1, temp0_54)
        zmm5 = _mm_mul_ps(temp0_53, temp0_44)
        float temp0_65[0x4] = _mm_mul_ps(temp0_54, temp0_44)
        zmm4 = __addps_xmmps_memps(zmm4, var_258_1)
        zmm7 = _mm_add_ps(_mm_sub_ps(zmm7, temp0_65), zmm4)
        float temp0_69[0x4] = _mm_mul_ps(temp0_52, temp0_40)
        float var_148_1[0x4] = temp0_1
        float var_138_1[0x4] = temp0_1
        float var_128_1[0x4] = temp0_1
        float temp0_70[0x4] = __addps_xmmps_memps(temp0_63, var_248_1)
        float var_118_1[0x4] = temp0_1
        zmm5 = _mm_add_ps(_mm_sub_ps(zmm5, temp0_69), temp0_70)
        zmm15 = arg3[1].d
        zmm14 = *(arg3 + 0x14)
        float temp0_74[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_62)
        float temp0_76[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm7)
        zmm13 = *(arg3 + 0x18)
        float temp0_78[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm13, zmm13, 0), zmm5)
        float temp0_80[0x4] = __mulps_xmmps_memps(__subps_xmmps_memps(temp0_74, temp0_2), temp0_5)
        float temp0_83[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(__subps_xmmps_memps(temp0_76, temp0_3), temp0_6), temp0_80)
        float temp0_87[0x4] = __subps_xmmps_memps(
            _mm_add_ps(__mulps_xmmps_memps(__subps_xmmps_memps(temp0_78, temp0_4), temp0_7), 
                temp0_83), 
            temp0_8)
        zmm9 = __cmpps_xmmps_memps_immb(temp0_87, data_142fc95d0, 1)
        char temp0_89 = _mm_movemask_ps(zmm9)
        float var_278[0x4]
        
        if (temp0_89 == 0)
            zmm3 = var_278
        else
            float temp0_90[0x4] = _mm_mul_ps(temp0_74, temp0_87)
            zmm2 = zmm10
            char temp1_1 = temp0_89 & 1
            
            if (temp1_1 == 0)
                zmm14 = _mm_mul_ps(temp0_76, temp0_87)
                zmm1 = zmm12
                zmm6 = var_278
                
                if (temp1_1 != 0)
                    goto label_1400e671c
                
                goto label_1400e69ea
            
            zmm2 = zmm10
            zmm2[0] = zmm2[0] + temp0_90[0]
            zmm14 = _mm_mul_ps(temp0_76, temp0_87)
            zmm1 = zmm12
            zmm6 = var_278
            
            if (temp1_1 != 0)
            label_1400e671c:
                zmm1 = zmm12
                zmm1[0] = zmm1[0] + zmm14[0]
                zmm13 = _mm_mul_ps(temp0_78, temp0_87)
                zmm3 = zmm6
                
                if (temp1_1 == 0)
                    goto label_1400e69f7
                
                goto label_1400e6732
            
        label_1400e69ea:
            zmm13 = _mm_mul_ps(temp0_78, temp0_87)
            zmm3 = zmm6
            bool cond:12_1
            bool cond:13_1
            bool cond:15_1
            bool cond:16_1
            
            if (temp1_1 == 0)
            label_1400e69f7:
                zmm10 = _mm_add_ps(zmm10, temp0_90)
                char temp5_1 = temp0_89 & 2
                cond:12_1 = temp5_1 != 0
                cond:13_1 = temp5_1 == 0
                cond:15_1 = temp5_1 == 0
                cond:16_1 = temp5_1 != 0
                
                if (temp5_1 != 0)
                    goto label_1400e6754
                
                goto label_1400e6a05
            
        label_1400e6732:
            zmm3 = zmm6
            zmm3[0] = zmm3[0] + zmm13[0]
            zmm10 = _mm_add_ps(zmm10, temp0_90)
            char temp4_1 = temp0_89 & 2
            cond:12_1 = temp4_1 != 0
            cond:13_1 = temp4_1 == 0
            cond:15_1 = temp4_1 == 0
            cond:16_1 = temp4_1 != 0
            
            if (temp4_1 != 0)
            label_1400e6754:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm2, 1), zmm2, 0xe2)
                zmm12 = _mm_add_ps(zmm12, zmm14)
                
                if (cond:13_1)
                    goto label_1400e6a0f
                
                goto label_1400e676d
            
        label_1400e6a05:
            zmm12 = _mm_add_ps(zmm12, zmm14)
            
            if (not(cond:12_1))
            label_1400e6a0f:
                zmm6 = _mm_add_ps(zmm6, zmm13)
                
                if (cond:16_1)
                    goto label_1400e6785
                
                goto label_1400e6a19
            
        label_1400e676d:
            zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 1), zmm1, 0xe2)
            zmm6 = _mm_add_ps(zmm6, zmm13)
            bool cond:18_1
            bool cond:19_1
            bool cond:22_1
            bool cond:23_1
            
            if (not(cond:15_1))
            label_1400e6785:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm3, 1), zmm3, 0xe2)
                char temp9_1 = temp0_89 & 4
                cond:18_1 = temp9_1 == 0
                cond:19_1 = temp9_1 != 0
                cond:22_1 = temp9_1 != 0
                cond:23_1 = temp9_1 == 0
                
                if (temp9_1 == 0)
                    goto label_1400e6a23
                
                goto label_1400e679a
            
        label_1400e6a19:
            char temp8_1 = temp0_89 & 4
            cond:18_1 = temp8_1 == 0
            cond:19_1 = temp8_1 != 0
            cond:22_1 = temp8_1 != 0
            cond:23_1 = temp8_1 == 0
            
            if (temp8_1 != 0)
            label_1400e679a:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x32), 0x84)
                
                if (not(cond:18_1))
                label_1400e67ac:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x32), 0x84)
                    
                    if (cond:23_1)
                        goto label_1400e6a2f
                    
                    goto label_1400e67bd
            else
            label_1400e6a23:
                
                if (cond:19_1)
                    goto label_1400e67ac
            
            bool cond:26_1
            bool cond:27_1
            bool cond:30_1
            bool cond:31_1
            
            if (not(cond:22_1))
            label_1400e6a2f:
                char temp13_1 = temp0_89 & 8
                cond:26_1 = temp13_1 != 0
                cond:27_1 = temp13_1 == 0
                cond:30_1 = temp13_1 != 0
                cond:31_1 = temp13_1 == 0
                
                if (temp13_1 != 0)
                    goto label_1400e67d5
                
                goto label_1400e6a39
            
        label_1400e67bd:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm6, zmm3, 0x32), 0x84)
            char temp12_1 = temp0_89 & 8
            cond:26_1 = temp12_1 != 0
            cond:27_1 = temp12_1 == 0
            cond:30_1 = temp12_1 != 0
            cond:31_1 = temp12_1 == 0
            
            if (temp12_1 != 0)
            label_1400e67d5:
                zmm10 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x23), 0x24)
                
                if (cond:27_1)
                    goto label_1400e6a43
                
                goto label_1400e67e9
            
        label_1400e6a39:
            zmm10 = zmm2
            
            if (cond:26_1)
            label_1400e67e9:
                zmm12 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x23), 0x24)
                
                if (cond:30_1)
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm6, zmm3, 0x23), 0x24)
            else
            label_1400e6a43:
                zmm12 = zmm1
                
                if (not(cond:31_1))
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm6, zmm3, 0x23), 0x24)
            
            zmm0 = var_288_1
            zmm8 = _mm_and_ps(_mm_add_ps(temp0_87, zmm0), zmm9)
            var_288_1 = _mm_or_ps(_mm_andnot_ps(zmm9, zmm0), zmm8)
        rsi += 4
        rax_1 += 0x30
    while (rsi s< r10_4)
    
    r14 = arg7
    r10_5 = arg6
    
    if (rsi s< arg8)
        goto label_1400e6a9d
    
    zmm5 = var_288_1
float temp0_216[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm10, zmm10[0].q), zmm10)
float temp0_217[0x4] = _mm_shuffle_ps(temp0_216, temp0_216, 0xe5)
temp0_217[0] = temp0_217[0] + temp0_216[0]
float temp0_219[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm12, zmm12[0].q), zmm12)
float temp0_220[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0xe5)
temp0_220[0] = temp0_220[0] + temp0_219[0]
float temp0_221[0x4] = _mm_unpacklo_ps(temp0_217, temp0_220[0].q)
float temp0_223[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm3, zmm3[0].q), zmm3)
float temp0_224[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0xe5)
temp0_224[0] = temp0_224[0] + temp0_223[0]
float temp0_225[0x4] =
    _mm_add_ps(zx.o(*r14)[0].q | r14[1].d[0].q << 0x40, temp0_221[0].q | temp0_224[0].q << 0x40)
*r14 = temp0_225[0]
float temp0_226[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0xe5)
temp0_225[0].q = temp0_225 u>> 0x40
*(r14 + 4) = temp0_226[0]
r14[1].d = temp0_225[0]
float result[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm5, 0xee), zmm5)
float temp0_228[0x4] = _mm_shuffle_ps(result, result, 0xe5)
temp0_228[0] = temp0_228[0] + result[0]
temp0_228[0] = temp0_228[0] f+ *r10_5
*r10_5 = temp0_228[0]
return result
