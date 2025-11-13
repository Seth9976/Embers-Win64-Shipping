// 函数: sub_141f54610
// 地址: 0x141f54610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
int128_t* rdi = arg2
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm10[0x4]
float var_58[0x4] = zmm10
int128_t zmm11
int128_t var_68 = zmm11
float* result

if (sub_141f075c0(arg1, arg2).b == 0)
    result.b = 0
else
    float zmm1_1[0x4] = *(arg1 + 0x350)
    
    if (zmm1_1[0] >= 0f)
        zmm1_1 = __minss_xmmss_memss(zmm1_1[0], 0x42b20000)
    else
        zmm1_1 = zx.o(0)
    
    zmm1_1[0] = zmm1_1[0] * 0.0174532924f
    float zmm2_1[0x4] = *(arg1 + 0x354)
    zmm2_1[0] = zmm2_1[0] * 0.0174532924f
    zmm1_1[0] = zmm1_1[0] + 0.00100000005f
    
    if (not(zmm2_1[0] < zmm1_1[0]))
        zmm1_1 = __minss_xmmss_memss(zmm2_1[0], 0x3fc6f4b7)
    
    float zmm0_2[0x4]
    zmm0_2, zmm11 = __libm_sse2_sincosf_(zmm1_1)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
    float var_78[0x4]
    float* rax = sub_141f133e0(arg1, &var_78)
    float zmm3_1[0x4] = *(rdi + 0x18)
    float zmm2_2[0x4] = *(arg1 + 0x1d0)
    zmm7 = *rdi
    float zmm0_3 = zmm2_2[0]
    *(rdi + 4)
    zmm8 = *(rdi + 8)
    zmm3_1[0] = zmm3_1[0] / zmm0_2[0]
    zmm3_1[0] = zmm3_1[0] * *rax
    zmm0_3 = zmm0_3 - zmm3_1[0]
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
    zmm7[0] = zmm7[0] - zmm0_3
    zmm0_3 = zmm3_1[0] * rax[1]
    zmm3_1[0] = zmm3_1[0] * rax[2]
    temp0_4[0] = temp0_4[0] - zmm0_3
    temp0_5[0] = temp0_5[0] - zmm3_1[0]
    temp0_4[0]
    zmm8[0] = zmm8[0] - temp0_5[0]
    result, zmm6 = sub_141f133e0(arg1, &var_78)
    float zmm2_3 = zmm6[0] * result[1]
    zmm7[0] = zmm7[0] * *result
    zmm8[0] = zmm8[0] * result[2]
    zmm2_3 = zmm2_3 + zmm7[0] + zmm8[0]
    
    if (zmm2_3 f<= zmm11.d)
        result.b = 0
    else
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm6[0] = zmm6[0] + zmm7[0]
        temp0_3[0] = temp0_3[0] * temp0_3[0]
        zmm6[0] = zmm6[0] + zmm8[0]
        zmm6[0] = zmm6[0] * temp0_3[0]
        
        if (zmm2_3 * zmm2_3 < zmm6[0])
            result.b = 0
        else
            float zmm1_3[0x4] = *(arg1 + 0x1d0)
            zmm7 = *rdi
            zmm8 = *(rdi + 4)
            zmm7[0] = zmm7[0] - zmm1_3[0]
            zmm6 = *(rdi + 8)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 0x55)
            zmm8[0] = zmm8[0] - temp0_6[0]
            float temp0_7[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xaa)
            zmm6[0] = zmm6[0] - temp0_7[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm10 = zmm8
            zmm10[0] = zmm10[0] * zmm8[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm10[0] = zmm10[0] + zmm7[0]
            zmm10[0] = zmm10[0] + zmm6[0]
            result, zmm6 = sub_141f133e0(arg1, &var_78)
            zmm8[0] = zmm8[0] * result[1]
            zmm7[0] = zmm7[0] * *result
            zmm6[0] = zmm6[0] * result[2]
            zmm8[0] = zmm8[0] + zmm7[0]
            zmm8[0] = zmm8[0] + zmm6[0]
            zmm8 ^= data_142d3f780
            
            if (zmm8[0] f<= zmm11.d)
                result.b = 1
            else
                zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm0_2[0] = zmm0_2[0] * zmm10[0]
                
                if (zmm8[0] < zmm0_2[0])
                    result.b = 1
                else
                    float zmm0_5 = *(rdi + 0x18)
                    result.b = zmm0_5 * zmm0_5 >= zmm10[0]

return result
