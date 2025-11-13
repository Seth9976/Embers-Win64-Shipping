// 函数: sub_141ac8710
// 地址: 0x141ac8710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg2 + 0x50)
float zmm0[0x4] = *(arg2 + 0x10)
float zmm3[0x4] = 0x3f000000
float zmm6[0x4] = *(r8 + 0x10)
float zmm8[0x4] = zmm6
float zmm7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
float zmm9[0x4] = *(r8 + sx.q(*(arg2 + 0x58)) * 0x30 - 0x20)
float var_a8[0x4] = zmm0
zmm8[0] = zmm8[0] - zmm9[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
zmm7[0] = zmm7[0] - temp0_2[0]
float var_88 = temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
zmm6[0] = zmm6[0] - temp0_3[0]
float var_78[0x4] = temp0_3
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] * zmm7[0]
float zmm1 = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] + zmm8[0]
zmm7[0] = zmm7[0] + zmm1

if (not(zmm7[0] == 1f))
    if (zmm7[0] >= 9.99999994e-09f)
        zmm3 = zx.o(0)
        float zmm4[0x4] = 0x3f000000
        zmm3[0] = zmm7[0]
        float zmm2[0x4] = 0x3f000000
        float temp0_4[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        zmm2[0] = 0.5f - zmm3[0] * temp0_4[0]
        temp0_4[0] = temp0_4[0] * zmm2[0]
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        zmm3[0] = zmm3[0] * temp0_4[0] * temp0_4[0]
        zmm4[0] = 0.5f - zmm3[0]
        zmm3 = 0x3f000000
        temp0_4[0] = temp0_4[0] * zmm4[0]
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        zmm8[0] = zmm8[0] * temp0_4[0]
        zmm7[0] = zmm7[0] * temp0_4[0]
        zmm6[0] = zmm6[0] * temp0_4[0]
    else
        zmm8 = data_143dbb1f8
        zmm7 = data_143dbb1fc
        zmm6 = data_143dbb200

float zmm11[0x4] = var_a8[0]
float zmm10[0x4] = var_a8[1]
zmm11[0] = zmm11[0] - zmm9[0]
zmm10[0] = zmm10[0] - var_88
zmm9 = var_a8[2]
zmm9[0] = zmm9[0] - var_78[0]
float var_98 = zmm8[0]
float var_94 = zmm7[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm1 = zmm9[0] * zmm9[0]
zmm10[0] = zmm10[0] + zmm11[0]
float var_90 = zmm6[0]
zmm10[0] = zmm10[0] + zmm1

if (not(zmm10[0] == 1f))
    if (zmm10[0] >= 9.99999994e-09f)
        float temp0_5[0x4] = _mm_rsqrt_ss(zmm10[0], zmm10[0])
        zmm10[0] = zmm10[0] * zmm3[0]
        temp0_5[0] = temp0_5[0] * temp0_5[0]
        zmm3[0] = zmm3[0] - zmm10[0] * temp0_5[0]
        temp0_5[0] = temp0_5[0] * zmm3[0]
        temp0_5[0] = temp0_5[0] + temp0_5[0]
        zmm10[0] = zmm10[0] * temp0_5[0] * temp0_5[0]
        zmm3[0] = zmm3[0] - zmm10[0]
        temp0_5[0] = temp0_5[0] * zmm3[0]
        temp0_5[0] = temp0_5[0] + temp0_5[0]
        zmm11[0] = zmm11[0] * temp0_5[0]
        zmm10[0] = zmm10[0] * temp0_5[0]
        zmm9[0] = zmm9[0] * temp0_5[0]
    else
        zmm11 = data_143dbb1f8
        zmm10 = data_143dbb1fc
        zmm9 = data_143dbb200

var_a8[0] = zmm11[0]
bool cond:0 = zmm8[0] != 0f
var_a8[1] = zmm10[0]
var_a8[2] = zmm9[0]
int64_t result

if (cond:0 || zmm7[0] != 0f || not(zmm6[0] == 0f))
    zmm8[0] = zmm8[0] - zmm11[0]
    
    if (_mm_and_ps(zmm8, 0x7fffffff)[0] > 9.99999975e-05f)
    label_141ac89af:
        sub_140ad6660(&var_78, &var_98, &var_a8)
        
        if (sub_141acc640(&var_78, arg2).b == 0)
            result.b = 0
        else
            result.b = 1
    else
        zmm7[0] = zmm7[0] - zmm10[0]
        
        if (_mm_and_ps(zmm7, 0x7fffffff)[0] > 9.99999975e-05f)
            goto label_141ac89af
        
        zmm6[0] = zmm6[0] - zmm9[0]
        
        if (not(_mm_and_ps(zmm6, 0x7fffffff)[0] <= 9.99999975e-05f))
            goto label_141ac89af
        
        result.b = 0
else
    result.b = 0

return result
