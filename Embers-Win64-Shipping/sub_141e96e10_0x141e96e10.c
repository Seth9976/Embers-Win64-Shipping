// 函数: sub_141e96e10
// 地址: 0x141e96e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result_2[0x4] = 0xbf000000
float result[0x4]
float zmm1[0x4]
uint128_t zmm2
int32_t zmm4
float zmm7[0x4]
float var_f8[0x4]
int64_t var_c8

if ((*(arg1 + 0x30) & 1) == 0)
    float temp0_11[0x4] = __maxss_xmmss_memss((*(arg1 + 0x18))[0], 0x3a83126f)
    int32_t rax_3 = *(arg4 + 0x98) - *(arg4 + 0x90)
    int32_t rcx_5 = *(arg4 + 0x9c) - *(arg4 + 0x94)
    temp0_11[0] = temp0_11[0] * 0.00872664619f
    
    if (rax_3 s<= rcx_5)
        if (arg2 == 1)
            goto label_141e970e9
        
        goto label_141e970bd
    
    char rdx_1
    uint128_t zmm8
    uint128_t zmm9
    
    if (arg2 == 2 || arg2 == 1)
    label_141e970e9:
        zmm7 = 0x3f800000
        rdx_1 = *(arg1 + 0x34)
        zmm8 = 0x3f800000
        zmm9.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f/ _mm_cvtepi32_ps(zx.o(rcx_5))[0]
    else
    label_141e970bd:
        rdx_1 = *(arg1 + 0x34)
        
        if (rdx_1 == 1)
            goto label_141e970e9
        
        zmm7 = 0x3f800000
        zmm9 = 0x3f800000
        zmm8.d = _mm_cvtepi32_ps(zx.o(rcx_5)).d f/ _mm_cvtepi32_ps(zx.o(rax_3))[0]
    
    int128_t zmm6
    
    if (rdx_1 != 1)
        zmm6 = data_14399fa0c
        result = tanf(temp0_11[0])
        zmm2 = data_142d3f660
        zmm7[0] = zmm7[0] / result[0]
        int64_t var_f4_2 = 0
        int64_t var_e0_3 = 0
        int32_t var_bc_3 = 0
        zmm4 = (zx.o(0)).d
        zmm7[0] = zmm7[0] f* zmm8.d
        zmm7[0] = zmm7[0] f* zmm9.d
        var_f8[0] = zmm7[0]
        zmm1 = 0:4.o
        *(arg4 + 0x50) = var_f8
        result = 0.o
        float temp0_22[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        float temp0_23[0x4] = _mm_shuffle_ps(result, result, 0xd2)
        temp0_22[0] = zmm7[0]
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xe1)
        temp0_23[0] = zmm6.d
        *(arg4 + 0x60) = temp0_24
        result = _mm_shuffle_ps(temp0_23, temp0_23, 0xc9)
        *(arg4 + 0x70) = zmm2
        *(arg4 + 0x80) = result
    else
        zmm1 = *(arg1 + 0x20)
        zmm4 = (zx.o(0)).d
        zmm6 = *(arg1 + 0x24)
        result = *(arg1 + 0x28)
        zmm1[0] = zmm1[0] * 0.5f
        result[0] = result[0] f- zmm6.d
        zmm1[0] = zmm1[0] f/ zmm9.d
        zmm2.d = zmm1.d f* zmm8.d
        bool cond:2_1 = zmm1[0] == 0f
        zmm7[0] = zmm7[0] / result[0]
        
        if (not(cond:2_1))
            zmm7[0] = zmm7[0] / zmm1[0]
        
        if (not(zmm2.d f== 0f))
            zmm7[0] = zmm7[0] f/ zmm2.d
        
        float zmm5[0x4] = zmm7 ^ data_142d3f780
        int64_t var_cc_2 = 0
        int64_t var_f4_1 = 0
        var_f8[0] = zmm7[0]
        int64_t var_e0_2 = 0
        zmm1 = 0:4.o
        *(arg4 + 0x50) = var_f8
        result = 0.o
        float temp0_16[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        temp0_16[0] = zmm7[0]
        float temp0_17[0x4] = _mm_shuffle_ps(result, result, 0xd2)
        float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xe1)
        temp0_17[0] = zmm5[0]
        *(arg4 + 0x60) = temp0_18
        var_c8:4.d = 0
        zmm2.d = zmm7.d f* zmm6.d
        int32_t var_bc_2 = 0x3f800000
        zmm1 = var_c8.o
        float temp0_19[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
        zmm2.d = zmm2.d f+ zmm7[0]
        result = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
        *(arg4 + 0x70) = result
        temp0_19[0] = zmm2.d
        *(arg4 + 0x80) = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
else
    void var_78
    int128_t* rax
    rax, result_2 = sub_1423d3b50(arg3, &var_78, *(arg1 + 0x2c), arg4 + 0x90)
    *(arg4 + 0xa0) = *rax
    *(arg4 + 0xa4) = *(rax + 4)
    *(arg4 + 0xa8) = *(rax + 8)
    *(arg4 + 0xac) = *(rax + 0xc)
    float zmm3[0x4]
    float zmm5_1[0x4]
    float zmm8_1[0x4]
    float result_1[0x4]
    
    if (*(arg1 + 0x34) != 1)
        float temp0_4[0x4] = __maxss_xmmss_memss((*(arg1 + 0x18))[0], 0x3a83126f)
        result_1 = data_14399fa0c
        temp0_4[0] = temp0_4[0] * 0.00872664619f
        result = tanf(temp0_4[0])
        zmm7 = 0x3f800000
        zmm4 = (zx.o(0)).d
        zmm3 = data_142d3f660
        zmm1 = 0x3f800000
        zmm1[0] = 1f / result[0]
        int64_t var_e0_1 = 0
        int32_t var_bc_1 = 0
        zmm5_1 = 0:4.o
        zmm8_1 = 0.o
        zmm2.d = zmm1.d f* *(arg1 + 0x2c)
        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
        zmm8_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xd2)
        zmm5_1[0] = zmm2.d
        zmm8_1[0] = result_1[0]
    else
        zmm7 = 0x3f800000
        zmm4 = (zx.o(0)).d
        zmm2 = *(arg1 + 0x20)
        zmm1 = 0x3f800000
        zmm1[0] = 1f f/ *(arg1 + 0x2c)
        zmm5_1 = *(arg1 + 0x24)
        result_1 = 0x3f800000
        result = *(arg1 + 0x28)
        zmm3 = 0x3f800000
        zmm2.d = zmm2.d f* 0.5f
        result[0] = result[0] - zmm5_1[0]
        zmm1[0] = zmm1[0] f* zmm2.d
        result_1[0] = 1f / result[0]
        
        if (not(zmm1[0] == 0f))
            zmm3[0] = 1f / zmm1[0]
        
        zmm1 = 0x3f800000
        
        if (not(zmm2.d f== 0f))
            zmm1[0] = 1f f/ zmm2.d
        
        result = result_1
        int64_t var_cc_1 = 0
        result_1 ^= data_142d3f780
        result[0] = result[0] * zmm5_1[0]
        int64_t var_e0 = 0
        zmm5_1 = 0:4.o
        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
        result[0] = result[0] + 1f
        zmm5_1[0] = zmm3[0]
        zmm3 = 0.o
        float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        var_c8:4.d = 0
        temp0_1[0] = result_1[0]
        int32_t var_bc = 0x3f800000
        zmm8_1 = var_c8.o
        zmm8_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xd2)
        zmm3 = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
        zmm8_1[0] = result[0]
    result = *(arg1 + 0x580)
    bool cond:5_1 = result[0] f!= zmm4
    int64_t var_f4 = 0
    var_f8[0] = zmm1[0]
    float temp0_7[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
    
    if (cond:5_1 || not(zmm4 f== *(arg1 + 0x584)))
        zmm2 = *(arg1 + 0x584)
        result[0] = result[0] + result[0]
        zmm2.d = zmm2.d f+ zmm2.d
        result[0] = result[0] - zmm7[0]
        zmm2.d = zmm2.d f- zmm7[0]
        result[0] = result[0] * 0.5f
        zmm2.d = zmm2.d f* 0.5f
        result_2[0] = result_2[0] - result[0]
        result = result_2
        result[0] = result[0] f- zmm2.d
        zmm3[0] = result_2[0]
        float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        temp0_9[0] = result[0]
        zmm3 = _mm_shuffle_ps(temp0_9, temp0_9, 0xe1)
    
    *(arg4 + 0x50) = var_f8
    *(arg4 + 0x60) = temp0_8
    *(arg4 + 0x70) = zmm3
    *(arg4 + 0x80) = temp0_7
zmm2 = *(arg1 + 0x580)

if (zmm2.d f!= zmm4 || not(zmm4 f== *(arg1 + 0x584)))
    zmm1 = *(arg1 + 0x584)
    zmm2.d = zmm2.d f+ zmm2.d
    zmm1[0] = zmm1[0] + zmm1[0]
    result = result_2
    zmm2.d = zmm2.d f- zmm7[0]
    zmm1[0] = zmm1[0] - zmm7[0]
    zmm2.d = zmm2.d f* 0.5f
    zmm1[0] = zmm1[0] * 0.5f
    result[0] = result[0] f- zmm2.d
    result_2[0] = result_2[0] - zmm1[0]
    *(arg4 + 0x70) = result[0]
    *(arg4 + 0x74) = result_2[0]

return result
