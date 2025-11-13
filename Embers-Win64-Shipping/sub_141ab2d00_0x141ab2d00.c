// 函数: sub_141ab2d00
// 地址: 0x141ab2d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x10e))
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]
float var_28
float zmm3[0x4]

if (result.b u< 4)
    zmm3 = arg2[1]
    zmm2 = arg3[1]
    zmm3[0] = zmm3[0] - zmm2[0]
    result = zx.q(result.b)
    float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    var_28 = zmm3[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    temp0[0] = temp0[0] - temp0_2[0]
    temp0_1[0] = temp0_1[0] - temp0_3[0]
    float var_24_1 = temp0[0]
    float var_20_1 = temp0_1[0]
    void var_2c
    zmm4 = *(&var_2c + (result << 2))
else if (result.b u>= 7)
    zmm2 = arg3[2]
    
    if (result.b != 7)
        zmm3 = arg2[2]
        result = zx.q(result.b)
        zmm3[0] = zmm3[0] - zmm2[0]
        float temp0_36[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_37[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        var_28 = zmm3[0]
        float temp0_38[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_39[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        temp0_36[0] = temp0_36[0] - temp0_38[0]
        temp0_37[0] = temp0_37[0] - temp0_39[0]
        float var_24_2 = temp0_36[0]
        float var_20_2 = temp0_37[0]
        int32_t var_48[0x4]
        zmm4 = var_48[result]
    else
        zmm0 = arg2[2]
        float temp0_28[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_29[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        float temp0_30[0x4] = _mm_max_ss(temp0_28[0], zmm2[0])
        float temp0_31[0x4] = _mm_max_ss(temp0_29[0], zmm0[0])
        float temp0_32[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_33[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
        float temp0_34[0x4] = _mm_max_ss(temp0_30[0], temp0_32[0])
        zmm4 = _mm_max_ss(temp0_31[0], temp0_33[0])
        zmm4[0] = zmm4[0] - temp0_34[0]
else
    zmm4 = *arg2
    zmm3 = *arg3
    zmm5 = zmm3 ^ 0x80000000
    float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa) ^ 0x80000000
    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55) ^ 0x80000000
    float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    temp0_4[0] = zmm1[0]
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
    temp0_8[0] = zmm2[0]
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
    temp0_10[0] = temp0_7[0]
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
    var_28.o = temp0_11
    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0x1b), temp0_9)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x4e)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), temp0_11)
    float temp0_17[0x4] = __mulps_xmmps_memps(temp0_13, data_143f2b850)
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xb1)
    float temp0_19[0x4] = _mm_add_ps(temp0_17, temp0_16)
    float temp0_21[0x4] = _mm_mul_ps(temp0_14, _mm_shuffle_ps(zmm4, zmm4, 0x55))
    float temp0_23[0x4] = _mm_mul_ps(temp0_18, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
    float temp0_24[0x4] = __mulps_xmmps_memps(temp0_21, data_143f2b840)
    float temp0_25[0x4] = __mulps_xmmps_memps(temp0_23, data_143f2b830)
    float var_18[0x4] = _mm_add_ps(_mm_add_ps(temp0_19, temp0_24), temp0_25)
    sub_140ad3d90(&var_18, &var_28)
    result = zx.q(*(arg1 + 0x10e))
    int32_t var_38[0x3]
    zmm4 = var_38[result]
void* rcx_1 = *(arg1 + 0xd8)

if (rcx_1 != 0)
    return sub_141f89240(rcx_1, zmm4) __tailcall

if ((*(arg1 + 0x10f) & 1) != 0)
    zmm2 = *(arg1 + 0xe8)
    zmm5 = *(arg1 + 0xe4)
    zmm1 = zmm2
    zmm1[0] = zmm1[0] - zmm5[0]
    
    if (__andps_xmmxud_memxud(zmm1, data_142d3f770)[0] > 9.99999994e-09f)
        zmm4[0] = zmm4[0] - zmm5[0]
        zmm2 = zx.o(0)
        zmm4[0] = zmm4[0] / zmm1[0]
        
        if (not(zmm4[0] < 0f))
            zmm2 = _mm_min_ss(zmm4[0], 0x3f800000)
    else
        if (zmm4[0] < zmm2[0])
            zmm4 = zx.o(0)
        else
            zmm4 = 0x3f800000
        
        zmm2 = _mm_min_ss(zmm4[0], 0x3f800000)
    
    zmm0 = *(arg1 + 0xec)
    zmm1 = *(arg1 + 0xf0)
    zmm1[0] = zmm1[0] - zmm0[0]
    zmm1[0] = zmm1[0] * zmm2[0]
    zmm1[0] = zmm1[0] + zmm0[0]
    zmm4 = zmm1

zmm4[0] = zmm4[0] f* *(arg1 + 0xe0)
return result
