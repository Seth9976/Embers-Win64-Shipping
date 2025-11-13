// 函数: sub_1426ed060
// 地址: 0x1426ed060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = 0x3f800000
int32_t var_54 = 0
uint8_t result
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
result, zmm6, zmm7, zmm8 = sub_1426cd370(arg1, arg2, &var_58)

if (result != 0)
    uint128_t zmm0_1 = zx.o(*arg3)
    uint128_t var_18_1 = zmm6
    uint128_t var_28_1 = zmm7
    uint128_t var_38_1 = zmm8
    zmm8 = var_58
    zmm7 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    uint128_t zmm9 = var_54
    var_58.q = zmm0_1.q
    zmm6 = var_58
    uint128_t zmm1_1
    zmm1_1.d = zmm7.d f* zmm7.d
    zmm0_1.d = zmm6.d f* zmm6.d
    zmm1_1.d = zmm1_1.d f+ zmm0_1.d
    uint128_t zmm3_1
    
    if (not(zmm1_1.d f<= 9.99999994e-09f))
        float zmm5_1[0x4] = 0x3f000000
        zmm3_1.d = zmm1_1.d
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1.d)
        zmm3_1.d = zmm3_1.d f* 0.5f
        zmm0_1.d = temp0_2.d f* temp0_2[0]
        zmm1_1.d = zmm3_1.d f* zmm0_1.d
        zmm0_1.d = temp0_2.d f* (0.5f f- zmm1_1.d)
        temp0_2[0] = temp0_2[0] f+ zmm0_1.d
        zmm1_1.d = temp0_2.d f* temp0_2[0]
        zmm3_1.d = zmm3_1.d f* zmm1_1.d
        zmm5_1[0] = 0.5f f- zmm3_1.d
        zmm0_1.d = temp0_2.d f* zmm5_1[0]
        temp0_2[0] = temp0_2[0] f+ zmm0_1.d
        zmm6.d = zmm6.d f* temp0_2[0]
        zmm7.d = zmm7.d f* temp0_2[0]
    
    zmm1_1.d = zmm9.d f* zmm9.d
    zmm0_1.d = zmm8.d f* zmm8.d
    zmm1_1.d = zmm1_1.d f+ zmm0_1.d
    
    if (not(zmm1_1.d f<= 9.99999994e-09f))
        float zmm4_1[0x4] = 0x3f000000
        float temp0_3[0x4] = _mm_rsqrt_ss(zmm1_1[0], zmm1_1.d)
        zmm3_1.d = zmm1_1.d f* 0.5f
        zmm0_1.d = temp0_3.d f* temp0_3[0]
        zmm1_1.d = zmm3_1.d f* zmm0_1.d
        zmm0_1.d = temp0_3.d f* (0.5f f- zmm1_1.d)
        temp0_3[0] = temp0_3[0] f+ zmm0_1.d
        zmm1_1.d = temp0_3.d f* temp0_3[0]
        zmm3_1.d = zmm3_1.d f* zmm1_1.d
        zmm4_1[0] = 0.5f f- zmm3_1.d
        zmm0_1.d = temp0_3.d f* zmm4_1[0]
        temp0_3[0] = temp0_3[0] f+ zmm0_1.d
        zmm8.d = zmm8.d f* temp0_3[0]
        zmm9.d = zmm9.d f* temp0_3[0]
    
    zmm0_1 = *(arg1 + 0xc4)
    zmm7.d = zmm7.d f* zmm9.d
    zmm6.d = zmm6.d f* zmm8.d
    zmm6.d = zmm6.d f+ zmm7.d
    
    if (zmm6.d f< zmm0_1.d)
        result = sub_1426bd0c0(arg2, arg1)
    else
        result = (*(arg1 + 0x60) u>> 7).b
        
        if ((result & 1) != 0 && not(zmm6.d f<= zmm0_1.d))
            result = sub_1426bd0c0(arg2, arg1)

return result
