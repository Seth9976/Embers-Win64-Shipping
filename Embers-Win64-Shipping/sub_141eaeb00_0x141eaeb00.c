// 函数: sub_141eaeb00
// 地址: 0x141eaeb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_18 = arg3[0]
float arg_10 = arg2[0]
arg3[0] = arg3[0] f* arg1[0x29].d
float zmm11[0x4] = arg2
void* rax = arg1[0x2a]
float temp0[0x4] = _mm_max_ss(arg3[0], 0)

if (rax != 0)
    temp0[0] = temp0[0] f* *(rax + 0x58)
    *(rax + 0x58) = temp0[0]

arg2 = *(arg1 + 0x14c)

if (not(arg2[0] <= 0f))
    arg2[0] = arg2[0] - zmm11[0]
    arg2 = _mm_max_ss(arg2[0], 0)
    *(arg1 + 0x14c) = arg2[0]

int16_t rcx = *(arg1 + 0xac)

if ((rcx.b & 1) != 0)
    zmm11[0] = zmm11[0] f+ *(arg1 + 0xb4)
    *(arg1 + 0xb4) = zmm11[0]

if ((rcx.b & 2) != 0)
    zmm11[0] = zmm11[0] f+ arg1[0x17].d
    arg1[0x17].d = zmm11[0]

char rdx = 0
int16_t rax_1 = rcx
float zmm0[0x4]

if (not(arg2[0] != 0f))
    rdx = 1
else if (not(arg2[0] < 0f))
    zmm0 = *(arg1 + 0x34)
    rax_1 = rcx
    
    if (not(arg2[0] >= zmm0[0]))
        zmm0[0] = zmm0[0] - arg2[0]
        rax_1 |= 2
        *(arg1 + 0xac) = rax_1
        arg1[0x17].d = zmm0[0]

int16_t rcx_1 = rax_1

if ((rax_1.b & 1) != 0 && not(arg1[6].d[0] f>= *(arg1 + 0xb4)))
    rcx_1 &= 0xfffe
    *(arg1 + 0xac) = rcx_1

int16_t rax_2 = rcx_1 & 2

if (rax_2 != 0)
    zmm0 = *(arg1 + 0x34)

if (rax_2 != 0 && not(zmm0[0] f>= arg1[0x17].d))
    arg1[0x17].d = zmm0[0]
else if (rdx == 0)
    float zmm10[0x4] = 0x3f800000
    
    if ((rcx_1.b & 1) == 0)
        arg2 = 0x3f800000
    else
        arg2 = *(arg1 + 0xb4)
        arg2[0] = arg2[0] f/ arg1[6].d
    
    if (rax_2 != 0)
        zmm0 = arg1[0x17].d
        zmm0[0] = zmm0[0] f/ *(arg1 + 0x34)
        zmm10[0] = 1f - zmm0[0]
    
    float temp0_2[0x4] = _mm_min_ss(zmm10[0], arg2[0])
    temp0_2[0] = temp0_2[0] * temp0[0]
    float arg_8 = temp0_2[0]
    
    if (not(temp0_2[0] <= 0f))
        float zmm13[0x4]
        
        if (0f f== *(arg1 + 0x5c))
            zmm13 = zx.o(0)
        else
            zmm11[0] = zmm11[0] f* arg1[0xc].d
            zmm11[0] = zmm11[0] f+ arg1[0x19].d
            arg1[0x19].d = zmm11[0]
            
            if (*(arg1 + 0x65) == 1)
                zmm13 = sub_140add740(zmm11)
                zmm13[0] = zmm13[0] f* *(arg1 + 0x5c)
            else
                zmm13 = sinf(zmm11[0])
                zmm13[0] = zmm13[0] f* *(arg1 + 0x5c)
        
        float zmm12[0x4]
        
        if (0f f== arg1[0xd].d)
            zmm12 = zx.o(0)
        else
            zmm11[0] = zmm11[0] f* *(arg1 + 0x6c)
            zmm11[0] = zmm11[0] f+ *(arg1 + 0xcc)
            *(arg1 + 0xcc) = zmm11[0]
            
            if (*(arg1 + 0x71) == 1)
                zmm12 = sub_140add740(zmm11)
                zmm12[0] = zmm12[0] f* arg1[0xd].d
            else
                zmm12 = sinf(zmm11[0])
                zmm12[0] = zmm12[0] f* arg1[0xd].d
        
        float zmm8[0x4]
        
        if (0f f== *(arg1 + 0x74))
            zmm8 = zx.o(0)
        else
            zmm11[0] = zmm11[0] f* arg1[0xf].d
            zmm11[0] = zmm11[0] f+ arg1[0x1a].d
            arg1[0x1a].d = zmm11[0]
            
            if (*(arg1 + 0x7d) == 1)
                zmm8 = sub_140add740(zmm11)
                zmm8[0] = zmm8[0] f* *(arg1 + 0x74)
            else
                zmm8 = sinf(zmm11[0])
                zmm8[0] = zmm8[0] f* *(arg1 + 0x74)
        
        bool cond:2_1 = 0f f== arg1[7].d
        zmm13[0] = zmm13[0] * temp0_2[0]
        zmm12[0] = zmm12[0] * temp0_2[0]
        zmm8[0] = zmm8[0] * temp0_2[0]
        float zmm7[0x4]
        
        if (cond:2_1)
            zmm7 = zx.o(0)
        else
            zmm11[0] = zmm11[0] f* *(arg1 + 0x3c)
            zmm11[0] = zmm11[0] f+ *(arg1 + 0xd4)
            *(arg1 + 0xd4) = zmm11[0]
            
            if (*(arg1 + 0x41) == 1)
                zmm7 = sub_140add740(zmm11)
                zmm7[0] = zmm7[0] f* arg1[7].d
            else
                zmm7 = sinf(zmm11[0])
                zmm7[0] = zmm7[0] f* arg1[7].d
        
        bool cond:3_1 = 0f f== *(arg1 + 0x44)
        zmm7[0] = zmm7[0] * temp0_2[0]
        float var_1e8 = zmm7[0]
        
        if (cond:3_1)
            zmm0 = zx.o(0)
        else
            zmm11[0] = zmm11[0] f* arg1[9].d
            zmm11[0] = zmm11[0] f+ arg1[0x1b].d
            arg1[0x1b].d = zmm11[0]
            
            if (*(arg1 + 0x4d) == 1)
                zmm0 = sub_140add740(zmm11)
                zmm0[0] = zmm0[0] f* *(arg1 + 0x44)
            else
                zmm0 = sinf(zmm11[0])
                zmm0[0] = zmm0[0] f* *(arg1 + 0x44)
        
        bool cond:4_1 = 0f f== arg1[0xa].d
        zmm0[0] = zmm0[0] * temp0_2[0]
        float var_1e4_1 = zmm0[0]
        
        if (cond:4_1)
            zmm0 = zx.o(0)
        else
            zmm11[0] = zmm11[0] f* *(arg1 + 0x54)
            zmm11[0] = zmm11[0] f+ *(arg1 + 0xdc)
            *(arg1 + 0xdc) = zmm11[0]
            
            if (*(arg1 + 0x59) == 1)
                zmm0 = sub_140add740(zmm11)
                zmm0[0] = zmm0[0] f* arg1[0xa].d
            else
                zmm0 = sinf(zmm11[0])
                zmm0[0] = zmm0[0] f* arg1[0xa].d
        
        void* rax_3 = data_143f5b298
        zmm0[0] = zmm0[0] * temp0_2[0]
        int64_t* rcx_2 = *(rax_3 + 0xb08)
        float var_1e0_1 = zmm0[0]
        char rax_5
        
        if (rcx_2 != 0)
            rax_5 = (*(*rcx_2 + 0x120))(rcx_2)
        
        if (rcx_2 == 0 || rax_5 == 0)
            float zmm0_1[0x4]
            float zmm7_1[0x4]
            int32_t zmm9_1
            zmm0_1, zmm7_1, zmm9_1 = sub_140a454f0(arg4[3], 0x43b40000)
            zmm0_1[0]
            float zmm0_2[0x4]
            int32_t zmm6_2
            int32_t zmm9_2
            zmm0_2, zmm6_2, zmm9_2 = sub_140a454f0(zmm7_1, 0x43b40000)
            
            if (not(zmm0_2[0] f>= zmm9_2))
                zmm0_2[0] = zmm0_2[0] + 360f
            
            if (not(zmm0_2[0] <= 180f))
                zmm0_2[0] = zmm0_2[0] - 360f
            
            zmm0_2[0] = zmm0_2[0] f+ zmm6_2
            int32_t zmm6_3
            zmm0, zmm6_3, zmm8 = sub_140acf590(zmm0_2, 0xc2b3cccd, 0x42b3cccd)
            zmm0[0] = zmm0[0] f- zmm6_3
            var_1e8 = zmm0[0]
        
        int32_t rax_6 = arg1[0x16].d
        float* rax_8
        float zmm9_3
        float zmm10_1
        float var_1d8[0x4]
        float var_1b8[0x4]
        float var_1a8[0x4]
        float var_198[0x4]
        float var_188[0x4]
        float var_178[0x4]
        uint32_t var_138[0x4]
        
        if (rax_6 != 0)
            void* rax_9 = &arg1[0x20]
            
            if (rax_6 != 2)
                rax_9 = &data_14399f6e0
            
            zmm0 = *(rax_9 + 0x30)
            arg2 = *(rax_9 + 0x20)
            float zmm5_1[0x4] = *rax_9
            float zmm3[0x4] = *(rax_9 + 0x10)
            float var_158_2[0x4] = arg2
            float var_148_2[0x4] = zmm0
            int32_t var_1cc_2 = 0
            var_1d8[0] = zmm13[0]
            var_178 = zmm5_1
            float temp0_63[0x4] = _mm_shuffle_ps(var_1d8, var_1d8, 0xe1)
            temp0_63[0] = zmm12[0]
            float var_168_2[0x4] = zmm3
            float temp0_64[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xc6)
            temp0_64[0] = zmm8[0]
            int64_t var_1c8_2 = 0
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xc9)
            int32_t var_1c0_2 = 0
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), zmm0)
            float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), arg2)
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0x55), zmm3)
            float temp0_76[0x4] = _mm_add_ps(_mm_add_ps(temp0_67, temp0_69), 
                _mm_add_ps(temp0_71, _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0), zmm5_1)))
            temp0_76[0] = temp0_76[0] + *arg4
            float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0x55)
            temp0_77[0] = temp0_77[0] + arg4[1]
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xaa)
            temp0_78[0] = temp0_78[0] + arg4[2]
            *arg4 = temp0_76[0]
            arg4[1] = temp0_77[0]
            arg4[2] = temp0_78[0]
            sub_14077e760(&var_1b8, &arg4[3])
            uint32_t (* rax_10)[0x4] = sub_140631b10(&var_178, &var_138)
            float zmm6_5[0x4] = var_1b8
            float temp0_79[0x4] = _mm_shuffle_ps(zmm6_5, zmm6_5, 0x55)
            float zmm3_3[0x4] = rax_10[1]
            uint32_t zmm2_3[0x4] = *rax_10
            float zmm4_3[0x4] = rax_10[2]
            float zmm5_3[0x4] = rax_10[3]
            float temp0_80[0x4] = _mm_mul_ps(temp0_79, zmm3_3)
            float temp0_81[0x4] = _mm_shuffle_ps(zmm6_5, zmm6_5, 0)
            float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_5, zmm6_5, 0xaa), zmm4_3)
            float temp0_85[0x4] = _mm_add_ps(_mm_mul_ps(temp0_81, zmm2_3), temp0_80)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_5, zmm6_5, 0xff), zmm5_3)
            float temp0_88[0x4] = _mm_add_ps(temp0_85, temp0_83)
            float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_1a8, var_1a8, 0), zmm2_3)
            float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_1a8, var_1a8, 0xaa), zmm4_3)
            float temp0_93[0x4] = _mm_add_ps(temp0_88, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_1a8, var_1a8, 0x55), zmm3_3)
            var_178 = temp0_93
            float temp0_97[0x4] = _mm_add_ps(_mm_add_ps(temp0_90, temp0_95), temp0_92)
            float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_1a8, var_1a8, 0xff), zmm5_3)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_198, var_198, 0xaa), zmm4_3)
            float temp0_102[0x4] = _mm_add_ps(temp0_97, temp0_99)
            float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_198, var_198, 0), zmm2_3)
            float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_198, var_198, 0x55), zmm3_3)
            float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_188, var_188, 0), zmm2_3)
            float temp0_109[0x4] = _mm_add_ps(temp0_104, temp0_106)
            float var_168_3[0x4] = temp0_102
            float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_198, var_198, 0xff), zmm5_3)
            float temp0_112[0x4] = _mm_add_ps(temp0_109, temp0_101)
            float temp0_114[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_188, var_188, 0xaa), zmm4_3)
            float var_158_3[0x4] = _mm_add_ps(temp0_112, temp0_111)
            float temp0_118[0x4] =
                _mm_add_ps(temp0_108, _mm_mul_ps(_mm_shuffle_ps(var_188, var_188, 0x55), zmm3_3))
            float temp0_120[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_188, var_188, 0xff), zmm5_3)
            float var_148_3[0x4] = _mm_add_ps(_mm_add_ps(temp0_118, temp0_114), temp0_120)
            sub_14077e760(&var_138, &var_1e8)
            uint32_t var_f8[0x4][0x4]
            uint32_t (* rax_11)[0x4]
            float zmm11_2[0x4]
            float zmm12_2[0x4]
            float zmm13_2[0x4]
            float zmm14_2[0x4]
            float zmm15_2[0x4]
            rax_11, zmm11_2, zmm12_2, zmm13_2, zmm14_2, zmm15_2 = sub_140631b10(&var_178, &var_f8)
            float zmm2_4[0x4] = var_138
            float temp0_123[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            float zmm4_4[0x4] = rax_11[1]
            float zmm3_4[0x4] = *rax_11
            float zmm5_4[0x4] = rax_11[2]
            float zmm6_6[0x4] = rax_11[3]
            float temp0_124[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            float temp0_125[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
            float temp0_127[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm6_6)
            float temp0_128[0x4] = _mm_mul_ps(temp0_124, zmm4_4)
            float temp0_129[0x4] = _mm_mul_ps(temp0_125, zmm5_4)
            float temp0_133[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_123, zmm3_4), temp0_128), temp0_129), 
                temp0_127)
            float var_128[0x4]
            float temp0_134[0x4] = _mm_shuffle_ps(var_128, var_128, 0)
            float temp0_135[0x4] = _mm_shuffle_ps(var_128, var_128, 0x55)
            float temp0_136[0x4] = _mm_shuffle_ps(var_128, var_128, 0xaa)
            float temp0_137[0x4] = _mm_mul_ps(temp0_134, zmm3_4)
            float temp0_139[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_128, var_128, 0xff), zmm6_6)
            float temp0_140[0x4] = _mm_mul_ps(temp0_135, zmm4_4)
            float temp0_141[0x4] = _mm_mul_ps(temp0_136, zmm5_4)
            float temp0_144[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_137, temp0_140), temp0_141), temp0_139)
            float var_118[0x4]
            float temp0_145[0x4] = _mm_shuffle_ps(var_118, var_118, 0)
            float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_118, var_118, 0x55), zmm4_4)
            float temp0_149[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_118, var_118, 0xaa), zmm5_4)
            float temp0_150[0x4] = _mm_mul_ps(temp0_145, zmm3_4)
            float temp0_152[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_118, var_118, 0xff), zmm6_6)
            float temp0_155[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_150, temp0_147), temp0_149), temp0_152)
            float var_108[0x4]
            float temp0_157[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_108, var_108, 0x55), zmm4_4)
            float temp0_159[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_108, var_108, 0xaa), zmm5_4)
            float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_108, var_108, 0), zmm3_4)
            float temp0_162[0x4] = _mm_shuffle_ps(zmm14_2, zmm14_2, 0x55)
            float temp0_163[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0x55)
            float temp0_164[0x4] = _mm_shuffle_ps(zmm12_2, zmm12_2, 0x55)
            float temp0_165[0x4] = _mm_add_ps(temp0_161, temp0_157)
            float temp0_166[0x4] = _mm_mul_ps(temp0_162, temp0_144)
            float temp0_167[0x4] = _mm_mul_ps(temp0_163, temp0_144)
            float temp0_168[0x4] = _mm_shuffle_ps(zmm14_2, zmm14_2, 0)
            float temp0_169[0x4] = _mm_add_ps(temp0_165, temp0_159)
            float temp0_170[0x4] = _mm_mul_ps(temp0_168, temp0_133)
            float temp0_171[0x4] = _mm_mul_ps(temp0_164, temp0_144)
            float temp0_172[0x4] = _mm_shuffle_ps(zmm14_2, zmm14_2, 0xaa)
            float temp0_173[0x4] = _mm_add_ps(temp0_166, temp0_170)
            float temp0_174[0x4] = _mm_mul_ps(temp0_172, temp0_155)
            float temp0_175[0x4] = _mm_shuffle_ps(var_108, var_108, 0xff)
            float temp0_177[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_2, zmm13_2, 0), temp0_133)
            float temp0_178[0x4] = _mm_add_ps(temp0_173, temp0_174)
            float temp0_179[0x4] = _mm_mul_ps(temp0_175, zmm6_6)
            float temp0_180[0x4] = _mm_shuffle_ps(zmm14_2, zmm14_2, 0xff)
            float temp0_181[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0xaa)
            float temp0_182[0x4] = _mm_add_ps(temp0_167, temp0_177)
            float temp0_183[0x4] = _mm_mul_ps(temp0_181, temp0_155)
            float temp0_184[0x4] = _mm_shuffle_ps(zmm12_2, zmm12_2, 0)
            float temp0_185[0x4] = _mm_add_ps(temp0_169, temp0_179)
            float temp0_186[0x4] = _mm_mul_ps(temp0_184, temp0_133)
            float temp0_187[0x4] = _mm_add_ps(temp0_182, temp0_183)
            float temp0_189[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11_2, zmm11_2, 0x55), temp0_144)
            float temp0_190[0x4] = _mm_shuffle_ps(zmm12_2, zmm12_2, 0xaa)
            float temp0_191[0x4] = _mm_add_ps(temp0_171, temp0_186)
            float temp0_192[0x4] = _mm_mul_ps(temp0_190, temp0_155)
            float temp0_194[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11_2, zmm11_2, 0), temp0_133)
            float temp0_195[0x4] = _mm_add_ps(temp0_191, temp0_192)
            float temp0_196[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0xff)
            float temp0_197[0x4] = _mm_shuffle_ps(zmm12_2, zmm12_2, 0xff)
            float temp0_198[0x4] = _mm_shuffle_ps(zmm11_2, zmm11_2, 0xaa)
            float temp0_199[0x4] = _mm_add_ps(temp0_189, temp0_194)
            float temp0_200[0x4] = _mm_mul_ps(temp0_198, temp0_155)
            float temp0_201[0x4] = _mm_mul_ps(temp0_180, temp0_185)
            float temp0_202[0x4] = _mm_mul_ps(temp0_196, temp0_185)
            float temp0_203[0x4] = _mm_mul_ps(temp0_197, temp0_185)
            float temp0_204[0x4] = _mm_add_ps(temp0_199, temp0_200)
            float temp0_205[0x4] = _mm_add_ps(temp0_178, temp0_201)
            float temp0_206[0x4] = _mm_add_ps(temp0_187, temp0_202)
            float temp0_207[0x4] = _mm_add_ps(temp0_195, temp0_203)
            float zmm9_4[0x4] = var_1b8
            float temp0_208[0x4] = _mm_shuffle_ps(zmm11_2, zmm11_2, 0xff)
            float temp0_209[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0x55)
            float temp0_210[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0)
            float temp0_211[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0xaa)
            float temp0_213[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_205, temp0_205, 0xff), zmm15_2)
            float temp0_214[0x4] = _mm_mul_ps(temp0_210, zmm9_4)
            float temp0_215[0x4] = _mm_mul_ps(temp0_209, var_1a8)
            float temp0_216[0x4] = _mm_mul_ps(temp0_208, temp0_185)
            float temp0_217[0x4] = _mm_add_ps(temp0_215, temp0_214)
            float temp0_218[0x4] = _mm_mul_ps(temp0_211, var_198)
            float temp0_219[0x4] = _mm_add_ps(temp0_204, temp0_216)
            float temp0_221[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_206, temp0_206, 0), zmm9_4)
            float temp0_222[0x4] = _mm_add_ps(temp0_217, temp0_218)
            float temp0_224[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_206, temp0_206, 0xaa), var_198)
            float temp0_225[0x4] = _mm_add_ps(temp0_222, temp0_213)
            float temp0_227[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_206, temp0_206, 0x55), var_1a8)
            float temp0_228[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0xff)
            var_138 = temp0_225
            float temp0_229[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0x55)
            float temp0_230[0x4] = _mm_add_ps(temp0_227, temp0_221)
            float temp0_231[0x4] = _mm_mul_ps(temp0_229, var_1a8)
            float temp0_232[0x4] = _mm_mul_ps(temp0_228, zmm15_2)
            float temp0_233[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0)
            float temp0_234[0x4] = _mm_add_ps(temp0_230, temp0_224)
            float temp0_235[0x4] = _mm_mul_ps(temp0_233, zmm9_4)
            float temp0_237[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_207, temp0_207, 0xaa), var_198)
            float temp0_238[0x4] = _mm_add_ps(temp0_234, temp0_232)
            float temp0_239[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0xff)
            float temp0_240[0x4] = _mm_add_ps(temp0_231, temp0_235)
            float temp0_241[0x4] = _mm_mul_ps(temp0_239, zmm15_2)
            float temp0_242[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0)
            float var_128_1[0x4] = temp0_238
            float temp0_243[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0x55)
            float temp0_244[0x4] = _mm_add_ps(temp0_240, temp0_237)
            float temp0_245[0x4] = _mm_mul_ps(temp0_243, var_1a8)
            float temp0_246[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0xaa)
            float temp0_247[0x4] = _mm_mul_ps(temp0_242, zmm9_4)
            float temp0_248[0x4] = _mm_mul_ps(temp0_246, var_198)
            float temp0_249[0x4] = _mm_add_ps(temp0_244, temp0_241)
            float temp0_250[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0xff)
            float temp0_251[0x4] = _mm_add_ps(temp0_245, temp0_247)
            float temp0_252[0x4] = _mm_mul_ps(temp0_250, zmm15_2)
            float var_118_1[0x4] = temp0_249
            float var_108_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_251, temp0_248), temp0_252)
            rax_8 = sub_140adf440(&var_138, &var_1e8)
            zmm10_1 = arg_8
            zmm9_3 = (zx.o(0)).d
            zmm11 = arg_10
        else
            int32_t zmm8_1 = sub_14077e760(&var_1b8, &arg4[3])
            int32_t var_1cc_1 = 0
            var_1d8[0] = zmm13[0]
            int64_t var_1c8_1 = 0
            float temp0_3[0x4] = _mm_shuffle_ps(var_1d8, var_1d8, 0xe1)
            temp0_3[0] = zmm12[0]
            int32_t var_1c0_1 = 0
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
            temp0_4[0] = zmm8_1
            float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
            float temp0_7[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), var_188)
            float temp0_9[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0x55), var_1a8)
            float temp0_11[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xaa), var_198)
            float temp0_13[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0), var_1b8)
            float temp0_16[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_7, temp0_11), _mm_add_ps(temp0_9, temp0_13))
            temp0_16[0] = temp0_16[0] + *arg4
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
            temp0_17[0] = temp0_17[0] + arg4[1]
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)
            temp0_18[0] = temp0_18[0] + arg4[2]
            *arg4 = temp0_16[0]
            arg4[1] = temp0_17[0]
            arg4[2] = temp0_18[0]
            sub_14077e760(&var_1b8, &var_1e8)
            float* rax_7 = sub_14077e760(&var_138, &arg4[3])
            float zmm2_2[0x4] = var_1b8
            float temp0_19[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            float zmm5_2[0x4] = *(rax_7 + 0x10)
            float zmm6_4[0x4] = *rax_7
            float zmm7_2[0x4] = *(rax_7 + 0x20)
            float zmm8_2[0x4] = *(rax_7 + 0x30)
            float temp0_20[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            float temp0_21[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm8_2)
            float temp0_24[0x4] = _mm_mul_ps(temp0_19, zmm5_2)
            float temp0_25[0x4] = _mm_mul_ps(temp0_20, zmm6_4)
            float temp0_26[0x4] = _mm_mul_ps(temp0_21, zmm7_2)
            float temp0_29[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_24, temp0_25), temp0_26), temp0_23)
            float temp0_30[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0x55)
            float temp0_31[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0)
            float temp0_32[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0xaa)
            float temp0_33[0x4] = _mm_mul_ps(temp0_30, zmm5_2)
            float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_1a8, var_1a8, 0xff), zmm8_2)
            float temp0_36[0x4] = _mm_mul_ps(temp0_31, zmm6_4)
            float temp0_37[0x4] = _mm_mul_ps(temp0_32, zmm7_2)
            var_178 = temp0_29
            float var_168_1[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_33, temp0_36), temp0_37), temp0_35)
            float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_198, var_198, 0x55), zmm5_2)
            float temp0_43[0x4] = _mm_shuffle_ps(var_198, var_198, 0)
            float temp0_44[0x4] = _mm_shuffle_ps(var_198, var_198, 0xaa)
            float temp0_45[0x4] = _mm_mul_ps(temp0_43, zmm6_4)
            float temp0_46[0x4] = _mm_mul_ps(temp0_44, zmm7_2)
            float temp0_47[0x4] = _mm_shuffle_ps(var_198, var_198, 0xff)
            float temp0_48[0x4] = _mm_add_ps(temp0_42, temp0_45)
            float temp0_49[0x4] = _mm_mul_ps(temp0_47, zmm8_2)
            float temp0_51[0x4] = _mm_add_ps(_mm_add_ps(temp0_48, temp0_46), temp0_49)
            float temp0_52[0x4] = _mm_shuffle_ps(var_188, var_188, 0x55)
            float temp0_53[0x4] = _mm_shuffle_ps(var_188, var_188, 0)
            float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm5_2)
            float temp0_55[0x4] = _mm_shuffle_ps(var_188, var_188, 0xaa)
            float temp0_56[0x4] = _mm_mul_ps(temp0_53, zmm6_4)
            float temp0_57[0x4] = _mm_mul_ps(temp0_55, zmm7_2)
            float temp0_58[0x4] = _mm_shuffle_ps(var_188, var_188, 0xff)
            float temp0_59[0x4] = _mm_add_ps(temp0_54, temp0_56)
            float temp0_60[0x4] = _mm_mul_ps(temp0_58, zmm8_2)
            float var_158_1[0x4] = temp0_51
            float var_148_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_59, temp0_57), temp0_60)
            rax_8, zmm9_3, zmm10_1, zmm11 = sub_140adf440(&var_178, &var_1e8)
        *(arg4 + 0xc) = *rax_8
        arg4[5] = rax_8[2]
        
        if (not(zmm9_3 f== arg1[0x10].d))
            uint128_t zmm0_5
            zmm0_5.d = zmm11.d f* *(arg1 + 0x84)
            zmm0_5.d = zmm0_5.d f+ arg1[0x1c].d
            arg1[0x1c].d = zmm0_5.d
            float zmm0_8
            
            if (*(arg1 + 0x89) == 1)
                zmm0_8 = sub_140add740(zmm0_5)
            else
                zmm0_8 = sinf(zmm0_5.d)
            
            zmm9_3 = zmm0_8 f* arg1[0x10].d
        
        arg4[6] = zmm9_3 * zmm10_1 + arg4[6]

return sub_142485d20(arg1, zmm11, arg_18, arg4, arg4)
