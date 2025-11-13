// 函数: sub_1426fbf30
// 地址: 0x1426fbf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2

if (*(arg1 + 0x148) == 0)
    int32_t rax_3 = *(arg1 + 0x200)
    *arg2 = *(arg1 + 0x1f8)
    arg2[1].d = rax_3
else
    int32_t var_88
    void var_78
    sub_141e912d0(sub_14265a8f0(*(arg1 + 0x100), &var_78, *(arg1 + 0x1e0)), &var_88)
    int32_t var_98
    sub_141e912d0(arg1 + 0x148, &var_98)
    uint128_t zmm6_1
    zmm6_1.d = var_98.d f- var_88
    int32_t var_94
    int32_t var_84
    uint128_t zmm7_1
    zmm7_1.d = var_94.d f- var_84
    float var_90
    float var_80
    float zmm8_1 = var_90 - var_80
    uint128_t zmm0_1
    zmm0_1.d = zmm6_1.d f* zmm6_1.d
    int32_t var_a4_1 = zmm7_1.d
    uint128_t zmm2_1
    zmm2_1.d = zmm7_1.d f* zmm7_1.d
    zmm2_1.d = zmm2_1.d f+ zmm0_1.d
    zmm2_1.d = zmm2_1.d f+ zmm8_1 * zmm8_1
    
    if (not(zmm2_1.d f!= 1f))
        *result = zmm6_1.d.q
        result[1].d = zmm8_1
    else if (zmm2_1.d f>= 9.99999994e-09f)
        float zmm3_1 = zmm2_1.d
        uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1)
        zmm3_1 = zmm3_1 * 0.5f
        zmm0_1.d = zmm5_1.d f* zmm5_1.d
        zmm2_1.d = 0.5f - zmm3_1 f* zmm0_1.d
        zmm0_1.d = zmm5_1.d f* zmm2_1.d
        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
        zmm0_1.d = zmm5_1.d f* (0.5f - zmm3_1 * zmm5_1.d f* zmm5_1.d)
        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
        zmm6_1.d = zmm6_1.d f* zmm5_1.d
        zmm7_1.d = zmm7_1.d f* zmm5_1.d
        *result = zmm6_1.d
        *(result + 4) = zmm7_1.d
        result[1].d = zmm8_1 f* zmm5_1.d
    else
        int32_t rax_2 = data_143dbb200
        *result = data_143dbb1f8.q
        result[1].d = rax_2

return result
