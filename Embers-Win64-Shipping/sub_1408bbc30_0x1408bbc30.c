// 函数: sub_1408bbc30
// 地址: 0x1408bbc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
bool cond:0 = *(arg1 + 0x282) != 0
*(arg1 + 0x71) = 0

if (not(cond:0) && *(arg1 + 0x280) == 0 && *(arg1 + 0x24c) != 0 && *(arg1 + 0x228) != 0)
    void* rdx = arg1 + 0x200
    uint32_t rcx = zx.d(*(rdx + 0x10))
    
    if (rcx != 0)
        if (rcx == 1)
            rdx = *(rdx + 0x18)
        else if (rcx == 2 || rcx != 3)
            rdx = &arg4[4]
        else
            rdx = &arg4[8]
    
    float zmm1[0x4] = *rdx
    char rax = *(arg1 + 0xe5)
    float zmm0[0x4] = *(arg1 + 0x38)
    zmm0[0] = zmm0[0] f* *arg4
    float zmm2 = *(arg1 + 0x3c) f* arg4[1]
    zmm0[0] = zmm0[0] * zmm1[0]
    float var_14c_1 = zmm0[0]
    zmm2 = zmm2 * _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float var_148_1 = zmm2
    zmm2 = *(arg1 + 0x40) f* arg4[2] * temp0_3[0]
    zmm0 = *(arg1 + 0x44)
    zmm0[0] = zmm0[0] f* arg4[3]
    zmm0[0] = zmm0[0] * temp0_4[0]
    float var_140_1 = zmm0[0]
    float arg_8 = data_143dbb1f0.d[0]
    float var_158_1 = data_143dbb1f0:4.d[0]
    
    if (rax == 1)
        arg_8 = (*(arg1 + 0x64))[0]
        var_158_1 = (*(arg1 + 0x68))[0]
    else if (rax == 0)
        arg_8 = (*(arg1 + 0x28c))[0]
        var_158_1 = (*(arg1 + 0x290))[0]
    
    float zmm9[0x4] = *(arg3 + 0x1c)
    int128_t zmm6
    zmm6.d = (*(arg1 + 0x20)).d f* 0.0174532942f
    int64_t var_128_1 = *(arg3 + 0x2c)
    float zmm0_1[0x4]
    float zmm6_1[0x4]
    zmm0_1, zmm6_1 = sub_140a3f4a0(_mm_shuffle_ps(zmm9, zmm9, 0x55), zmm9)
    zmm6_1[0] = zmm6_1[0] - zmm0_1[0]
    float zmm0_2[0x4]
    float zmm7_1[0x4]
    float zmm9_1[0x4]
    zmm0_2, zmm7_1, zmm9_1 = __libm_sse2_sincosf_(zmm6_1)
    float zmm1_1 = *(arg1 + 0xdc)
    float zmm2_1[0x4] = *(arg1 + 0xe0)
    float zmm11_1[0x4] = *(arg1 + 0x18)
    float zmm12_1[0x4] = *(arg1 + 0x1c)
    float zmm14_1 = *(arg2 + 0x10)
    int32_t rax_1 = -1
    float temp0_6[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
    zmm2_1[0] = zmm2_1[0] * zmm0_2[0]
    temp0_6[0] = temp0_6[0] * zmm1_1
    float zmm15_1[0x4] = zmm2_1 ^ data_142d3f780
    float temp0_7[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xff)
    float var_154_1 = temp0_6[0]
    zmm0_2[0] = zmm0_2[0] * zmm1_1
    temp0_6[0] = temp0_6[0] * zmm2_1[0]
    float var_150_1 = zmm0_2[0]
    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
    temp0_7[0] = temp0_7[0] * temp0_7[0]
    float var_138[0x4] = temp0_6
    temp0_7[0] = temp0_7[0] + zmm7_1[0]
    float temp0_8 = _mm_sqrt_ss(0, temp0_7[0])
    zmm0_2 = 0x3f800000
    zmm9_1[0] = zmm9_1[0] / temp0_8
    zmm1_1 = zmm11_1[0] * zmm9_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
    zmm0_2[0] = 1f - zmm9_1[0]
    float temp0_9[0x4] = _mm_sqrt_ss(0, zmm0_2[0])
    zmm0_2 = zx.o(0)
    
    if (zmm7_1[0] > 0f)
        rax_1 = 1
    
    zmm0_2[0] = float.s(rax_1)
    temp0_9[0] = temp0_9[0] * zmm0_2[0]
    zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
    float temp0_10[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa)
    temp0_10[0] = temp0_10[0] * temp0_10[0]
    zmm9_1[0] = zmm9_1[0] + zmm7_1[0]
    temp0_10[0] = temp0_10[0] + temp0_7[0]
    float temp0_11[0x4] = _mm_sqrt_ss(0, zmm9_1[0])
    zmm12_1[0] = zmm12_1[0] * temp0_9[0]
    float temp0_12[0x4] = _mm_sqrt_ss(0, temp0_10[0])
    zmm0_2 = *(arg1 + 0x30)
    zmm0_2[0] = zmm0_2[0] - (zmm1_1 - zmm12_1[0]) * 0.5f
    zmm1_1 = zmm12_1[0] * zmm9_1[0]
    temp0_11[0] = temp0_11[0] * zmm0_2[0]
    zmm11_1[0] = zmm11_1[0] * temp0_9[0]
    temp0_11[0] = temp0_11[0] + arg_8
    float zmm5_1[0x4] = *(arg3 + 0x20)
    zmm2_1 = *(arg3 + 0x28)
    float zmm3_1[0x4] = *(arg3 + 0x24)
    zmm0_2 = *(arg1 + 0x34)
    float zmm6_2[0x4] = *(arg3 + 0x1c)
    zmm1_1 = (zmm1_1 + zmm11_1[0]) * 0.5f
    temp0_11[0] = temp0_11[0] - zmm14_1
    float zmm4_1[0x4] = var_154_1
    zmm14_1 = zmm14_1 - temp0_11[0]
    *(arg3 + 8)
    zmm0_2[0] = zmm0_2[0] - zmm1_1
    float var_e0_1 = zmm11_1[0]
    temp0_11[0] = temp0_11[0] f- *(arg3 + 0x2c)
    zmm11_1[0] = zmm11_1[0] f* *(arg1 + 0x48)
    zmm1_1 = zmm6_2[0]
    zmm14_1 = zmm14_1 f+ *(arg3 + 0x2c)
    temp0_12[0] = temp0_12[0] * zmm0_2[0]
    zmm5_1[0] = zmm5_1[0] * zmm3_1[0]
    temp0_12[0] = temp0_12[0] + var_158_1
    zmm1_1 = zmm1_1 * zmm2_1[0]
    float var_dc_1 = zmm12_1[0]
    zmm12_1[0] = zmm12_1[0] f* *(arg1 + 0x4c)
    temp0_12[0] = temp0_12[0] f- *(arg2 + 0x14)
    zmm1_1 = zmm1_1 - zmm5_1[0]
    temp0_12[0] = temp0_12[0] f- *(arg3 + 0x30)
    temp0_12[0] = temp0_12[0] f- *(arg3 + 0x30)
    float zmm10_1 = 1f / zmm1_1
    zmm3_1[0] = zmm3_1[0] * zmm10_1
    zmm2_1[0] = zmm2_1[0] * zmm10_1
    zmm3_1[0] = zmm3_1[0] * temp0_12[0]
    temp0_11[0] = temp0_11[0] * zmm2_1[0]
    zmm2_1 = zmm11_1 ^ data_142d3f780
    zmm1_1 = zmm2_1[0]
    zmm5_1[0] = zmm5_1[0] * zmm10_1
    temp0_11[0] = temp0_11[0] - zmm3_1[0]
    zmm1_1 = zmm1_1 * zmm4_1[0]
    zmm6_2[0] = zmm6_2[0] * zmm10_1
    zmm3_1 = zmm12_1 ^ data_142d3f780
    zmm14_1 = zmm14_1 * zmm5_1[0]
    zmm5_1 = var_138
    zmm1_1 = zmm1_1 + temp0_11[0]
    zmm3_1[0] = zmm3_1[0] * zmm15_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
    zmm3_1[0] = zmm3_1[0] + zmm11_1[0]
    zmm6_2[0] = zmm6_2[0] * temp0_12[0]
    var_138[0] = zmm4_1[0]
    var_138[2] = zmm15_1[0]
    zmm14_1 = zmm14_1 + zmm6_2[0]
    var_138[3] = zmm5_1[0]
    zmm1_1 = zmm1_1 + zmm3_1[0]
    zmm0_2 = var_150_1
    zmm2_1[0] = zmm2_1[0] * zmm0_2[0]
    var_138[1] = zmm0_2[0]
    zmm3_1[0] = zmm3_1[0] + zmm14_1
    zmm2_1[0] = zmm2_1[0] + zmm12_1[0]
    var_128_1.d = zmm1_1
    zmm3_1[0] = zmm3_1[0] + zmm2_1[0]
    var_128_1:4.d = zmm3_1[0]
    float var_c4[0x4]
    float zmm8_2[0x4]
    int32_t zmm9_2
    zmm8_2, zmm9_2 = sub_1408b8950(&var_c4, &var_138, arg3 + 0x1c)
    float zmm7_2 = zmm8_2[0]
    zmm8_2[0] = zmm8_2[0] f* zmm9_2
    zmm8_2[0] = zmm8_2[0] f+ *(arg3 + 0xc)
    zmm7_2 = zmm7_2 * zmm14_1 f+ *(arg3 + 0x10)
    result = sub_1408c0480(arg1)
    
    if (result == 0)
        char var_e4
        result = (var_e4 & 0xfe) | 2
        float var_fc_1[0x4] = var_c4
        int64_t var_10c_1 = 0
        char result_1 = result
        float var_118[0x4]
        var_118[0] = zmm8_2[0]
        float temp0_13[0x4] = _mm_shuffle_ps(var_118, var_118, 0xe1)
        temp0_13[0] = zmm7_2
        *(arg1 + 0x71) = 1
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
        temp0_14[0] = zmm8_2[0]
        *(arg1 + 0x74) = _mm_shuffle_ps(temp0_14, temp0_14, 0xc9)
        float zmm0_3[0x4] = var_10c_1:4.o
        float temp0_16[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xe1)
        temp0_16[0] = var_e0_1[0]
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc6)
        temp0_17[0] = var_dc_1
        *(arg1 + 0x84) = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
        *(arg1 + 0x94) = var_fc_1
        int64_t var_b4
        *(arg1 + 0xa4) = var_b4
        *(arg1 + 0xac) = var_14c_1[0]
        *(arg1 + 0xb0) = var_148_1.d
        *(arg1 + 0xb4) = zmm2[0]
        *(arg1 + 0xb8) = var_140_1[0]

return result
