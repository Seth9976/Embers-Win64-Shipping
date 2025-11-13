// 函数: sub_1411dc610
// 地址: 0x1411dc610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *(arg4 + 0x20)
float* rdi = arg2
float zmm1[0x4] = arg3[3].d
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
uint128_t zmm13 = zx.o(*arg3)
uint128_t zmm7
zmm7.d = zmm13.d f- zmm3[0]
int32_t rax = arg3[1].d
float zmm15[0x4] = zx.o(0)
float var_e8[0x4] = zmm3
float zmm14[0x4] = zmm1
zmm14[0] = zmm14[0] f* data_1439b60bc
float zmm2[0x4] = rax
uint128_t zmm12 = zmm13.q:4.d
uint128_t zmm11
zmm11.d = zmm12.d f- temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm2[0] = zmm2[0] - temp0_1[0]
float zmm0[0x4] = zmm7
zmm0[0] = zmm0[0] f* zmm7.d
float arg_10 = zmm11.d
float arg_8 = zmm2[0]
zmm2[0] = zmm2[0] * zmm2[0]
uint128_t zmm9
zmm9.d = zmm11.d f* zmm11.d
zmm9.d = zmm9.d f+ zmm0[0]
zmm2[0] = zmm2[0] f+ zmm9.d
float temp0_2[0x4] = _mm_sqrt_ss(0, zmm2[0])
zmm0 = data_1439b60b8
bool cond:0 = zmm0[0] != 0f
float zmm6[0x4] = __maxss_xmmss_memss(temp0_2[0], 0x3dcccccd)
float temp0_4[0x4] = __maxss_xmmss_memss(temp0_2[0], 0x3e4ccccd)
zmm6[0] = zmm6[0] - zmm1[0]
temp0_4[0] = temp0_4[0] + zmm1[0]

if (not(cond:0))
    zmm0 = data_1439b60ac

int32_t var_f0 = 0x3f800000
float arg_20 = _mm_max_ss(zmm0[0], 0)[0]
float var_110 = _mm_max_ss(data_1439b60b0[0], 0x3f800000)[0]
*arg2 = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
arg2[1].d = 0x3f800000
*arg1 = data_14399f6e0
arg1[1] = data_14399f6f0
arg1[2] = data_14399f700
arg1[3] = data_14399f710
uint64_t result
float var_198[0x4]
float var_188[0x4]
float var_178[0x4]
float var_168[0x4]
float arg_18
float zmm8[0x4]
float zmm10[0x4]

if (arg5 != 0)
    result = zx.q(arg5 - 1)
    float var_128[0x4]
    float zmm0_2[0x4]
    float zmm4_1[0x4]
    float zmm5_1[0x4]
    
    if (result.d u<= 1)
        zmm14[0] = zmm14[0] / temp0_2[0]
        zmm9.d = zmm9.d f+ zmm2[0]
        float zmm0_3[0x4] = asinf(zmm14[0])
        bool cond:2_1 = zmm6[0] != temp0_4[0]
        zmm2 = zmm0_3
        arg_18 = zmm2[0]
        zmm6[0] = zmm6[0] - temp0_4[0]
        
        if (cond:2_1)
            zmm0_3 = 0xbf800000
            zmm0_3[0] = -1f / zmm6[0]
            zmm12.d = temp0_4.d f* zmm6[0]
            zmm12.d = zmm12.d f* zmm0_3[0]
        else
            zmm12 = zmm6
        
        if (zmm6[0] != temp0_4[0])
            zmm6[0] = zmm6[0] / zmm6[0]
        else
            zmm6 = zx.o(0)
        
        zmm0_2 = tanf(zmm2[0])
        int64_t var_154_2 = 0
        int64_t var_140_2 = 0
        int32_t var_12c
        var_12c.q = 0x3f800000
        int32_t var_124_1 = 0
        int32_t var_11c_2 = 0
        zmm10 = data_143dbb200
        zmm1 = 0x3f800000
        zmm13 = data_143dbb1f8
        zmm2 = 0x3f000000
        zmm1[0] = 1f / zmm0_2[0]
        int32_t var_120_1 = zmm12.d
        zmm12 = data_143dbb1fc
        float var_158_2 = zmm1[0]
        float var_144_2 = zmm1[0]
        float var_130_2 = zmm6[0]
        arg5 = zmm12.d
        
        if (not(zmm9.d f!= 1f))
            zmm6 = arg_8
        else if (zmm9.d f>= 9.99999994e-09f)
            zmm4_1 = 0x3f000000
            zmm0_2 = zmm9
            float temp0_96[0x4] = _mm_rsqrt_ss(zmm0_2[0], zmm0_2[0])
            zmm2 = 0x3f000000
            zmm0_2[0] = zmm0_2[0] * 0.5f
            temp0_96[0] = temp0_96[0] * temp0_96[0]
            zmm0_2[0] = zmm0_2[0] * temp0_96[0]
            zmm2[0] = 0.5f - zmm0_2[0]
            temp0_96[0] = temp0_96[0] * zmm2[0]
            zmm2 = 0x3f000000
            temp0_96[0] = temp0_96[0] + temp0_96[0]
            temp0_96[0] = temp0_96[0] * temp0_96[0]
            zmm0_2[0] = zmm0_2[0] * temp0_96[0]
            zmm4_1[0] = 0.5f - zmm0_2[0]
            temp0_96[0] = temp0_96[0] * zmm4_1[0]
            temp0_96[0] = temp0_96[0] + temp0_96[0]
            arg_10 = temp0_96[0]
            temp0_96[0] = temp0_96[0] f* zmm7.d
            temp0_96[0] = temp0_96[0] * arg_8
            temp0_96[0] = temp0_96[0] f* zmm11.d
            zmm7 = temp0_96
            arg_8 = temp0_96[0]
            zmm6 = temp0_96
            arg_10 = temp0_96[0]
            zmm11 = temp0_96
        else
            zmm6 = zmm10
            arg_10 = zmm12.d
            arg_8 = zmm6[0]
            zmm7 = zmm13
            zmm11 = zmm12
        
        zmm1 = zmm7
        zmm9 = zmm11 ^ data_142d3f780
        zmm0_2 = zmm9
        zmm1[0] = zmm1[0] f* zmm7.d
        zmm0_2[0] = zmm0_2[0] f* zmm9.d
        zmm1[0] = zmm1[0] + zmm0_2[0]
        
        if (not(zmm1[0] != 1f))
            arg5 = zmm7.d
            zmm12 = zmm7
        else if (zmm1[0] >= 9.99999994e-09f)
            zmm3 = zx.o(0)
            zmm3[0] = zmm1[0]
            float temp0_97[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * zmm2[0]
            temp0_97[0] = temp0_97[0] * temp0_97[0]
            zmm3[0] = zmm3[0] * temp0_97[0]
            zmm2[0] = zmm2[0] - zmm3[0]
            temp0_97[0] = temp0_97[0] * zmm2[0]
            temp0_97[0] = temp0_97[0] + temp0_97[0]
            temp0_97[0] = temp0_97[0] * temp0_97[0]
            zmm3[0] = zmm3[0] * temp0_97[0]
            zmm2[0] = zmm2[0] - zmm3[0]
            temp0_97[0] = temp0_97[0] * zmm2[0]
            temp0_97[0] = temp0_97[0] + temp0_97[0]
            zmm12 = temp0_97
            arg5 = temp0_97[0]
            zmm0_2 = zmm12
            zmm12.d = zmm12.d f* zmm7.d
            zmm0_2[0] = zmm0_2[0] f* zmm9.d
            arg5 = zmm12.d
            zmm9 = zmm0_2
        else
            zmm9 = zmm13
            zmm15 = zmm10
        
        zmm0_2 = zmm12
        zmm10 = zmm12
        zmm0_2[0] = zmm0_2[0] * zmm6[0]
        zmm4_1 = zmm9
        int32_t var_18c_2 = 0
        zmm4_1[0] = zmm4_1[0] * zmm6[0]
        int32_t var_17c_2 = 0
        zmm15[0] = zmm15[0] f* zmm11.d
        int32_t var_16c_2 = 0
        zmm10[0] = zmm10[0] f* zmm7.d
        int32_t var_15c_3 = 0x3f800000
        zmm15[0] = zmm15[0] - zmm0_2[0]
        zmm15[0] = zmm15[0] f* zmm7.d
        zmm4_1[0] = zmm4_1[0] - zmm15[0]
        zmm0_2 = zmm9
        zmm0_2[0] = zmm0_2[0] f* zmm11.d
        zmm10[0] = zmm10[0] - zmm0_2[0]
        zmm2 = var_e8 ^ 0x80000000
        zmm8 = temp0_1 ^ 0x80000000
        zmm5_1 = temp0 ^ 0x80000000
        zmm15[0] = zmm15[0] * zmm8[0]
        zmm0_2 = zmm9
        zmm13.d = zmm12.d f* zmm5_1[0]
        zmm0_2[0] = zmm0_2[0] * zmm2[0]
        zmm12.d = zmm4_1.d f* zmm5_1[0]
        zmm13.d = zmm13.d f+ zmm0_2[0]
        zmm11.d = zmm11.d f* zmm5_1[0]
        zmm15[0] = zmm15[0] * zmm2[0]
        zmm13.d = zmm13.d f+ zmm15[0]
        zmm10[0] = zmm10[0] * zmm8[0]
        zmm12.d = zmm12.d f+ zmm15[0]
        zmm0_2 = zmm7
        zmm0_2[0] = zmm0_2[0] * zmm2[0]
        var_198[0] = zmm9.d
        zmm9 = 0:4.o
        float temp0_98[0x4] = _mm_shuffle_ps(var_198, var_198, 0xe1)
        zmm11.d = zmm11.d f+ zmm0_2[0]
        temp0_98[0] = zmm15[0]
        zmm12.d = zmm12.d f+ zmm10[0]
        float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xc6)
        zmm1 = zmm6
        zmm6 = var_128
        temp0_99[0] = zmm7.d
        zmm7 = 0.o
        float temp0_100[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0xc9)
        zmm1[0] = zmm1[0] * zmm8[0]
        zmm8 = var_158_2.o
        float temp0_101[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0x55)
        float temp0_102[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0)
        zmm11.d = zmm11.d f+ zmm1[0]
        float temp0_103[0x4] = _mm_mul_ps(temp0_101, zmm9)
        float temp0_104[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0xaa)
        float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_100, temp0_100, 0xff), zmm6)
        float temp0_107[0x4] = _mm_mul_ps(temp0_102, zmm8)
        float temp0_108[0x4] = _mm_mul_ps(temp0_104, zmm7)
        zmm14 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_103, temp0_107), temp0_108), temp0_106)
        var_188[0] = arg5[0]
        float temp0_112[0x4] = _mm_shuffle_ps(var_188, var_188, 0xe1)
        temp0_112[0] = zmm4_1[0]
        float temp0_113[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0xc6)
        zmm3 = var_168
        temp0_113[0] = arg_10[0]
        float temp0_114[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xc9)
        float temp0_115[0x4] = _mm_shuffle_ps(temp0_114, temp0_114, 0x55)
        float temp0_116[0x4] = _mm_shuffle_ps(temp0_114, temp0_114, 0)
        float temp0_117[0x4] = _mm_shuffle_ps(temp0_114, temp0_114, 0xaa)
        float temp0_118[0x4] = _mm_mul_ps(temp0_115, zmm9)
        float temp0_120[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_114, temp0_114, 0xff), zmm6)
        float temp0_121[0x4] = _mm_mul_ps(temp0_116, zmm8)
        float temp0_122[0x4] = _mm_mul_ps(temp0_117, zmm7)
        zmm5_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_118, temp0_121), temp0_122), temp0_120)
        zmm2 = var_178
    label_1411dd585:
        zmm2[0] = zmm15[0]
        float temp0_126[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm3[0] = zmm13.d
        temp0_126[0] = zmm10[0]
        float temp0_127[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        float temp0_128[0x4] = _mm_shuffle_ps(temp0_126, temp0_126, 0xc6)
        temp0_127[0] = zmm12.d
        temp0_128[0] = arg_8[0]
        float temp0_129[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xc6)
        float temp0_130[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xc9)
        temp0_129[0] = zmm11.d
        float temp0_131[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0xc9)
        float temp0_132[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0)
        float temp0_133[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0x55)
        float temp0_134[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0xaa)
        float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_130, temp0_130, 0xff), zmm6)
        float temp0_137[0x4] = _mm_mul_ps(temp0_134, zmm7)
        float temp0_138[0x4] = _mm_mul_ps(temp0_132, zmm8)
        float temp0_139[0x4] = _mm_mul_ps(temp0_133, zmm9)
        *arg1 = zmm14
        arg1[1] = zmm5_1
        float temp0_140[0x4] = _mm_add_ps(temp0_139, temp0_138)
        float temp0_142[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0), zmm8)
        float temp0_143[0x4] = _mm_add_ps(temp0_140, temp0_137)
        float temp0_145[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xaa), zmm7)
        float temp0_146[0x4] = _mm_add_ps(temp0_143, temp0_136)
        float temp0_148[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0x55), zmm9)
        float temp0_150[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xff), zmm6)
        float temp0_151[0x4] = _mm_add_ps(temp0_148, temp0_142)
        arg1[2] = temp0_146
        float var_1a8_1 = arg_20[0]
        float temp0_152[0x4] = _mm_add_ps(temp0_151, temp0_145)
        zmm1 = arg_18
        zmm1[0] = zmm1[0] + zmm1[0]
        arg1[3] = _mm_add_ps(temp0_152, temp0_150)
        int32_t var_f8
        result = sub_1411dadc0(&var_f8, arg6, zmm1[0], 1, var_1a8_1)
        int32_t rcx_2 = *(result + 8)
        *rdi = *result
        rdi[2] = rcx_2
    else if (arg5 == 3)
        zmm14[0] = zmm14[0] / temp0_2[0]
        zmm9.d = zmm9.d f+ zmm2[0]
        float zmm0_1[0x4] = asinf(zmm14[0])
        bool cond:4_1 = zmm6[0] != temp0_4[0]
        zmm2 = zmm0_1
        arg_18 = zmm2[0]
        zmm6[0] = zmm6[0] - temp0_4[0]
        
        if (cond:4_1)
            zmm0_1 = 0xbf800000
            zmm0_1[0] = -1f / zmm6[0]
            zmm12.d = temp0_4.d f* zmm6[0]
            zmm12.d = zmm12.d f* zmm0_1[0]
        else
            zmm12 = zmm6
        
        zmm6[0] != temp0_4[0]
        zmm0_2 = tanf(zmm2[0])
        var_198[1].q = 0
        int32_t var_18c
        var_18c.q = 0
        var_188[2].q = 0
        int32_t var_16c
        var_16c.q = 0x3f800000
        var_168[1] = 0
        int32_t var_15c_2 = 0
        zmm10 = data_143dbb200
        zmm1 = 0x3f800000
        zmm13 = data_143dbb1f8
        zmm2 = 0x3f000000
        zmm1[0] = 1f / zmm0_2[0]
        var_168[2] = zmm12.d
        zmm12 = data_143dbb1fc
        var_198[0] = zmm1[0]
        var_188[1] = zmm1[0]
        arg5 = zmm12.d
        
        if (zmm9.d f!= 1f)
            if (zmm9.d f>= 9.99999994e-09f)
                zmm6 = arg_8
                zmm4_1 = 0x3f000000
                zmm0_2 = zmm9
                float temp0_66[0x4] = _mm_rsqrt_ss(zmm0_2[0], zmm0_2[0])
                zmm2 = 0x3f000000
                zmm0_2[0] = zmm0_2[0] * 0.5f
                temp0_66[0] = temp0_66[0] * temp0_66[0]
                zmm0_2[0] = zmm0_2[0] * temp0_66[0]
                zmm2[0] = 0.5f - zmm0_2[0]
                temp0_66[0] = temp0_66[0] * zmm2[0]
                zmm2 = 0x3f000000
                temp0_66[0] = temp0_66[0] + temp0_66[0]
                temp0_66[0] = temp0_66[0] * temp0_66[0]
                zmm0_2[0] = zmm0_2[0] * temp0_66[0]
                zmm4_1[0] = 0.5f - zmm0_2[0]
                temp0_66[0] = temp0_66[0] * zmm4_1[0]
                temp0_66[0] = temp0_66[0] + temp0_66[0]
                zmm11.d = zmm11.d f* temp0_66[0]
                arg_10 = temp0_66[0]
                zmm7.d = zmm7.d f* temp0_66[0]
                arg_10 = zmm11.d
                zmm6[0] = zmm6[0] * temp0_66[0]
            else
                arg_10 = zmm12.d
                zmm7 = zmm13
                zmm11 = zmm12
                zmm6 = zmm10
            
            arg_8 = zmm6[0]
        else
            zmm6 = arg_8
        
        zmm0_2 = zmm7
        zmm9 = zmm11 ^ data_142d3f780
        zmm1 = zmm9
        zmm0_2[0] = zmm0_2[0] f* zmm7.d
        zmm1[0] = zmm1[0] f* zmm9.d
        zmm1[0] = zmm1[0] + zmm0_2[0]
        
        if (not(zmm1[0] != 1f))
            arg5 = zmm7.d
            zmm12 = zmm7
        else if (zmm1[0] >= 9.99999994e-09f)
            zmm3 = zx.o(0)
            zmm3[0] = zmm1[0]
            float temp0_67[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * zmm2[0]
            temp0_67[0] = temp0_67[0] * temp0_67[0]
            zmm3[0] = zmm3[0] * temp0_67[0]
            zmm2[0] = zmm2[0] - zmm3[0]
            temp0_67[0] = temp0_67[0] * zmm2[0]
            temp0_67[0] = temp0_67[0] + temp0_67[0]
            temp0_67[0] = temp0_67[0] * temp0_67[0]
            zmm3[0] = zmm3[0] * temp0_67[0]
            zmm2[0] = zmm2[0] - zmm3[0]
            temp0_67[0] = temp0_67[0] * zmm2[0]
            temp0_67[0] = temp0_67[0] + temp0_67[0]
            zmm12.d = zmm7.d f* temp0_67[0]
            arg5 = temp0_67[0]
            zmm9.d = zmm9.d f* temp0_67[0]
            arg5 = zmm12.d
        else
            zmm9 = zmm13
            zmm15 = zmm10
        
        zmm0_2 = zmm12
        zmm10 = zmm12
        zmm0_2[0] = zmm0_2[0] * zmm6[0]
        zmm4_1 = zmm9
        int64_t var_14c
        var_14c.d = 0
        zmm4_1[0] = zmm4_1[0] * zmm6[0]
        int64_t var_140
        var_140:4.d = 0
        zmm15[0] = zmm15[0] f* zmm11.d
        int32_t var_12c_2 = 0
        zmm10[0] = zmm10[0] f* zmm7.d
        int32_t var_11c_1 = 0x3f800000
        zmm15[0] = zmm15[0] - zmm0_2[0]
        zmm15[0] = zmm15[0] f* zmm7.d
        zmm4_1[0] = zmm4_1[0] - zmm15[0]
        zmm0_2 = zmm9
        zmm0_2[0] = zmm0_2[0] f* zmm11.d
        zmm10[0] = zmm10[0] - zmm0_2[0]
        zmm2 = var_e8 ^ 0x80000000
        zmm8 = temp0_1 ^ 0x80000000
        zmm5_1 = temp0 ^ 0x80000000
        zmm15[0] = zmm15[0] * zmm8[0]
        zmm0_2 = zmm9
        zmm13.d = zmm12.d f* zmm5_1[0]
        zmm0_2[0] = zmm0_2[0] * zmm2[0]
        zmm12.d = zmm4_1.d f* zmm5_1[0]
        zmm13.d = zmm13.d f+ zmm0_2[0]
        zmm11.d = zmm11.d f* zmm5_1[0]
        zmm15[0] = zmm15[0] * zmm2[0]
        zmm13.d = zmm13.d f+ zmm15[0]
        zmm10[0] = zmm10[0] * zmm8[0]
        zmm12.d = zmm12.d f+ zmm15[0]
        zmm0_2 = zmm7
        zmm0_2[0] = zmm0_2[0] * zmm2[0]
        int32_t var_158
        zmm2 = var_158.o
        zmm2[0] = zmm9.d
        zmm9 = var_188
        float temp0_68[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm11.d = zmm11.d f+ zmm0_2[0]
        temp0_68[0] = zmm15[0]
        zmm12.d = zmm12.d f+ zmm10[0]
        float temp0_69[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xc6)
        zmm1 = zmm6
        zmm6 = var_168
        temp0_69[0] = zmm7.d
        zmm7 = 0
        float temp0_70[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xc9)
        zmm1[0] = zmm1[0] * zmm8[0]
        zmm8 = var_198
        float temp0_71[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0x55)
        float temp0_72[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0)
        zmm11.d = zmm11.d f+ zmm1[0]
        float temp0_73[0x4] = _mm_mul_ps(temp0_71, zmm9)
        float temp0_74[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xaa)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xff), zmm6)
        float temp0_77[0x4] = _mm_mul_ps(temp0_72, zmm8)
        float temp0_78[0x4] = _mm_mul_ps(temp0_74, 0)
        zmm14 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_73, temp0_77), temp0_78), temp0_76)
        zmm2 = var_14c:4.o
        zmm2[0] = arg5[0]
        float temp0_82[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        temp0_82[0] = zmm4_1[0]
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0xc6)
        zmm3 = var_128
        temp0_83[0] = arg_10[0]
        float temp0_84[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0xc9)
        float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
        float temp0_86[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0)
        float temp0_87[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)
        float temp0_88[0x4] = _mm_mul_ps(temp0_85, zmm9)
        float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0xff), zmm6)
        float temp0_91[0x4] = _mm_mul_ps(temp0_86, zmm8)
        float temp0_92[0x4] = _mm_mul_ps(temp0_87, 0)
        zmm5_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_88, temp0_91), temp0_92), temp0_90)
        int64_t var_138
        zmm2 = var_138.o
        goto label_1411dd585
else
    uint128_t zmm4 = *(arg4 + 0x40)
    zmm1 = 0x3f800000
    float zmm5[0x4] = *(arg4 + 0x50)
    zmm2 = *(arg4 + 0x60)
    
    if (not(zmm14[0] == 0f))
        zmm1[0] = 1f / zmm14[0]
    
    zmm0 = 0x3f800000
    
    if (not(zmm14[0] == 0f))
        zmm0[0] = 1f / zmm14[0]
    
    zmm6 = rax
    zmm10 = data_143dbb1fc
    zmm9 = data_143dbb200
    zmm3 = data_143dbb1f8
    float var_158_1 = zmm0[0]
    zmm0 = 0xbf000000
    zmm0[0] = -0.5f / zmm14[0]
    int64_t var_154_1 = 0
    int64_t var_140_1 = 0
    int32_t var_12c_1 = 0
    zmm2[0] = zmm2[0] * zmm14[0]
    float var_130_1 = zmm0[0]
    zmm0 = zmm12
    float var_144_1 = zmm1[0]
    zmm6[0] = zmm6[0] - zmm2[0]
    zmm4.d = zmm4.d f* zmm14[0]
    zmm5[0] = zmm5[0] * zmm14[0]
    zmm11.d = zmm13.d f- zmm4.d
    arg_10 = zmm10[0]
    zmm4 = 0x322bcc77
    zmm6[0] = zmm6[0] - zmm6[0]
    zmm0[0] = zmm0[0] - zmm5[0]
    arg_8 = zmm6[0]
    zmm5 = 0x3f000000
    zmm13.d = zmm13.d f- zmm11.d
    arg_18 = zmm6[0]
    zmm12.d = zmm12.d f- zmm0[0]
    float var_118_1 = zmm0[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm0 = zmm13
    zmm0[0] = zmm0[0] f* zmm13.d
    zmm2 = zmm12
    arg5 = zmm12.d
    zmm2[0] = zmm2[0] f* zmm12.d
    zmm2[0] = zmm2[0] + zmm0[0]
    zmm2[0] = zmm2[0] + zmm6[0]
    
    if (not(zmm2[0] == 1f))
        if (zmm2[0] >= 9.99999994e-09f)
            zmm3 = zmm2
            float temp0_8[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
            zmm2 = 0x3f000000
            zmm3[0] = zmm3[0] * 0.5f
            temp0_8[0] = temp0_8[0] * temp0_8[0]
            zmm3[0] = zmm3[0] * temp0_8[0]
            zmm2[0] = 0.5f - zmm3[0]
            temp0_8[0] = temp0_8[0] * zmm2[0]
            temp0_8[0] = temp0_8[0] + temp0_8[0]
            temp0_8[0] = temp0_8[0] * temp0_8[0]
            zmm3[0] = zmm3[0] * temp0_8[0]
            zmm4.d = 0.5f - zmm3[0]
            zmm3 = data_143dbb1f8
            temp0_8[0] = temp0_8[0] f* zmm4.d
            zmm4 = 0x322bcc77
            temp0_8[0] = temp0_8[0] + temp0_8[0]
            zmm12.d = zmm12.d f* temp0_8[0]
            arg5 = temp0_8[0]
            zmm13.d = zmm13.d f* temp0_8[0]
            zmm6[0] = zmm6[0] * temp0_8[0]
            zmm5 = 0x3f000000
            arg5 = zmm12.d
        else
            arg5 = zmm10[0]
            zmm13 = zmm3
            zmm12 = zmm10
            zmm6 = zmm9
        
        arg_18 = zmm6[0]
    
    zmm2 = 0x80000000
    zmm7 = zmm12 ^ 0x80000000
    zmm1 = zmm13
    zmm0 = zmm7
    zmm1[0] = zmm1[0] f* zmm13.d
    zmm0[0] = zmm0[0] f* zmm7.d
    zmm1[0] = zmm1[0] + zmm0[0]
    
    if (not(zmm1[0] != 1f))
        arg_10 = zmm13.d
        zmm10 = zmm13
    else if (zmm1[0] f>= zmm4.d)
        zmm3 = zx.o(0)
        zmm4 = zmm5
        zmm10 = zmm13
        zmm2 = zmm4
        zmm3[0] = zmm1[0]
        float temp0_9[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] f* zmm4.d
        temp0_9[0] = temp0_9[0] * temp0_9[0]
        zmm3[0] = zmm3[0] * temp0_9[0]
        zmm2[0] = zmm2[0] - zmm3[0]
        temp0_9[0] = temp0_9[0] * zmm2[0]
        zmm2 = 0x80000000
        temp0_9[0] = temp0_9[0] + temp0_9[0]
        temp0_9[0] = temp0_9[0] * temp0_9[0]
        zmm3[0] = zmm3[0] * temp0_9[0]
        zmm4.d = zmm4.d f- zmm3[0]
        temp0_9[0] = temp0_9[0] f* zmm4.d
        temp0_9[0] = temp0_9[0] + temp0_9[0]
        zmm10[0] = zmm10[0] * temp0_9[0]
        arg_10 = temp0_9[0]
        zmm7.d = zmm7.d f* temp0_9[0]
        arg_10 = zmm10[0]
    else
        zmm7 = zmm3
        zmm15 = zmm9
    
    zmm11 ^= zmm2
    zmm5 = arg_8 ^ zmm2
    zmm8 = var_118_1 ^ zmm2
    zmm2 = zmm11.d
    zmm10[0] = zmm10[0] * zmm6[0]
    int32_t var_18c_1 = 0
    zmm9.d = zmm10.d f* zmm13.d
    int32_t var_17c_1 = 0
    zmm15[0] = zmm15[0] f* zmm12.d
    int32_t var_16c_1 = 0
    zmm4.d = zmm7.d f* zmm6[0]
    int32_t var_15c_1 = 0x3f800000
    zmm15[0] = zmm15[0] - zmm10[0]
    zmm15[0] = zmm15[0] * zmm5[0]
    arg_8 = zmm5[0]
    zmm15[0] = zmm15[0] f* zmm13.d
    zmm4.d = zmm4.d f- zmm15[0]
    zmm0 = zmm7
    zmm0[0] = zmm0[0] f* zmm12.d
    zmm12.d = zmm10.d f* zmm8[0]
    zmm9.d = zmm9.d f- zmm0[0]
    zmm0 = zmm7
    zmm0[0] = zmm0[0] f* zmm11.d
    zmm11.d = zmm8.d f* zmm4.d
    zmm12.d = zmm12.d f+ zmm0[0]
    zmm2[0] = zmm2[0] * zmm15[0]
    zmm11.d = zmm11.d f+ zmm2[0]
    zmm0 = zmm13
    zmm0[0] = zmm0[0] * zmm2[0]
    zmm12.d = zmm12.d f+ zmm15[0]
    zmm1 = zmm5
    zmm5 = arg5
    var_198[0] = zmm7.d
    zmm7 = var_158_1.o
    float temp0_10[0x4] = _mm_shuffle_ps(var_198, var_198, 0xe1)
    temp0_10[0] = zmm15[0]
    zmm1[0] = zmm1[0] f* zmm9.d
    zmm3 = data_142d5beb0
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
    temp0_11[0] = zmm13.d
    zmm5[0] = zmm5[0] * zmm8[0]
    zmm8 = 0:4.o
    zmm11.d = zmm11.d f+ zmm1[0]
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
    zmm1 = zmm6
    zmm1[0] = zmm1[0] * arg_8
    zmm5[0] = zmm5[0] + zmm0[0]
    zmm6 = 0.o
    zmm13 = _mm_shuffle_ps(temp0_12, temp0_12, 0x55)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0)
    zmm13 = _mm_mul_ps(zmm13, zmm8)
    zmm5[0] = zmm5[0] + zmm1[0]
    float temp0_16[0x4] = _mm_mul_ps(temp0_14, zmm7)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xaa)
    float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xff), zmm3)
    zmm13 =
        _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm13, temp0_16), _mm_mul_ps(temp0_17, zmm6)), temp0_19)
    var_188[0] = arg_10[0]
    float temp0_24[0x4] = _mm_shuffle_ps(var_188, var_188, 0xe1)
    result = arg6
    temp0_24[0] = zmm4.d
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
    temp0_25[0] = zmm5[0]
    *arg1 = zmm13
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc9)
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0)
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
    float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xff), zmm3)
    float temp0_32[0x4] = _mm_mul_ps(temp0_27, zmm7)
    float temp0_33[0x4] = _mm_mul_ps(temp0_28, zmm6)
    float temp0_37[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_29, zmm8), temp0_32), temp0_33), temp0_31)
    var_178[0] = zmm15[0]
    float temp0_38[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
    temp0_38[0] = zmm9.d
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc6)
    temp0_39[0] = arg_18[0]
    arg1[1] = temp0_37
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc9)
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0)
    float temp0_42[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xaa)
    zmm4 = _mm_shuffle_ps(temp0_40, temp0_40, 0x55)
    float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xff), zmm3)
    var_168[0] = zmm12.d
    float temp0_46[0x4] = _mm_mul_ps(temp0_41, zmm7)
    float temp0_47[0x4] = _mm_mul_ps(temp0_42, zmm6)
    float temp0_48[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
    temp0_48[0] = zmm11.d
    zmm4 = _mm_mul_ps(zmm4, zmm8)
    float temp0_50[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xc6)
    temp0_50[0] = zmm5[0]
    float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xc9)
    zmm4 = _mm_add_ps(zmm4, temp0_46)
    float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0), zmm7)
    zmm4 = _mm_add_ps(zmm4, temp0_47)
    float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xaa), zmm6)
    zmm4 = _mm_add_ps(zmm4, temp0_45)
    float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0x55), zmm8)
    float temp0_62[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_51, temp0_51, 0xff), data_142d5beb0)
    arg1[2] = zmm4
    zmm0 = zx.o(0)
    arg1[3] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_60, temp0_54), temp0_57), temp0_62)
    int32_t rdx = *(result + 4)
    
    if (*result s<= rdx)
        rdx = *result
    
    zmm0[0] = float.s(rdx)
    zmm14[0] = zmm14[0] / zmm0[0]
    zmm14[0] = zmm14[0] * arg_20
    zmm14[0] = zmm14[0] * var_110
    *rdi = zmm14[0]
    rdi[1] = zmm14[0]
    rdi[2] = zmm14[0]
return result
