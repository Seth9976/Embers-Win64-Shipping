// 函数: sub_1410456e0
// 地址: 0x1410456e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_58[0x4] = zmm6
void* r12 = arg4
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm8[0x4]
float var_78[0x4] = zmm8
float zmm9[0x4]
float var_88[0x4] = zmm9
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
uint64_t result = zx.q(arg1 - 0x15)
float zmm15[0x4]
float var_e8[0x4] = zmm15
uint64_t i_36 = zx.q(arg2)
int32_t var_108
void var_f8
float arg_8
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float var_130[0x4]
float zmm0[0x4]

if (result.d u<= 1)
    int32_t r11_7 = 0
    
    if (arg3 != 0)
        do
            uint32_t rbx_11 = 0
            void* rdx_46 = (zx.q(r11_7 * i_36.d) << 4) + arg6
            void* rcx_83 = zx.q(r11_7 * arg5) + r12
            
            if (i_36.d u>= 4)
                int32_t var_124_3 = 0x3f800000
                void* r8_17 = rdx_46 + 0x20
                uint64_t rax_360 = zx.q(((i_36 - 4).d u>> 2) + 1)
                uint64_t i_34 = zx.q(rax_360.d)
                rbx_11 = (rax_360 << 2).d
                uint64_t i
                
                do
                    r8_17 += 0x40
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.d(*rcx_83))
                    zmm0[0] = zmm0[0] * 1.52590219e-05f
                    var_130[0] = zmm0[0]
                    float temp0_157[0x4] = _mm_shuffle_ps(var_130, var_130, 0xe1)
                    temp0_157[0] = zmm0[0]
                    float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xc6)
                    temp0_158[0] = zmm0[0]
                    zmm0 = zx.o(0)
                    float temp0_159[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xc9)
                    *rdx_46 = temp0_159
                    rdx_46 += 0x40
                    zmm0[0] = float.s(zx.d(*(rcx_83 + 2)))
                    zmm0[0] = zmm0[0] * 1.52590219e-05f
                    temp0_159[0] = zmm0[0]
                    float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xe1)
                    temp0_160[0] = zmm0[0]
                    float temp0_161[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc6)
                    temp0_161[0] = zmm0[0]
                    zmm0 = zx.o(0)
                    float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
                    *(r8_17 - 0x50) = temp0_162
                    zmm0[0] = float.s(zx.d(*(rcx_83 + 4)))
                    zmm0[0] = zmm0[0] * 1.52590219e-05f
                    temp0_162[0] = zmm0[0]
                    float temp0_163[0x4] = _mm_shuffle_ps(temp0_162, temp0_162, 0xe1)
                    temp0_163[0] = zmm0[0]
                    float temp0_164[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xc6)
                    temp0_164[0] = zmm0[0]
                    zmm0 = zx.o(0)
                    float temp0_165[0x4] = _mm_shuffle_ps(temp0_164, temp0_164, 0xc9)
                    *(r8_17 - 0x40) = temp0_165
                    result = zx.q(*(rcx_83 + 6))
                    rcx_83 += 8
                    zmm0[0] = float.s(result.d)
                    zmm0[0] = zmm0[0] * 1.52590219e-05f
                    temp0_165[0] = zmm0[0]
                    float temp0_166[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0xe1)
                    temp0_166[0] = zmm0[0]
                    float temp0_167[0x4] = _mm_shuffle_ps(temp0_166, temp0_166, 0xc6)
                    temp0_167[0] = zmm0[0]
                    float temp0_168[0x4] = _mm_shuffle_ps(temp0_167, temp0_167, 0xc9)
                    *(r8_17 - 0x30) = temp0_168
                    var_130 = temp0_168
                    i = i_34
                    i_34 -= 1
                while (i != 1)
            
            if (rbx_11 u< i_36.d)
                int32_t var_124_4 = 0x3f800000
                uint64_t i_29 = zx.q(i_36.d - rbx_11)
                uint64_t i_1
                
                do
                    result = zx.q(*rcx_83)
                    rdx_46 += 0x10
                    rcx_83 += 2
                    float temp0_169[0x4] = _mm_cvtepi32_ps(zx.o(result.d))
                    temp0_169[0] = temp0_169[0] * 1.52590219e-05f
                    var_130[0] = temp0_169[0]
                    float temp0_170[0x4] = _mm_shuffle_ps(var_130, var_130, 0xe1)
                    temp0_170[0] = temp0_169[0]
                    float temp0_171[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xc6)
                    temp0_171[0] = temp0_169[0]
                    float temp0_172[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0xc9)
                    *(rdx_46 - 0x10) = temp0_172
                    var_130 = temp0_172
                    i_1 = i_29
                    i_29 -= 1
                while (i_1 != 1)
            
            r11_7 += 1
        while (r11_7 u< arg3)
else
    switch (arg1)
        case 1
            result = arg7
            
            if (*(result + 4) == 3)
                return memcpy(arg6, r12, (i_36.d * arg3) << 4)
            
            zmm4 = 0x3f800000
            arg_8 = 1f
            int32_t zmm5 = (zx.o(0)).d
            int32_t var_120_3 = 0
            zmm6 = zx.o(0)
            float var_11c_3 = 0f
            zmm7 = zx.o(0)
            float var_118_3 = 0f
            zmm8 = zx.o(0)
            float var_138_11 = 0f
            zmm9 = 0x3f800000
            float var_108_2 = 1f
            zmm10 = 0x3f800000
            float var_110_2 = 1f
            zmm13 = 0x3f800000
            float var_114_2 = 1f
            zmm11 = 0x3f800000
            int32_t r8_5 = 0
            
            if (arg3 != 0)
                do
                    uint32_t r10_2 = 0
                    void* rcx_45 = zx.q(r8_5 * arg5) + r12
                    
                    if (i_36.d u>= 4)
                        result = zx.q(((i_36 - 4).d u>> 2) + 1)
                        uint64_t i_19 = zx.q(result.d)
                        r10_2 = (result << 2).d
                        uint64_t i_2
                        
                        do
                            zmm7 = *rcx_45
                            zmm10 = *(rcx_45 + 4)
                            float temp0_37[0x4] = __minss_xmmss_memss(zmm7[0], var_120_3)
                            zmm13 = *(rcx_45 + 8)
                            float temp0_38[0x4] = __maxss_xmmss_memss(zmm7[0], arg_8)
                            var_120_3 = __minss_xmmss_memss(
                                __minss_xmmss_memss(
                                    __minss_xmmss_memss(temp0_37[0], *(rcx_45 + 0x10))[0], 
                                    *(rcx_45 + 0x20))[0], 
                                *(rcx_45 + 0x30))[0]
                            float temp0_42[0x4] = __minss_xmmss_memss(zmm10[0], var_11c_3)
                            float temp0_43[0x4] = __maxss_xmmss_memss(zmm10[0], var_108_2)
                            float temp0_44[0x4] = __minss_xmmss_memss(temp0_42[0], *(rcx_45 + 0x14))
                            float temp0_45[0x4] = __maxss_xmmss_memss(temp0_43[0], *(rcx_45 + 0x14))
                            float temp0_46[0x4] = __minss_xmmss_memss(temp0_44[0], *(rcx_45 + 0x24))
                            float temp0_47[0x4] = __maxss_xmmss_memss(temp0_45[0], *(rcx_45 + 0x24))
                            float temp0_48[0x4] = __minss_xmmss_memss(temp0_46[0], *(rcx_45 + 0x34))
                            zmm10 = __maxss_xmmss_memss(temp0_47[0], *(rcx_45 + 0x34))
                            var_11c_3 = temp0_48[0]
                            float temp0_50[0x4] = __minss_xmmss_memss(zmm13[0], var_118_3)
                            float temp0_51[0x4] = __maxss_xmmss_memss(zmm13[0], var_110_2)
                            var_108_2 = zmm10[0]
                            float temp0_52[0x4] = __minss_xmmss_memss(temp0_50[0], *(rcx_45 + 0x18))
                            float temp0_53[0x4] = __maxss_xmmss_memss(temp0_51[0], *(rcx_45 + 0x18))
                            float temp0_54[0x4] = __minss_xmmss_memss(temp0_52[0], *(rcx_45 + 0x28))
                            float temp0_55[0x4] = __maxss_xmmss_memss(temp0_53[0], *(rcx_45 + 0x28))
                            float temp0_56[0x4] = __minss_xmmss_memss(temp0_54[0], *(rcx_45 + 0x38))
                            zmm13 = __maxss_xmmss_memss(temp0_55[0], *(rcx_45 + 0x38))
                            var_118_3 = temp0_56[0]
                            float temp0_58[0x4] =
                                __minss_xmmss_memss((*(rcx_45 + 0xc))[0], var_138_11)
                            var_110_2 = zmm13[0]
                            var_138_11 = __minss_xmmss_memss(
                                __minss_xmmss_memss(
                                    __minss_xmmss_memss(temp0_58[0], *(rcx_45 + 0x1c))[0], 
                                    *(rcx_45 + 0x2c))[0], 
                                *(rcx_45 + 0x3c))[0]
                            arg_8 = __maxss_xmmss_memss(
                                __maxss_xmmss_memss(
                                    __maxss_xmmss_memss(temp0_38[0], *(rcx_45 + 0x10))[0], 
                                    *(rcx_45 + 0x20))[0], 
                                *(rcx_45 + 0x30))[0]
                            zmm11 = __maxss_xmmss_memss(
                                __maxss_xmmss_memss(
                                    __maxss_xmmss_memss(
                                        __maxss_xmmss_memss((*(rcx_45 + 0xc))[0], var_114_2)[0], 
                                        *(rcx_45 + 0x1c))[0], 
                                    *(rcx_45 + 0x2c))[0], 
                                *(rcx_45 + 0x3c))
                            rcx_45 += 0x40
                            var_114_2 = zmm11[0]
                            i_2 = i_19
                            i_19 -= 1
                        while (i_2 != 1)
                        zmm5 = var_120_3
                        zmm6 = var_11c_3
                        zmm7 = var_118_3
                        zmm8 = var_138_11
                        zmm9 = arg_8
                    
                    if (r10_2 u< i_36.d)
                        void* rcx_46 = rcx_45 + 8
                        uint64_t i_20 = zx.q(i_36.d - r10_2)
                        uint64_t i_3
                        
                        do
                            zmm5 = __minss_xmmss_memss(zmm5, *(rcx_46 - 8))
                            zmm6 = __minss_xmmss_memss(zmm6[0], *(rcx_46 - 4))
                            zmm7 = __minss_xmmss_memss(zmm7[0], *rcx_46)
                            zmm8 = __minss_xmmss_memss(zmm8[0], *(rcx_46 + 4))
                            zmm9 = __maxss_xmmss_memss(zmm9[0], *(rcx_46 - 8))
                            zmm10 = __maxss_xmmss_memss(zmm10[0], *(rcx_46 - 4))
                            zmm13 = __maxss_xmmss_memss(zmm13[0], *rcx_46)
                            zmm11 = __maxss_xmmss_memss(zmm11[0], *(rcx_46 + 4))
                            rcx_46 += 0x10
                            i_3 = i_20
                            i_20 -= 1
                        while (i_3 != 1)
                        var_114_2 = zmm11[0]
                        var_110_2 = zmm13[0]
                        var_108_2 = zmm10[0]
                        arg_8 = zmm9[0]
                        var_138_11 = zmm8[0]
                        var_118_3 = zmm7[0]
                        var_11c_3 = zmm6[0]
                        var_120_3 = zmm5
                    
                    r8_5 += 1
                while (r8_5 u< arg3)
                
                zmm4 = 0x3f800000
            
            int32_t r10_3 = 0
            
            if (arg3 != 0)
                do
                    uint32_t r11_3 = 0
                    float (* rcx_50)[0x4] = (zx.q(r10_3 * i_36.d) << 4) + arg6
                    
                    if (i_36.d u>= 4)
                        zmm9[0] = zmm9[0] f- zmm5
                        float* rdx_25 = &rcx_50[2]
                        zmm10[0] = zmm10[0] - zmm6[0]
                        result = zx.q(((i_36 - 4).d u>> 2) + 1)
                        zmm12 = zmm4
                        uint64_t i_26 = zx.q(result.d)
                        zmm14 = zmm4
                        zmm15 = zmm4
                        zmm12[0] = zmm12[0] / zmm9[0]
                        r11_3 = (result << 2).d
                        zmm9 = zmm4
                        zmm14[0] = zmm14[0] / zmm10[0]
                        zmm13[0] = zmm13[0] - zmm7[0]
                        zmm11[0] = zmm11[0] - zmm8[0]
                        zmm15[0] = zmm15[0] / zmm13[0]
                        zmm9[0] = zmm9[0] / zmm11[0]
                        uint64_t i_4
                        
                        do
                            zmm3 = *r12
                            zmm0 = *(r12 + 4)
                            zmm3[0] = zmm3[0] f- zmm5
                            zmm1 = *(r12 + 8)
                            zmm0[0] = zmm0[0] - zmm6[0]
                            zmm2 = *(r12 + 0xc)
                            zmm1[0] = zmm1[0] - zmm7[0]
                            zmm2[0] = zmm2[0] - zmm8[0]
                            zmm3[0] = zmm3[0] * zmm12[0]
                            zmm0[0] = zmm0[0] * zmm14[0]
                            float temp0_77[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            zmm1[0] = zmm1[0] * zmm15[0]
                            temp0_77[0] = zmm0[0]
                            zmm2[0] = zmm2[0] * zmm9[0]
                            float temp0_78[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc6)
                            temp0_78[0] = zmm1[0]
                            float temp0_79[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x27)
                            temp0_79[0] = zmm2[0]
                            *rcx_50 = _mm_shuffle_ps(temp0_79, temp0_79, 0x39)
                            rcx_50 = &rcx_50[4]
                            zmm4 = *(r12 + 0x10)
                            zmm0 = *(r12 + 0x14)
                            zmm4[0] = zmm4[0] f- zmm5
                            zmm1 = *(r12 + 0x18)
                            zmm0[0] = zmm0[0] - zmm6[0]
                            zmm2 = *(r12 + 0x1c)
                            zmm1[0] = zmm1[0] - zmm7[0]
                            zmm2[0] = zmm2[0] - zmm8[0]
                            zmm4[0] = zmm4[0] * zmm12[0]
                            zmm0[0] = zmm0[0] * zmm14[0]
                            float temp0_81[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
                            zmm1[0] = zmm1[0] * zmm15[0]
                            temp0_81[0] = zmm0[0]
                            zmm2[0] = zmm2[0] * zmm9[0]
                            float temp0_82[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0xc6)
                            temp0_82[0] = zmm1[0]
                            float temp0_83[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0x27)
                            temp0_83[0] = zmm2[0]
                            *(rdx_25 - 0x10) = _mm_shuffle_ps(temp0_83, temp0_83, 0x39)
                            zmm3 = *(r12 + 0x20)
                            zmm0 = *(r12 + 0x24)
                            zmm3[0] = zmm3[0] f- zmm5
                            zmm1 = *(r12 + 0x28)
                            zmm0[0] = zmm0[0] - zmm6[0]
                            zmm2 = *(r12 + 0x2c)
                            zmm1[0] = zmm1[0] - zmm7[0]
                            zmm2[0] = zmm2[0] - zmm8[0]
                            zmm3[0] = zmm3[0] * zmm12[0]
                            zmm0[0] = zmm0[0] * zmm14[0]
                            float temp0_85[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            zmm1[0] = zmm1[0] * zmm15[0]
                            temp0_85[0] = zmm0[0]
                            zmm2[0] = zmm2[0] * zmm9[0]
                            float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xc6)
                            temp0_86[0] = zmm1[0]
                            float temp0_87[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0x27)
                            temp0_87[0] = zmm2[0]
                            *rdx_25 = _mm_shuffle_ps(temp0_87, temp0_87, 0x39)
                            zmm4 = *(r12 + 0x30)
                            zmm0 = *(r12 + 0x34)
                            zmm4[0] = zmm4[0] f- zmm5
                            zmm1 = *(r12 + 0x38)
                            zmm0[0] = zmm0[0] - zmm6[0]
                            zmm2 = *(r12 + 0x3c)
                            zmm1[0] = zmm1[0] - zmm7[0]
                            zmm2[0] = zmm2[0] - zmm8[0]
                            zmm4[0] = zmm4[0] * zmm12[0]
                            zmm0[0] = zmm0[0] * zmm14[0]
                            float temp0_89[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
                            zmm1[0] = zmm1[0] * zmm15[0]
                            temp0_89[0] = zmm0[0]
                            zmm2[0] = zmm2[0] * zmm9[0]
                            float temp0_90[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0xc6)
                            temp0_90[0] = zmm1[0]
                            float temp0_91[0x4] = _mm_shuffle_ps(temp0_90, temp0_90, 0x27)
                            temp0_91[0] = zmm2[0]
                            *(rdx_25 + 0x10) = _mm_shuffle_ps(temp0_91, temp0_91, 0x39)
                            rdx_25 = &rdx_25[0x10]
                            r12 += 0x40
                            i_4 = i_26
                            i_26 -= 1
                        while (i_4 != 1)
                        zmm9 = arg_8
                    
                    zmm4 = 0x3f800000
                    
                    if (r11_3 u< i_36.d)
                        zmm9[0] = zmm9[0] f- zmm5
                        zmm12 = 0x3f800000
                        zmm10[0] = zmm10[0] - zmm6[0]
                        zmm14 = 0x3f800000
                        zmm15 = 0x3f800000
                        uint64_t i_21 = zx.q(i_36.d - r11_3)
                        zmm12[0] = 1f / zmm9[0]
                        zmm13[0] = zmm13[0] - zmm7[0]
                        zmm14[0] = 1f / zmm10[0]
                        zmm15[0] = 1f / zmm13[0]
                        zmm0 = 0x3f800000
                        zmm11[0] = zmm11[0] - zmm8[0]
                        zmm0[0] = 1f / zmm11[0]
                        float var_108_3 = zmm0[0]
                        uint64_t i_5
                        
                        do
                            zmm3 = *r12
                            zmm0 = *(r12 + 4)
                            zmm3[0] = zmm3[0] f- zmm5
                            zmm1 = *(r12 + 8)
                            zmm0[0] = zmm0[0] - zmm6[0]
                            zmm2 = *(r12 + 0xc)
                            zmm1[0] = zmm1[0] - zmm7[0]
                            zmm2[0] = zmm2[0] - zmm8[0]
                            r12 += 0x10
                            zmm3[0] = zmm3[0] * zmm12[0]
                            zmm0[0] = zmm0[0] * zmm14[0]
                            zmm2[0] = zmm2[0] * var_108_3
                            float temp0_93[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            temp0_93[0] = zmm0[0]
                            zmm1[0] = zmm1[0] * zmm15[0]
                            float temp0_94[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0xc6)
                            temp0_94[0] = zmm1[0]
                            float temp0_95[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0x27)
                            temp0_95[0] = zmm2[0]
                            *rcx_50 = _mm_shuffle_ps(temp0_95, temp0_95, 0x39)
                            rcx_50 = &rcx_50[1]
                            i_5 = i_21
                            i_21 -= 1
                        while (i_5 != 1)
                    
                    r10_3 += 1
                while (r10_3 u< arg3)
        case 2
            int32_t r13_2 = 0
            
            if (arg3 != 0)
                do
                    void* rdi_8 = (zx.q(r13_2 * i_36.d) << 4) + arg6
                    char* rbx_6 = zx.q(r13_2 * arg5) + r12
                    
                    if (i_36.d != 0)
                        uint64_t i_25 = zx.q(i_36.d)
                        uint64_t i_6
                        
                        do
                            arg_8.b = *rbx_6
                            arg_8:1.b = rbx_6[1]
                            arg_8:2.b = rbx_6[2]
                            arg_8:3.b = rbx_6[3]
                            result = sub_140acc920(&var_f8, &arg_8)
                            rdi_8 += 0x10
                            rbx_6 = &rbx_6[4]
                            *(rdi_8 - 0x10) = *result
                            i_6 = i_25
                            i_25 -= 1
                        while (i_6 != 1)
                        i_36 = zx.q(arg2)
                    
                    r13_2 += 1
                while (r13_2 u< arg3)
        case 9, 0x1a
            int32_t rbx_10 = 0
            
            if (arg3 != 0)
                do
                    float (* r8_16)[0x4] = (zx.q(rbx_10 * i_36.d) << 4) + arg6
                    void* r10_8 = zx.q(rbx_10 * arg5) + r12
                    
                    if (i_36.d != 0)
                        int32_t var_fc_1 = 0
                        uint64_t i_35 = i_36
                        uint64_t i_7
                        
                        do
                            int32_t rdx_39 = *r10_8
                            int32_t rax_342 = rdx_39 u>> 6 & 0x1f
                            int32_t rcx_69 = rdx_39 & 0x3f
                            
                            if (rax_342 != 0x1f)
                                if (rax_342 == 0)
                                    if (rcx_69 == 0)
                                        rax_342 = -0x70
                                    else
                                        rax_342 = 1
                                        
                                        do
                                            rax_342 -= 1
                                            rcx_69 *= 2
                                        while ((rcx_69.b & 0x40) == 0)
                                        
                                        rcx_69 &= 0x3f
                                
                                var_130[0] = (rax_342 + 0x70) << 0x17 | rcx_69 << 0x11
                            else
                                var_130[0] = (rcx_69 | 0x3fc0) << 0x11
                            
                            int32_t rcx_75 = rdx_39 u>> 0xb & 0x3f
                            int32_t rax_348 = rdx_39 u>> 0x11 & 0x1f
                            int32_t rax_352
                            
                            if (rax_348 != 0x1f)
                                if (rax_348 == 0)
                                    if (rcx_75 == 0)
                                        rax_348 = -0x70
                                    else
                                        rax_348 = 1
                                        
                                        do
                                            rax_348 -= 1
                                            rcx_75 *= 2
                                        while ((rcx_75.b & 0x40) == 0)
                                        
                                        rcx_75 &= 0x3f
                                
                                rax_352 = (rax_348 + 0x70) << 0x17 | rcx_75 << 0x11
                            else
                                rax_352 = ((rdx_39 & 0x1f800) | 0x1fe0000) << 6
                            
                            var_130[1] = rax_352
                            int32_t rcx_79 = rdx_39 u>> 0x16 & 0x1f
                            result = zx.q(rdx_39 u>> 0x1b)
                            
                            if (result.d != 0x1f)
                                if (rdx_39 u< 0x8000000)
                                    if (rcx_79 == 0)
                                        result = 0xffffff90
                                    else
                                        result = 1
                                        
                                        do
                                            result = zx.q(result.d - 1)
                                            rcx_79 *= 2
                                        while ((rcx_79.b & 0x20) == 0)
                                        
                                        rcx_79 &= 0x1f
                                
                                result = zx.q((result.d + 0x70) << 0x17) | zx.q(rcx_79 << 0x12)
                                var_130[2] = result.d
                            else
                                var_130[2] = (rdx_39 u>> 5 & 0x3e0000) | 0x7f800000
                            
                            zmm3 = var_108.o
                            r10_8 += 4
                            zmm1 = var_130[1]
                            zmm3[0] = var_130[0][0]
                            zmm2 = var_130[2]
                            float temp0_154[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            temp0_154[0] = zmm1[0]
                            float temp0_155[0x4] = _mm_shuffle_ps(temp0_154, temp0_154, 0xc6)
                            temp0_155[0] = zmm2[0]
                            float temp0_156[0x4] = _mm_shuffle_ps(temp0_155, temp0_155, 0xc9)
                            *r8_16 = temp0_156
                            r8_16 = &r8_16[1]
                            var_108.o = temp0_156
                            i_7 = i_35
                            i_35 -= 1
                        while (i_7 != 1)
                    
                    rbx_10 += 1
                while (rbx_10 u< arg3)
        case 0xa
            result = arg7
            float rcx_12 = 0f
            arg_8 = 0f
            TEB* gsbase
            
            if (*(result + 4) != 3)
                zmm15 = 0x3f800000
                zmm10 = zx.o(0)
                int32_t r8_3 = arg5
                zmm7 = 0x3f800000
                result = zx.q(data_14401b1a0)
                zmm11 = zx.o(0)
                float var_114_1 = 1f
                zmm12 = zx.o(0)
                float var_110_1 = 1f
                zmm13 = zx.o(0)
                int32_t var_108_1 = 0
                zmm8 = 0x3f800000
                zmm14 = 0x3f800000
                int32_t rdx_10 = 0
                
                if (arg3 != 0)
                    uint64_t r13_4 = zx.q(result.d)
                    
                    do
                        int16_t* r15_8 = zx.q(rdx_10 * r8_3) + r12
                        
                        if (i_36.d != 0)
                            void* ThreadLocalStoragePointer_1 = gsbase->ThreadLocalStoragePointer
                            var_110_1.q = zx.q(i_36.d)
                            int64_t i_8
                            
                            do
                                uint32_t rdi_42 = zx.d(*r15_8)
                                int32_t rsi_20 = (rdi_42 & 0xffff8000) << 0x10
                                int16_t rax_115 = rdi_42.w & 0x7c00
                                int32_t var_138_2
                                
                                if (rax_115 == 0)
                                    int32_t rdi_43 = rdi_42 & 0x3ff
                                    
                                    if (rdi_43 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer_1 + (r13_4 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        zmm0 = zx.o(0)
                                        zmm0[0] = float.s(zx.q(rdi_43))
                                        zmm0 = logf(zmm0[0])
                                        zmm0[0] = zmm0[0] f* data_143cda910
                                        int32_t rdx_11 = 0xa - int.d(zmm0[0])
                                        var_138_2 = (rdi_43 << (rdx_11.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_11) << 0x17 & 0x7f800000) | rsi_20
                                    else
                                        var_138_2 = rsi_20
                                else if (rax_115 != 0x7c00)
                                    var_138_2 = ((rdi_42 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rdi_42 & 0x3ff) << 0xd | rsi_20
                                else
                                    var_138_2 = rsi_20 | 0x477fe000
                                
                                uint32_t rdi_50 = zx.d(r15_8[1])
                                zmm10 = __minss_xmmss_memss(zmm10[0], var_138_2)
                                int32_t rsi_24 = (rdi_50 & 0xffff8000) << 0x10
                                int16_t rax_130 = rdi_50.w & 0x7c00
                                int32_t var_138_3
                                
                                if (rax_130 == 0)
                                    int32_t rdi_51 = rdi_50 & 0x3ff
                                    
                                    if (rdi_51 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer_1 + (r13_4 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        zmm0 = zx.o(0)
                                        zmm0[0] = float.s(zx.q(rdi_51))
                                        zmm0 = logf(zmm0[0])
                                        zmm0[0] = zmm0[0] f* data_143cda910
                                        int32_t rdx_12 = 0xa - int.d(zmm0[0])
                                        var_138_3 = (rdi_51 << (rdx_12.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_12) << 0x17 & 0x7f800000) | rsi_24
                                    else
                                        var_138_3 = rsi_24
                                else if (rax_130 != 0x7c00)
                                    var_138_3 = ((rdi_50 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rdi_50 & 0x3ff) << 0xd | rsi_24
                                else
                                    var_138_3 = rsi_24 | 0x477fe000
                                
                                uint32_t rdi_58 = zx.d(r15_8[2])
                                zmm11 = __minss_xmmss_memss(zmm11[0], var_138_3)
                                int32_t rsi_28 = (rdi_58 & 0xffff8000) << 0x10
                                int16_t rax_145 = rdi_58.w & 0x7c00
                                int32_t var_138_4
                                
                                if (rax_145 == 0)
                                    int32_t rdi_59 = rdi_58 & 0x3ff
                                    
                                    if (rdi_59 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer_1 + (r13_4 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        zmm0 = zx.o(0)
                                        zmm0[0] = float.s(zx.q(rdi_59))
                                        zmm0 = logf(zmm0[0])
                                        zmm0[0] = zmm0[0] f* data_143cda910
                                        int32_t rdx_13 = 0xa - int.d(zmm0[0])
                                        var_138_4 = (rdi_59 << (rdx_13.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_13) << 0x17 & 0x7f800000) | rsi_28
                                    else
                                        var_138_4 = rsi_28
                                else if (rax_145 != 0x7c00)
                                    var_138_4 = ((rdi_58 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rdi_58 & 0x3ff) << 0xd | rsi_28
                                else
                                    var_138_4 = rsi_28 | 0x477fe000
                                
                                uint32_t rdi_66 = zx.d(r15_8[3])
                                zmm12 = __minss_xmmss_memss(zmm12[0], var_138_4)
                                int32_t rsi_32 = (rdi_66 & 0xffff8000) << 0x10
                                int16_t rax_160 = rdi_66.w & 0x7c00
                                int32_t var_138_5
                                
                                if (rax_160 == 0)
                                    int32_t rdi_67 = rdi_66 & 0x3ff
                                    
                                    if (rdi_67 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer_1 + (r13_4 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        zmm0 = zx.o(0)
                                        zmm0[0] = float.s(zx.q(rdi_67))
                                        zmm0 = logf(zmm0[0])
                                        zmm0[0] = zmm0[0] f* data_143cda910
                                        int32_t rdx_14 = 0xa - int.d(zmm0[0])
                                        var_138_5 = (rdi_67 << (rdx_14.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_14) << 0x17 & 0x7f800000) | rsi_32
                                    else
                                        var_138_5 = rsi_32
                                else if (rax_160 != 0x7c00)
                                    var_138_5 = ((rdi_66 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rdi_66 & 0x3ff) << 0xd | rsi_32
                                else
                                    var_138_5 = rsi_32 | 0x477fe000
                                
                                uint32_t rdi_74 = zx.d(*r15_8)
                                int32_t rsi_36 = (rdi_74 & 0xffff8000) << 0x10
                                zmm13 = _mm_min_ss(var_138_5[0], zmm13[0])
                                int16_t rax_175 = rdi_74.w & 0x7c00
                                int32_t var_138_6
                                
                                if (rax_175 == 0)
                                    int32_t rdi_75 = rdi_74 & 0x3ff
                                    
                                    if (rdi_75 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer_1 + (r13_4 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        zmm0 = zx.o(0)
                                        zmm0[0] = float.s(zx.q(rdi_75))
                                        zmm0 = logf(zmm0[0])
                                        zmm0[0] = zmm0[0] f* data_143cda910
                                        int32_t rdx_15 = 0xa - int.d(zmm0[0])
                                        var_138_6 = (rdi_75 << (rdx_15.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_15) << 0x17 & 0x7f800000) | rsi_36
                                    else
                                        var_138_6 = rsi_36
                                else if (rax_175 != 0x7c00)
                                    var_138_6 = ((rdi_74 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rdi_74 & 0x3ff) << 0xd | rsi_36
                                else
                                    var_138_6 = rsi_36 | 0x477fe000
                                
                                uint32_t rdi_82 = zx.d(r15_8[1])
                                int32_t rsi_40 = (rdi_82 & 0xffff8000) << 0x10
                                zmm15 = _mm_max_ss(var_138_6[0], zmm15[0])
                                int16_t rax_190 = rdi_82.w & 0x7c00
                                int32_t var_138_7
                                
                                if (rax_190 == 0)
                                    int32_t rdi_83 = rdi_82 & 0x3ff
                                    
                                    if (rdi_83 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer_1 + (r13_4 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        zmm0 = zx.o(0)
                                        zmm0[0] = float.s(zx.q(rdi_83))
                                        zmm0 = logf(zmm0[0])
                                        zmm0[0] = zmm0[0] f* data_143cda910
                                        int32_t rdx_16 = 0xa - int.d(zmm0[0])
                                        var_138_7 = (rdi_83 << (rdx_16.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_16) << 0x17 & 0x7f800000) | rsi_40
                                    else
                                        var_138_7 = rsi_40
                                else if (rax_190 != 0x7c00)
                                    var_138_7 = ((rdi_82 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rdi_82 & 0x3ff) << 0xd | rsi_40
                                else
                                    var_138_7 = rsi_40 | 0x477fe000
                                
                                uint32_t rdi_90 = zx.d(r15_8[2])
                                int32_t rsi_44 = (rdi_90 & 0xffff8000) << 0x10
                                zmm7 = _mm_max_ss(var_138_7[0], zmm7[0])
                                int16_t rax_205 = rdi_90.w & 0x7c00
                                int32_t var_138_8
                                
                                if (rax_205 == 0)
                                    int32_t rdi_91 = rdi_90 & 0x3ff
                                    
                                    if (rdi_91 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer_1 + (r13_4 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        zmm0 = zx.o(0)
                                        zmm0[0] = float.s(zx.q(rdi_91))
                                        zmm0 = logf(zmm0[0])
                                        zmm0[0] = zmm0[0] f* data_143cda910
                                        int32_t rdx_17 = 0xa - int.d(zmm0[0])
                                        var_138_8 = (rdi_91 << (rdx_17.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_17) << 0x17 & 0x7f800000) | rsi_44
                                    else
                                        var_138_8 = rsi_44
                                else if (rax_205 != 0x7c00)
                                    var_138_8 = ((rdi_90 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rdi_90 & 0x3ff) << 0xd | rsi_44
                                else
                                    var_138_8 = rsi_44 | 0x477fe000
                                
                                uint32_t rdi_98 = zx.d(r15_8[3])
                                int32_t rsi_48 = (rdi_98 & 0xffff8000) << 0x10
                                zmm8 = _mm_max_ss(var_138_8[0], zmm8[0])
                                int16_t rax_220 = rdi_98.w & 0x7c00
                                int32_t var_138_9
                                
                                if (rax_220 == 0)
                                    int32_t rdi_99 = rdi_98 & 0x3ff
                                    
                                    if (rdi_99 != 0)
                                        if (data_143cda914 s> *(0x14
                                                + *(ThreadLocalStoragePointer_1 + (r13_4 << 3))))
                                            _Init_thread_header(&data_143cda914)
                                            
                                            if (data_143cda914 == 0xffffffff)
                                                data_143cda910 = 0x3fb8aa3b
                                                _Init_thread_footer(&data_143cda914)
                                        
                                        zmm0 = zx.o(0)
                                        zmm0[0] = float.s(zx.q(rdi_99))
                                        zmm0 = logf(zmm0[0])
                                        zmm0[0] = zmm0[0] f* data_143cda910
                                        int32_t rdx_18 = 0xa - int.d(zmm0[0])
                                        var_138_9 = (rdi_99 << (rdx_18.b + 0xd) & 0x7fffff)
                                            | ((0x71 - rdx_18) << 0x17 & 0x7f800000) | rsi_48
                                    else
                                        var_138_9 = rsi_48
                                else if (rax_220 != 0x7c00)
                                    var_138_9 = ((rdi_98 u>> 0xa & 0x1f) + 0x70) << 0x17
                                        | (rdi_98 & 0x3ff) << 0xd | rsi_48
                                else
                                    var_138_9 = rsi_48 | 0x477fe000
                                
                                r15_8 = &r15_8[4]
                                i_8 = var_110_1.q
                                var_110_1.q -= 1
                                zmm14 = _mm_max_ss(var_138_9[0], zmm14[0])
                            while (i_8 != 1)
                            r12 = arg4
                            i_36 = zx.q(arg2)
                            rdx_10 = var_108_1
                            r8_3 = arg5
                            var_114_1 = zmm7[0]
                            var_110_1 = zmm8[0]
                        
                        rdx_10 += 1
                        var_108_1 = rdx_10
                    while (rdx_10 u< arg3)
                    
                    result = zx.q(data_14401b1a0)
                    float rcx_31 = 0f
                    
                    if (arg3 != 0)
                        uint64_t r13_5 = zx.q(result.d)
                        
                        do
                            void* r15_12 = zx.q(rcx_31 i* r8_3) + r12
                            var_108_1.q = (zx.q(rcx_31 i* i_36.d) << 4) + arg6
                            
                            if (i_36.d != 0)
                                void* ThreadLocalStoragePointer_2 =
                                    gsbase->ThreadLocalStoragePointer
                                zmm7[0] = zmm7[0] - zmm11[0]
                                var_130[0].q = zx.q(i_36.d)
                                zmm15[0] = zmm15[0] - zmm10[0]
                                zmm14[0] = zmm14[0] - zmm13[0]
                                zmm8[0] = zmm8[0] - zmm12[0]
                                
                                do
                                    uint32_t rdi_106 = zx.d(*(r15_12 + 6))
                                    int32_t rsi_52 = (rdi_106 & 0xffff8000) << 0x10
                                    int16_t rax_236 = rdi_106.w & 0x7c00
                                    int32_t var_120_2
                                    
                                    if (rax_236 == 0)
                                        int32_t rdi_107 = rdi_106 & 0x3ff
                                        
                                        if (rdi_107 != 0)
                                            if (data_143cda914 s> *(0x14 +
                                                    *(ThreadLocalStoragePointer_2 + (r13_5 << 3))))
                                                _Init_thread_header(&data_143cda914)
                                                
                                                if (data_143cda914 == 0xffffffff)
                                                    data_143cda910 = 0x3fb8aa3b
                                                    _Init_thread_footer(&data_143cda914)
                                            
                                            zmm0 = zx.o(0)
                                            zmm0[0] = float.s(zx.q(rdi_107))
                                            zmm0 = logf(zmm0[0])
                                            zmm0[0] = zmm0[0] f* data_143cda910
                                            int32_t rdx_19 = 0xa - int.d(zmm0[0])
                                            var_120_2 = (rdi_107 << (rdx_19.b + 0xd) & 0x7fffff)
                                                | ((0x71 - rdx_19) << 0x17 & 0x7f800000) | rsi_52
                                        else
                                            var_120_2 = rsi_52
                                    else if (rax_236 != 0x7c00)
                                        var_120_2 = ((rdi_106 u>> 0xa & 0x1f) + 0x70) << 0x17
                                            | (rdi_106 & 0x3ff) << 0xd | rsi_52
                                    else
                                        var_120_2 = rsi_52 | 0x477fe000
                                    
                                    uint32_t rdi_114 = zx.d(*(r15_12 + 4))
                                    int32_t rsi_56 = (rdi_114 & 0xffff8000) << 0x10
                                    int16_t rax_251 = rdi_114.w & 0x7c00
                                    int32_t var_11c_2
                                    
                                    if (rax_251 == 0)
                                        int32_t rdi_115 = rdi_114 & 0x3ff
                                        
                                        if (rdi_115 != 0)
                                            if (data_143cda914 s> *(0x14 +
                                                    *(ThreadLocalStoragePointer_2 + (r13_5 << 3))))
                                                _Init_thread_header(&data_143cda914)
                                                
                                                if (data_143cda914 == 0xffffffff)
                                                    data_143cda910 = 0x3fb8aa3b
                                                    _Init_thread_footer(&data_143cda914)
                                            
                                            zmm0 = zx.o(0)
                                            zmm0[0] = float.s(zx.q(rdi_115))
                                            zmm0 = logf(zmm0[0])
                                            zmm0[0] = zmm0[0] f* data_143cda910
                                            int32_t rdx_20 = 0xa - int.d(zmm0[0])
                                            var_11c_2 = (rdi_115 << (rdx_20.b + 0xd) & 0x7fffff)
                                                | ((0x71 - rdx_20) << 0x17 & 0x7f800000) | rsi_56
                                        else
                                            var_11c_2 = rsi_56
                                    else if (rax_251 != 0x7c00)
                                        var_11c_2 = ((rdi_114 u>> 0xa & 0x1f) + 0x70) << 0x17
                                            | (rdi_114 & 0x3ff) << 0xd | rsi_56
                                    else
                                        var_11c_2 = rsi_56 | 0x477fe000
                                    
                                    uint32_t rdi_122 = zx.d(*(r15_12 + 2))
                                    int32_t rsi_60 = (rdi_122 & 0xffff8000) << 0x10
                                    int16_t rax_266 = rdi_122.w & 0x7c00
                                    int32_t var_118_2
                                    
                                    if (rax_266 == 0)
                                        int32_t rdi_123 = rdi_122 & 0x3ff
                                        
                                        if (rdi_123 != 0)
                                            if (data_143cda914 s> *(0x14 +
                                                    *(ThreadLocalStoragePointer_2 + (r13_5 << 3))))
                                                _Init_thread_header(&data_143cda914)
                                                
                                                if (data_143cda914 == 0xffffffff)
                                                    data_143cda910 = 0x3fb8aa3b
                                                    _Init_thread_footer(&data_143cda914)
                                            
                                            zmm0 = zx.o(0)
                                            zmm0[0] = float.s(zx.q(rdi_123))
                                            zmm0 = logf(zmm0[0])
                                            zmm0[0] = zmm0[0] f* data_143cda910
                                            int32_t rdx_21 = 0xa - int.d(zmm0[0])
                                            var_118_2 = (rdi_123 << (rdx_21.b + 0xd) & 0x7fffff)
                                                | ((0x71 - rdx_21) << 0x17 & 0x7f800000) | rsi_60
                                        else
                                            var_118_2 = rsi_60
                                    else if (rax_266 != 0x7c00)
                                        var_118_2 = ((rdi_122 u>> 0xa & 0x1f) + 0x70) << 0x17
                                            | (rdi_122 & 0x3ff) << 0xd | rsi_60
                                    else
                                        var_118_2 = rsi_60 | 0x477fe000
                                    
                                    uint32_t rdi_130 = zx.d(*r15_12)
                                    int32_t rsi_64 = (rdi_130 & 0xffff8000) << 0x10
                                    result.w = rdi_130.w & 0x7c00
                                    int32_t var_138_10
                                    
                                    if (result.w == 0)
                                        int32_t rdi_131 = rdi_130 & 0x3ff
                                        
                                        if (rdi_131 != 0)
                                            if (data_143cda914 s> *(0x14 +
                                                    *(ThreadLocalStoragePointer_2 + (r13_5 << 3))))
                                                _Init_thread_header(&data_143cda914)
                                                
                                                if (data_143cda914 == 0xffffffff)
                                                    data_143cda910 = 0x3fb8aa3b
                                                    _Init_thread_footer(&data_143cda914)
                                            
                                            zmm0 = zx.o(0)
                                            zmm0[0] = float.s(zx.q(rdi_131))
                                            zmm0 = logf(zmm0[0])
                                            zmm0[0] = zmm0[0] f* data_143cda910
                                            int32_t rdx_22 = 0xa - int.d(zmm0[0])
                                            result = zx.q((0x71 - rdx_22) << 0x17) & 0x7f800000
                                            var_138_10 = (rdi_131 << (rdx_22.b + 0xd) & 0x7fffff)
                                                | result.d | rsi_64
                                        else
                                            var_138_10 = rsi_64
                                    else if (result.w != 0x7c00)
                                        result = zx.q(((rdi_130 u>> 0xa & 0x1f) + 0x70) << 0x17)
                                            | zx.q((rdi_130 & 0x3ff) << 0xd) | zx.q(rsi_64)
                                        var_138_10 = result.d
                                    else
                                        var_138_10 = rsi_64 | 0x477fe000
                                    
                                    zmm3 = var_138_10
                                    r15_12 += 8
                                    float (* rcx_39)[0x4] = var_108_1.q
                                    zmm3[0] = zmm3[0] - zmm10[0]
                                    zmm0 = var_118_2
                                    zmm1 = var_11c_2
                                    zmm0[0] = zmm0[0] - zmm11[0]
                                    zmm2 = var_120_2
                                    zmm1[0] = zmm1[0] - zmm12[0]
                                    zmm2[0] = zmm2[0] - zmm13[0]
                                    zmm3[0] = zmm3[0] / zmm15[0]
                                    zmm0[0] = zmm0[0] / zmm7[0]
                                    float temp0_33[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                                    temp0_33[0] = zmm0[0]
                                    float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc6)
                                    zmm1[0] = zmm1[0] / zmm8[0]
                                    zmm2[0] = zmm2[0] / zmm14[0]
                                    temp0_34[0] = zmm1[0]
                                    float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x27)
                                    temp0_35[0] = zmm2[0]
                                    *rcx_39 = _mm_shuffle_ps(temp0_35, temp0_35, 0x39)
                                    var_130[0].q -= 1
                                    var_108_1.q = &rcx_39[1]
                                while (var_130[0].q != 1)
                                
                                r12 = arg4
                                i_36 = zx.q(arg2)
                                r8_3 = arg5
                            
                            zmm8 = var_110_1
                            rcx_31 = arg_8 i+ 1
                            zmm7 = var_114_1
                            arg_8 = rcx_31
                        while (rcx_31 u< arg3)
            else if (arg3 != 0)
                uint64_t r13_3 = zx.q(data_14401b1a0)
                
                do
                    void* r15_5 = zx.q(rcx_12 i* arg5) + r12
                    var_108.q = (zx.q(rcx_12 i* i_36.d) << 4) + arg6
                    
                    if (i_36.d != 0)
                        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                        int32_t var_110
                        var_110.q = zx.q(i_36.d)
                        int64_t i_9
                        
                        do
                            uint32_t rdi_10 = zx.d(*(r15_5 + 6))
                            int32_t rsi_4 = (rdi_10 & 0xffff8000) << 0x10
                            int16_t rax_57 = rdi_10.w & 0x7c00
                            int32_t var_138_1
                            
                            if (rax_57 == 0)
                                int32_t rdi_11 = rdi_10 & 0x3ff
                                
                                if (rdi_11 != 0)
                                    if (data_143cda914 s>
                                            *(0x14 + *(ThreadLocalStoragePointer + (r13_3 << 3))))
                                        _Init_thread_header(&data_143cda914)
                                        
                                        if (data_143cda914 == 0xffffffff)
                                            data_143cda910 = 0x3fb8aa3b
                                            _Init_thread_footer(&data_143cda914)
                                    
                                    zmm0 = zx.o(0)
                                    zmm0[0] = float.s(zx.q(rdi_11))
                                    zmm0 = logf(zmm0[0])
                                    zmm0[0] = zmm0[0] f* data_143cda910
                                    int32_t rdx_6 = 0xa - int.d(zmm0[0])
                                    var_138_1 = (rdi_11 << (rdx_6.b + 0xd) & 0x7fffff)
                                        | ((0x71 - rdx_6) << 0x17 & 0x7f800000) | rsi_4
                                else
                                    var_138_1 = rsi_4
                            else if (rax_57 != 0x7c00)
                                var_138_1 = ((rdi_10 u>> 0xa & 0x1f) + 0x70) << 0x17
                                    | (rdi_10 & 0x3ff) << 0xd | rsi_4
                            else
                                var_138_1 = rsi_4 | 0x477fe000
                            
                            uint32_t rdi_18 = zx.d(*(r15_5 + 4))
                            int32_t rsi_8 = (rdi_18 & 0xffff8000) << 0x10
                            int16_t rax_72 = rdi_18.w & 0x7c00
                            int32_t var_118_1
                            
                            if (rax_72 == 0)
                                int32_t rdi_19 = rdi_18 & 0x3ff
                                
                                if (rdi_19 != 0)
                                    if (data_143cda914 s>
                                            *(0x14 + *(ThreadLocalStoragePointer + (r13_3 << 3))))
                                        _Init_thread_header(&data_143cda914)
                                        
                                        if (data_143cda914 == 0xffffffff)
                                            data_143cda910 = 0x3fb8aa3b
                                            _Init_thread_footer(&data_143cda914)
                                    
                                    zmm0 = zx.o(0)
                                    zmm0[0] = float.s(zx.q(rdi_19))
                                    zmm0 = logf(zmm0[0])
                                    zmm0[0] = zmm0[0] f* data_143cda910
                                    int32_t rdx_7 = 0xa - int.d(zmm0[0])
                                    var_118_1 = (rdi_19 << (rdx_7.b + 0xd) & 0x7fffff)
                                        | ((0x71 - rdx_7) << 0x17 & 0x7f800000) | rsi_8
                                else
                                    var_118_1 = rsi_8
                            else if (rax_72 != 0x7c00)
                                var_118_1 = ((rdi_18 u>> 0xa & 0x1f) + 0x70) << 0x17
                                    | (rdi_18 & 0x3ff) << 0xd | rsi_8
                            else
                                var_118_1 = rsi_8 | 0x477fe000
                            
                            uint32_t rdi_26 = zx.d(*(r15_5 + 2))
                            int32_t rsi_12 = (rdi_26 & 0xffff8000) << 0x10
                            int16_t rax_87 = rdi_26.w & 0x7c00
                            int32_t var_11c_1
                            
                            if (rax_87 == 0)
                                int32_t rdi_27 = rdi_26 & 0x3ff
                                
                                if (rdi_27 != 0)
                                    if (data_143cda914 s>
                                            *(0x14 + *(ThreadLocalStoragePointer + (r13_3 << 3))))
                                        _Init_thread_header(&data_143cda914)
                                        
                                        if (data_143cda914 == 0xffffffff)
                                            data_143cda910 = 0x3fb8aa3b
                                            _Init_thread_footer(&data_143cda914)
                                    
                                    zmm0 = zx.o(0)
                                    zmm0[0] = float.s(zx.q(rdi_27))
                                    zmm0 = logf(zmm0[0])
                                    zmm0[0] = zmm0[0] f* data_143cda910
                                    int32_t rdx_8 = 0xa - int.d(zmm0[0])
                                    var_11c_1 = (rdi_27 << (rdx_8.b + 0xd) & 0x7fffff)
                                        | ((0x71 - rdx_8) << 0x17 & 0x7f800000) | rsi_12
                                else
                                    var_11c_1 = rsi_12
                            else if (rax_87 != 0x7c00)
                                var_11c_1 = ((rdi_26 u>> 0xa & 0x1f) + 0x70) << 0x17
                                    | (rdi_26 & 0x3ff) << 0xd | rsi_12
                            else
                                var_11c_1 = rsi_12 | 0x477fe000
                            
                            uint32_t rdi_34 = zx.d(*r15_5)
                            int32_t rsi_16 = (rdi_34 & 0xffff8000) << 0x10
                            result.w = rdi_34.w & 0x7c00
                            int32_t var_120_1
                            
                            if (result.w == 0)
                                int32_t rdi_35 = rdi_34 & 0x3ff
                                
                                if (rdi_35 != 0)
                                    if (data_143cda914 s>
                                            *(0x14 + *(ThreadLocalStoragePointer + (r13_3 << 3))))
                                        _Init_thread_header(&data_143cda914)
                                        
                                        if (data_143cda914 == 0xffffffff)
                                            data_143cda910 = 0x3fb8aa3b
                                            _Init_thread_footer(&data_143cda914)
                                    
                                    zmm0 = zx.o(0)
                                    zmm0[0] = float.s(zx.q(rdi_35))
                                    zmm0 = logf(zmm0[0])
                                    zmm0[0] = zmm0[0] f* data_143cda910
                                    int32_t rdx_9 = 0xa - int.d(zmm0[0])
                                    result = zx.q((0x71 - rdx_9) << 0x17) & 0x7f800000
                                    var_120_1 =
                                        (rdi_35 << (rdx_9.b + 0xd) & 0x7fffff) | result.d | rsi_16
                                else
                                    var_120_1 = rsi_16
                            else if (result.w != 0x7c00)
                                result = zx.q(((rdi_34 u>> 0xa & 0x1f) + 0x70) << 0x17)
                                    | zx.q((rdi_34 & 0x3ff) << 0xd) | zx.q(rsi_16)
                                var_120_1 = result.d
                            else
                                var_120_1 = rsi_16 | 0x477fe000
                            
                            float (* rcx_20)[0x4] = var_108.q
                            r15_5 += 8
                            zmm3 = var_120_1
                            float temp0_21[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            temp0_21[0] = var_11c_1[0]
                            float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
                            temp0_22[0] = var_118_1[0]
                            float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x27)
                            temp0_23[0] = var_138_1[0]
                            *rcx_20 = _mm_shuffle_ps(temp0_23, temp0_23, 0x39)
                            i_9 = var_110.q
                            var_110.q -= 1
                            var_108.q = &rcx_20[1]
                        while (i_9 != 1)
                        r12 = arg4
                        i_36 = zx.q(arg2)
                    
                    rcx_12 = arg_8 i+ 1
                    arg_8 = rcx_12
                while (rcx_12 u< arg3)
        case 0xb, 0x14
            int32_t r11_6 = 0
            
            if (arg3 != 0)
                do
                    uint32_t rdi_140 = 0
                    void* rdx_38 = (zx.q(r11_6 * i_36.d) << 4) + arg6
                    void* r8_12 = zx.q(r11_6 * arg5) + r12
                    
                    if (i_36.d u>= 4)
                        zmm8 = *(arg7 + 0xc)
                        void* r10_4 = rdx_38 + 0x20
                        uint64_t rax_331 = zx.q(((i_36 - 4).d u>> 2) + 1)
                        var_130[2].q = 0
                        uint64_t i_23 = zx.q(rax_331.d)
                        rdi_140 = (rax_331 << 2).d
                        uint64_t i_10
                        
                        do
                            int32_t rcx_58 = *r8_12
                            zmm0 = zx.o(0)
                            zmm1 = 0x3f800000
                            zmm0[0] = float.s(zx.q(rcx_58) & 0xffffff)
                            zmm0[0] = zmm0[0] * 5.96046448e-08f
                            float temp0_129[0x4] = _mm_min_ss(zmm0[0], 0x3f800000)
                            temp0_129[0] = temp0_129[0] * 0.100000001f
                            temp0_129[0] = temp0_129[0] - 0.100000001f
                            temp0_129[0] = temp0_129[0] * zmm8[0]
                            zmm1[0] = 1f / temp0_129[0]
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(rcx_58 u>> 0x18)
                            zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                            zmm0[0] = zmm0[0] * 0.00392156886f
                            var_130[0] = _mm_min_ss(zmm1[0], 0x3f800000)[0]
                            zmm1 = 0x3f800000
                            float temp0_132[0x4] = _mm_shuffle_ps(var_130, var_130, 0xe1)
                            temp0_132[0] = zmm0[0]
                            zmm0 = zx.o(0)
                            float temp0_133[0x4] = _mm_shuffle_ps(temp0_132, temp0_132, 0xe1)
                            *rdx_38 = temp0_133
                            int32_t rcx_60 = *(r8_12 + 4)
                            zmm0[0] = float.s(zx.q(rcx_60) & 0xffffff)
                            zmm0[0] = zmm0[0] * 5.96046448e-08f
                            float temp0_134[0x4] = _mm_min_ss(zmm0[0], 0x3f800000)
                            temp0_134[0] = temp0_134[0] * 0.100000001f
                            temp0_134[0] = temp0_134[0] - 0.100000001f
                            temp0_134[0] = temp0_134[0] * zmm8[0]
                            zmm1[0] = 1f / temp0_134[0]
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(rcx_60 u>> 0x18)
                            zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                            zmm0[0] = zmm0[0] * 0.00392156886f
                            temp0_133[0] = _mm_min_ss(zmm1[0], 0x3f800000)[0]
                            zmm1 = 0x3f800000
                            float temp0_137[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0xe1)
                            temp0_137[0] = zmm0[0]
                            zmm0 = zx.o(0)
                            float temp0_138[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xe1)
                            *(r10_4 - 0x10) = temp0_138
                            int32_t rcx_62 = *(r8_12 + 8)
                            zmm0[0] = float.s(zx.q(rcx_62) & 0xffffff)
                            zmm0[0] = zmm0[0] * 5.96046448e-08f
                            float temp0_139[0x4] = _mm_min_ss(zmm0[0], 0x3f800000)
                            temp0_139[0] = temp0_139[0] * 0.100000001f
                            temp0_139[0] = temp0_139[0] - 0.100000001f
                            temp0_139[0] = temp0_139[0] * zmm8[0]
                            zmm1[0] = 1f / temp0_139[0]
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(rcx_62 u>> 0x18)
                            zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                            zmm0[0] = zmm0[0] * 0.00392156886f
                            temp0_138[0] = _mm_min_ss(zmm1[0], 0x3f800000)[0]
                            zmm1 = 0x3f800000
                            float temp0_142[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xe1)
                            temp0_142[0] = zmm0[0]
                            zmm0 = zx.o(0)
                            float temp0_143[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xe1)
                            *r10_4 = temp0_143
                            int32_t rcx_64 = *(r8_12 + 0xc)
                            result = zx.q(rcx_64) & 0xffffff
                            zmm0[0] = float.s(result)
                            zmm0[0] = zmm0[0] * 5.96046448e-08f
                            float temp0_144[0x4] = _mm_min_ss(zmm0[0], 0x3f800000)
                            temp0_144[0] = temp0_144[0] * 0.100000001f
                            temp0_144[0] = temp0_144[0] - 0.100000001f
                            temp0_144[0] = temp0_144[0] * zmm8[0]
                            zmm1[0] = 1f / temp0_144[0]
                            rdx_38 += 0x40
                            r8_12 += 0x10
                            zmm0 = zx.o(0)
                            zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                            zmm0[0] = float.s(rcx_64 u>> 0x18)
                            float temp0_146[0x4] = _mm_min_ss(zmm1[0], 0x3f800000)
                            zmm0[0] = zmm0[0] * 0.00392156886f
                            temp0_143[0] = temp0_146[0]
                            float temp0_147[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0xe1)
                            temp0_147[0] = zmm0[0]
                            float temp0_148[0x4] = _mm_shuffle_ps(temp0_147, temp0_147, 0xe1)
                            *(r10_4 + 0x10) = temp0_148
                            r10_4 += 0x40
                            var_130 = temp0_148
                            i_10 = i_23
                            i_23 -= 1
                        while (i_10 != 1)
                    
                    if (rdi_140 u< i_36.d)
                        zmm8 = *(arg7 + 0xc)
                        uint64_t i_33 = zx.q(i_36.d - rdi_140)
                        var_130[2].q = 0
                        uint64_t i_11
                        
                        do
                            int32_t rcx_66 = *r8_12
                            zmm0 = zx.o(0)
                            result = zx.q(rcx_66) & 0xffffff
                            zmm2 = 0x3f800000
                            r8_12 += 4
                            zmm0[0] = float.s(result)
                            zmm0[0] = zmm0[0] * 5.96046448e-08f
                            float temp0_149[0x4] = _mm_min_ss(zmm0[0], 0x3f800000)
                            temp0_149[0] = temp0_149[0] * 0.100000001f
                            temp0_149[0] = temp0_149[0] - 0.100000001f
                            temp0_149[0] = temp0_149[0] * zmm8[0]
                            zmm2[0] = 1f / temp0_149[0]
                            zmm0 = zx.o(0)
                            zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
                            zmm0[0] = float.s(rcx_66 u>> 0x18)
                            float temp0_151[0x4] = _mm_min_ss(zmm2[0], 0x3f800000)
                            zmm0[0] = zmm0[0] * 0.00392156886f
                            var_130[0] = temp0_151[0]
                            float temp0_152[0x4] = _mm_shuffle_ps(var_130, var_130, 0xe1)
                            temp0_152[0] = zmm0[0]
                            float temp0_153[0x4] = _mm_shuffle_ps(temp0_152, temp0_152, 0xe1)
                            *rdx_38 = temp0_153
                            rdx_38 += 0x10
                            var_130 = temp0_153
                            i_11 = i_33
                            i_33 -= 1
                        while (i_11 != 1)
                    
                    r11_6 += 1
                while (r11_6 u< arg3)
        case 0xe
            int32_t r11_5 = 0
            
            if (arg3 != 0)
                do
                    uint32_t rbx_9 = 0
                    void* rdx_34 = (zx.q(r11_5 * i_36.d) << 4) + arg6
                    void* rcx_57 = zx.q(r11_5 * arg5) + r12
                    
                    if (i_36.d u>= 4)
                        var_130[2] = 0
                        void* r8_8 = rdx_34 + 0x20
                        uint64_t rax_320 = zx.q(((i_36 - 4).d u>> 2) + 1)
                        int32_t var_124_1 = 0x3f800000
                        uint64_t i_32 = zx.q(rax_320.d)
                        rbx_9 = (rax_320 << 2).d
                        uint64_t i_12
                        
                        do
                            r8_8 += 0x40
                            zmm0 = zx.o(0)
                            zmm1 = zx.o(0)
                            zmm0[0] = float.s(zx.d(*rcx_57))
                            zmm1[0] = float.s(zx.d(*(rcx_57 + 2)))
                            zmm0[0] = zmm0[0] * 1.52590219e-05f
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            var_130[0] = zmm0[0]
                            zmm0 = zx.o(0)
                            float temp0_117[0x4] = _mm_shuffle_ps(var_130, var_130, 0xe1)
                            temp0_117[0] = zmm1[0]
                            zmm1 = zx.o(0)
                            float temp0_118[0x4] = _mm_shuffle_ps(temp0_117, temp0_117, 0xe1)
                            *rdx_34 = temp0_118
                            rdx_34 += 0x40
                            zmm0[0] = float.s(zx.d(*(rcx_57 + 4)))
                            zmm1[0] = float.s(zx.d(*(rcx_57 + 6)))
                            zmm0[0] = zmm0[0] * 1.52590219e-05f
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            temp0_118[0] = zmm0[0]
                            zmm0 = zx.o(0)
                            float temp0_119[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xe1)
                            temp0_119[0] = zmm1[0]
                            zmm1 = zx.o(0)
                            float temp0_120[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0xe1)
                            *(r8_8 - 0x50) = temp0_120
                            zmm0[0] = float.s(zx.d(*(rcx_57 + 8)))
                            zmm1[0] = float.s(zx.d(*(rcx_57 + 0xa)))
                            zmm0[0] = zmm0[0] * 1.52590219e-05f
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            temp0_120[0] = zmm0[0]
                            zmm0 = zx.o(0)
                            float temp0_121[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xe1)
                            temp0_121[0] = zmm1[0]
                            zmm1 = zx.o(0)
                            float temp0_122[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0xe1)
                            *(r8_8 - 0x40) = temp0_122
                            zmm0[0] = float.s(zx.d(*(rcx_57 + 0xc)))
                            result = zx.q(*(rcx_57 + 0xe))
                            rcx_57 += 0x10
                            zmm1[0] = float.s(result.d)
                            zmm0[0] = zmm0[0] * 1.52590219e-05f
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            temp0_122[0] = zmm0[0]
                            float temp0_123[0x4] = _mm_shuffle_ps(temp0_122, temp0_122, 0xe1)
                            temp0_123[0] = zmm1[0]
                            float temp0_124[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0xe1)
                            *(r8_8 - 0x30) = temp0_124
                            var_130 = temp0_124
                            i_12 = i_32
                            i_32 -= 1
                        while (i_12 != 1)
                    
                    if (rbx_9 u< i_36.d)
                        var_130[2] = 0
                        uint64_t i_28 = zx.q(i_36.d - rbx_9)
                        int32_t var_124_2 = 0x3f800000
                        uint64_t i_13
                        
                        do
                            uint32_t rax_328 = zx.d(*rcx_57)
                            rdx_34 += 0x10
                            rcx_57 += 4
                            result = zx.q(*(rcx_57 - 2))
                            float temp0_125[0x4] = _mm_cvtepi32_ps(zx.o(rax_328))
                            temp0_125[0] = temp0_125[0] * 1.52590219e-05f
                            float temp0_126[0x4] = _mm_cvtepi32_ps(zx.o(result.d))
                            var_130[0] = temp0_125[0]
                            float temp0_127[0x4] = _mm_shuffle_ps(var_130, var_130, 0xe1)
                            temp0_126[0] = temp0_126[0] * 1.52590219e-05f
                            temp0_127[0] = temp0_126[0]
                            float temp0_128[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xe1)
                            *(rdx_34 - 0x10) = temp0_128
                            var_130 = temp0_128
                            i_13 = i_28
                            i_28 -= 1
                        while (i_13 != 1)
                    
                    r11_5 += 1
                while (r11_5 u< arg3)
        case 0x12
            int32_t r11_1 = 0
            
            if (arg3 != 0)
                do
                    uint32_t r10_1 = 0
                    float (* rdx_5)[0x4] = (zx.q(r11_1 * i_36.d) << 4) + arg6
                    int32_t* r8_2 = zx.q(r11_1 * arg5) + r12
                    
                    if (i_36.d u>= 4)
                        float* rdi_9 = &rdx_5[2]
                        uint64_t rax_10 = zx.q(((i_36 - 4).d u>> 2) + 1)
                        uint64_t i_22 = zx.q(rax_10.d)
                        r10_1 = (rax_10 << 2).d
                        uint64_t i_14
                        
                        do
                            int32_t rcx_2 = *r8_2
                            zmm3 = zx.o(0)
                            zmm2 = zx.o(0)
                            zmm1 = zx.o(0)
                            zmm0 = zx.o(0)
                            zmm3[0] = float.s(zx.q(rcx_2) & 0x3ff)
                            zmm2[0] = float.s(zx.q(rcx_2 u>> 0xa) & 0x3ff)
                            zmm3[0] = zmm3[0] * 0.000977517106f
                            zmm1[0] = float.s(zx.q(rcx_2 u>> 0x14) & 0x3ff)
                            zmm0[0] = float.s(zx.q(rcx_2 u>> 0x1e))
                            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            zmm2[0] = zmm2[0] * 0.000977517106f
                            zmm1[0] = zmm1[0] * 0.000977517106f
                            temp0_1[0] = zmm2[0]
                            zmm0[0] = zmm0[0] * 0.333333343f
                            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
                            zmm2 = zx.o(0)
                            temp0_2[0] = zmm1[0]
                            zmm1 = zx.o(0)
                            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
                            temp0_3[0] = zmm0[0]
                            zmm0 = zx.o(0)
                            *rdx_5 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
                            int32_t rcx_4 = r8_2[1]
                            zmm3 = zx.o(0)
                            zmm3[0] = float.s(zx.q(rcx_4) & 0x3ff)
                            zmm2[0] = float.s(zx.q(rcx_4 u>> 0xa) & 0x3ff)
                            zmm3[0] = zmm3[0] * 0.000977517106f
                            zmm1[0] = float.s(zx.q(rcx_4 u>> 0x14) & 0x3ff)
                            zmm0[0] = float.s(zx.q(rcx_4 u>> 0x1e))
                            float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            zmm2[0] = zmm2[0] * 0.000977517106f
                            zmm1[0] = zmm1[0] * 0.000977517106f
                            temp0_5[0] = zmm2[0]
                            zmm0[0] = zmm0[0] * 0.333333343f
                            float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
                            zmm2 = zx.o(0)
                            temp0_6[0] = zmm1[0]
                            zmm1 = zx.o(0)
                            float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
                            temp0_7[0] = zmm0[0]
                            *(rdi_9 - 0x10) = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
                            int32_t rcx_6 = r8_2[2]
                            zmm3 = zx.o(0)
                            zmm3[0] = float.s(zx.q(rcx_6) & 0x3ff)
                            zmm2[0] = float.s(zx.q(rcx_6 u>> 0xa) & 0x3ff)
                            zmm3[0] = zmm3[0] * 0.000977517106f
                            zmm1[0] = float.s(zx.q(rcx_6 u>> 0x14) & 0x3ff)
                            zmm2[0] = zmm2[0] * 0.000977517106f
                            zmm1[0] = zmm1[0] * 0.000977517106f
                            float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            rdi_9 = &rdi_9[0x10]
                            temp0_9[0] = zmm2[0]
                            float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
                            zmm0 = zx.o(0)
                            temp0_10[0] = zmm1[0]
                            zmm2 = zx.o(0)
                            float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x27)
                            zmm1 = zx.o(0)
                            zmm0[0] = float.s(zx.q(rcx_6 u>> 0x1e))
                            rdx_5 = &rdx_5[4]
                            zmm0[0] = zmm0[0] * 0.333333343f
                            temp0_11[0] = zmm0[0]
                            zmm0 = zx.o(0)
                            *(rdi_9 - 0x40) = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
                            int32_t rcx_8 = r8_2[3]
                            zmm3 = zx.o(0)
                            r8_2 = &r8_2[4]
                            zmm3[0] = float.s(zx.q(rcx_8) & 0x3ff)
                            zmm3[0] = zmm3[0] * 0.000977517106f
                            zmm2[0] = float.s(zx.q(rcx_8 u>> 0xa) & 0x3ff)
                            float temp0_13[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            zmm2[0] = zmm2[0] * 0.000977517106f
                            zmm1[0] = float.s(zx.q(rcx_8 u>> 0x14) & 0x3ff)
                            result = zx.q(rcx_8 u>> 0x1e)
                            temp0_13[0] = zmm2[0]
                            float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
                            zmm1[0] = zmm1[0] * 0.000977517106f
                            zmm0[0] = float.s(result)
                            temp0_14[0] = zmm1[0]
                            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
                            zmm0[0] = zmm0[0] * 0.333333343f
                            temp0_15[0] = zmm0[0]
                            *(rdi_9 - 0x30) = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
                            i_14 = i_22
                            i_22 -= 1
                        while (i_14 != 1)
                    
                    if (r10_1 u< i_36.d)
                        uint64_t i_30 = zx.q(i_36.d - r10_1)
                        uint64_t i_15
                        
                        do
                            int32_t rcx_10 = *r8_2
                            rdx_5 = &rdx_5[1]
                            zmm3 = zx.o(0)
                            r8_2 = &r8_2[1]
                            zmm2 = zx.o(0)
                            zmm1 = zx.o(0)
                            zmm0 = zx.o(0)
                            zmm3[0] = float.s(zx.q(rcx_10) & 0x3ff)
                            zmm3[0] = zmm3[0] * 0.000977517106f
                            zmm2[0] = float.s(zx.q(rcx_10 u>> 0xa) & 0x3ff)
                            float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            zmm2[0] = zmm2[0] * 0.000977517106f
                            zmm1[0] = float.s(zx.q(rcx_10 u>> 0x14) & 0x3ff)
                            result = zx.q(rcx_10 u>> 0x1e)
                            temp0_17[0] = zmm2[0]
                            float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
                            zmm1[0] = zmm1[0] * 0.000977517106f
                            zmm0[0] = float.s(result)
                            temp0_18[0] = zmm1[0]
                            float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x27)
                            zmm0[0] = zmm0[0] * 0.333333343f
                            temp0_19[0] = zmm0[0]
                            rdx_5[-1] = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
                            i_15 = i_30
                            i_30 -= 1
                        while (i_15 != 1)
                    
                    r11_1 += 1
                while (r11_1 u< arg3)
        case 0x13
            int32_t r11_4 = 0
            
            if (arg3 != 0)
                do
                    uint32_t rbx_8 = 0
                    void* rdx_30 = (zx.q(r11_4 * i_36.d) << 4) + arg6
                    void* rcx_53 = zx.q(r11_4 * arg5) + r12
                    
                    if (i_36.d u>= 4)
                        void* r8_6 = rdx_30 + 0x20
                        uint64_t rax_299 = zx.q(((i_36 - 4).d u>> 2) + 1)
                        uint64_t i_31 = zx.q(rax_299.d)
                        rbx_8 = (rax_299 << 2).d
                        uint64_t i_16
                        
                        do
                            zmm3 = zx.o(0)
                            zmm0 = zx.o(0)
                            zmm4 = zx.o(0)
                            zmm1 = zx.o(0)
                            zmm2 = zx.o(0)
                            zmm3[0] = float.s(zx.d(*rcx_53))
                            zmm0[0] = float.s(zx.d(*(rcx_53 + 2)))
                            zmm1[0] = float.s(zx.d(*(rcx_53 + 4)))
                            zmm2[0] = float.s(zx.d(*(rcx_53 + 6)))
                            zmm3[0] = zmm3[0] * 1.52590219e-05f
                            zmm0[0] = zmm0[0] * 1.52590219e-05f
                            float temp0_97[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            temp0_97[0] = zmm0[0]
                            zmm2[0] = zmm2[0] * 1.52590219e-05f
                            float temp0_98[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xc6)
                            zmm0 = zx.o(0)
                            temp0_98[0] = zmm1[0]
                            zmm1 = zx.o(0)
                            float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0x27)
                            temp0_99[0] = zmm2[0]
                            zmm2 = zx.o(0)
                            *rdx_30 = _mm_shuffle_ps(temp0_99, temp0_99, 0x39)
                            zmm3 = zx.o(0)
                            zmm4[0] = float.s(zx.d(*(rcx_53 + 8)))
                            zmm0[0] = float.s(zx.d(*(rcx_53 + 0xa)))
                            zmm1[0] = float.s(zx.d(*(rcx_53 + 0xc)))
                            zmm2[0] = float.s(zx.d(*(rcx_53 + 0xe)))
                            zmm4[0] = zmm4[0] * 1.52590219e-05f
                            zmm0[0] = zmm0[0] * 1.52590219e-05f
                            float temp0_101[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            temp0_101[0] = zmm0[0]
                            zmm2[0] = zmm2[0] * 1.52590219e-05f
                            float temp0_102[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xc6)
                            zmm0 = zx.o(0)
                            temp0_102[0] = zmm1[0]
                            zmm1 = zx.o(0)
                            float temp0_103[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0x27)
                            temp0_103[0] = zmm2[0]
                            zmm2 = zx.o(0)
                            *(r8_6 - 0x10) = _mm_shuffle_ps(temp0_103, temp0_103, 0x39)
                            zmm4 = zx.o(0)
                            zmm3[0] = float.s(zx.d(*(rcx_53 + 0x10)))
                            zmm0[0] = float.s(zx.d(*(rcx_53 + 0x12)))
                            uint32_t rax_310 = zx.d(*(rcx_53 + 0x14))
                            zmm3[0] = zmm3[0] * 1.52590219e-05f
                            zmm1[0] = float.s(rax_310)
                            uint32_t rax_311 = zx.d(*(rcx_53 + 0x16))
                            float temp0_105[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            zmm0[0] = zmm0[0] * 1.52590219e-05f
                            zmm2[0] = float.s(rax_311)
                            temp0_105[0] = zmm0[0]
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            float temp0_106[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0xc6)
                            zmm0 = zx.o(0)
                            zmm2[0] = zmm2[0] * 1.52590219e-05f
                            temp0_106[0] = zmm1[0]
                            float temp0_107[0x4] = _mm_shuffle_ps(temp0_106, temp0_106, 0x27)
                            temp0_107[0] = zmm2[0]
                            *r8_6 = _mm_shuffle_ps(temp0_107, temp0_107, 0x39)
                            zmm4[0] = float.s(zx.d(*(rcx_53 + 0x18)))
                            zmm0[0] = float.s(zx.d(*(rcx_53 + 0x1a)))
                            uint32_t rax_314 = zx.d(*(rcx_53 + 0x1c))
                            zmm4[0] = zmm4[0] * 1.52590219e-05f
                            zmm0[0] = zmm0[0] * 1.52590219e-05f
                            float temp0_109[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
                            r8_6 += 0x40
                            temp0_109[0] = zmm0[0]
                            zmm1 = zx.o(0)
                            float temp0_110[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xc6)
                            zmm2 = zx.o(0)
                            zmm1[0] = float.s(rax_314)
                            result = zx.q(*(rcx_53 + 0x1e))
                            rdx_30 += 0x40
                            rcx_53 += 0x20
                            zmm2[0] = float.s(result.d)
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            zmm2[0] = zmm2[0] * 1.52590219e-05f
                            temp0_110[0] = zmm1[0]
                            float temp0_111[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0x27)
                            temp0_111[0] = zmm2[0]
                            *(r8_6 - 0x30) = _mm_shuffle_ps(temp0_111, temp0_111, 0x39)
                            i_16 = i_31
                            i_31 -= 1
                        while (i_16 != 1)
                    
                    if (rbx_8 u< i_36.d)
                        void* rcx_54 = rcx_53 + 4
                        uint64_t i_27 = zx.q(i_36.d - rbx_8)
                        uint64_t i_17
                        
                        do
                            uint32_t rax_315 = zx.d(*(rcx_54 - 4))
                            zmm3 = zx.o(0)
                            rdx_30 += 0x10
                            zmm0 = zx.o(0)
                            rcx_54 += 8
                            zmm1 = zx.o(0)
                            zmm2 = zx.o(0)
                            zmm3[0] = float.s(rax_315)
                            zmm0[0] = float.s(zx.d(*(rcx_54 - 0xa)))
                            uint32_t rax_317 = zx.d(*(rcx_54 - 8))
                            zmm3[0] = zmm3[0] * 1.52590219e-05f
                            zmm0[0] = zmm0[0] * 1.52590219e-05f
                            float temp0_113[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                            zmm1[0] = float.s(rax_317)
                            result = zx.q(*(rcx_54 - 6))
                            temp0_113[0] = zmm0[0]
                            float temp0_114[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xc6)
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            zmm2[0] = float.s(result.d)
                            temp0_114[0] = zmm1[0]
                            float temp0_115[0x4] = _mm_shuffle_ps(temp0_114, temp0_114, 0x27)
                            zmm2[0] = zmm2[0] * 1.52590219e-05f
                            temp0_115[0] = zmm2[0]
                            *(rdx_30 - 0x10) = _mm_shuffle_ps(temp0_115, temp0_115, 0x39)
                            i_17 = i_27
                            i_27 -= 1
                        while (i_17 != 1)
                    
                    r11_4 += 1
                while (r11_4 u< arg3)
        case 0x25
            int32_t r13_1 = 0
            
            if (arg3 != 0)
                do
                    void* rdi_4 = (zx.q(r13_1 * i_36.d) << 4) + arg6
                    void* rbx_3 = zx.q(r13_1 * arg5) + r12
                    
                    if (i_36.d != 0)
                        uint64_t i_24 = zx.q(i_36.d)
                        uint64_t i_18
                        
                        do
                            arg_8.b = *(rbx_3 + 2)
                            arg_8:1.b = *(rbx_3 + 1)
                            arg_8:2.b = *rbx_3
                            arg_8:3.b = *(rbx_3 + 3)
                            result = sub_140acc920(&var_f8, &arg_8)
                            rdi_4 += 0x10
                            rbx_3 += 4
                            *(rdi_4 - 0x10) = *result
                            i_18 = i_24
                            i_24 -= 1
                        while (i_18 != 1)
                        i_36 = zx.q(arg2)
                    
                    r13_1 += 1
                while (r13_1 u< arg3)
return result
