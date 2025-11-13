// 函数: sub_1417134e0
// 地址: 0x1417134e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
float zmm3 = *(arg4 + 8) f- arg3[2]
float zmm5 = *(arg4 + 4) f- arg3[1]
uint128_t zmm2
zmm2.d = (*(arg5 + 8)).d f- arg3[2]
uint128_t zmm4
zmm4.d = (*arg5).d f- *arg3
float zmm6[0x4] = *arg4
zmm6[0] = zmm6[0] f- *arg3
float zmm7[0x4] = *(arg5 + 4)
zmm7[0] = zmm7[0] f- arg3[1]
float zmm8[0x4] = zmm2
zmm2.d = zmm2.d f* zmm6[0]
uint128_t zmm12
zmm12.d = zmm4.d f* zmm3
zmm7[0] = zmm7[0] * zmm3
zmm12.d = zmm12.d f- zmm2.d
zmm8[0] = zmm8[0] * zmm5
zmm7[0] = zmm7[0] * zmm6[0]
zmm8[0] = zmm8[0] - zmm7[0]
zmm4.d = zmm4.d f* zmm5
zmm2.d = zmm12.d f* zmm12.d
zmm7[0] = zmm7[0] f- zmm4.d
zmm8[0] = zmm8[0] * zmm8[0]
zmm2.d = zmm2.d f+ zmm8[0]
uint128_t zmm1
zmm1.d = zmm7.d f* zmm7[0]
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f< 9.99999975e-05f))
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm2.d)
    uint128_t zmm10
    zmm10.d = 1f / temp0_1[0]
    uint128_t zmm11
    zmm11.d = zmm10.d f* zmm8[0]
    uint128_t zmm9
    zmm9.d = zmm10.d f* zmm12.d
    zmm10.d = zmm10.d f* zmm7[0]
    
    if (not(temp0_1[0] <= 9.99999975e-05f))
        zmm1 = zx.o(*arg3)
        int32_t rax = arg3[2]
        float zmm0[0x4] = zmm1
        float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        int64_t* rax_1 = *arg1
        zmm7 = *(rax_1 + 4)
        zmm6 = *rax_1
        zmm8 = rax_1[1].d
        zmm3 = zmm7[0] - temp0_2[0]
        zmm6[0] = zmm6[0] f- zmm1.d
        zmm6[0] = zmm6[0] f* zmm11.d
        zmm3 = zmm3 f* zmm9.d + zmm6[0]
        zmm8[0] = zmm8[0] f- rax
        zmm8[0] = zmm8[0] f* zmm10.d
        zmm3 = zmm3 + zmm8[0]
        zmm1.d = zmm11.d f* zmm3
        zmm2.d = zmm9.d f* zmm3
        zmm6[0] = zmm6[0] f- zmm1.d
        zmm1.d = zmm10.d f* zmm3
        float var_c8 = zmm6[0]
        zmm7[0] = zmm7[0] f- zmm2.d
        float var_c4_1 = zmm7[0]
        zmm8[0] = zmm8[0] f- zmm1.d
        float var_c0_1 = zmm8[0]
        float var_b8
        float zmm6_1
        float zmm7_1
        float zmm8_1
        float zmm9_1
        float zmm10_1
        float zmm11_1
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1 =
            sub_1415c64e0(&var_b8, &var_c8, arg3, arg4, arg5, rax_1)
        float zmm1_1 = var_b8 - zmm6_1
        float var_b4
        float zmm2_1 = var_b4 - zmm7_1
        result = arg1[1]
        float var_b0
        float zmm0_1 = var_b0 - zmm8_1
        
        if (not(zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1 f>= *result))
            float* rax_2 = arg1[2]
            result = arg1[3]
            zmm9_1 = zmm9_1 * rax_2[1] + zmm11_1 * *rax_2 + zmm10_1 * rax_2[2]
            
            if (not(zmm9_1 f>= *result))
                *result = zmm9_1
                result = arg1[4]
                *result = arg2

return result
