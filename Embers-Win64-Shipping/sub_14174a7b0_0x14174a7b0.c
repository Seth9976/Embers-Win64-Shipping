// 函数: sub_14174a7b0
// 地址: 0x14174a7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *(arg1 + 0x38)
float zmm6[0x4] = *(arg1 + 0x34)
zmm6[0] = zmm6[0] f* *arg3
zmm6[0] = zmm6[0] f* *arg2
zmm4[0] = zmm4[0] f* arg3[1]
zmm4[0] = zmm4[0] f* arg2[1]
float zmm10[0x4] = arg4
arg4 = *(arg1 + 0x3c)
zmm4[0] = zmm4[0] * zmm4[0]
arg4[0] = arg4[0] f* arg3[2]
int128_t zmm11
int128_t var_68 = zmm11
int128_t zmm13
int128_t var_88 = zmm13
float zmm1 = arg4[0]
arg4[0] = arg4[0] f* arg2[2]
zmm6[0] = zmm6[0] * zmm6[0]
zmm1 = zmm1 * arg4[0]
zmm4[0] = zmm4[0] + zmm6[0]
zmm4[0] = zmm4[0] + zmm1
float temp0[0x4] = _mm_sqrt_ss(0, zmm4[0])
void* const* result

if (temp0[0] <= 1.17549435e-38f)
    result.b = 0
else
    float zmm0[0x4] = data_142d3f660
    zmm6[0] = zmm6[0] * arg5
    void* rcx = *(arg1 + 0x10)
    zmm13.d = 1f / temp0[0]
    int32_t var_f0_1 = 0
    int32_t var_d0_1 = 0x1010000
    char var_cc_1 = 1
    int64_t var_118 = 0x3f800000
    int32_t var_110_1 = 0
    zmm6[0] = zmm6[0] f+ *(arg1 + 0x40)
    *arg9 = 0xffffffff
    arg4[0] = arg4[0] f* zmm13.d
    void** const var_d8 = &data_142fc46f0
    float var_e0_1 = arg4[0]
    int32_t var_c0_1 = var_f0_1
    float temp0_3[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, arg4[0].q), _mm_unpacklo_ps(zmm4, 0)[0].q)
    float zmm2[0x4] = data_14399f66c
    float var_a8_1[0x4] = temp0_3
    arg4 = data_14399f668
    float var_b8[0x4] = zmm0
    float temp0_4[0x4] = _mm_unpacklo_ps(arg4, data_14399f670[0].q)
    zmm6[0] = zmm6[0] f* zmm13.d
    zmm4[0] = zmm4[0] f* zmm13.d
    float temp0_5[0x4] = _mm_unpacklo_ps(zmm2, 0)
    float temp0_6[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
    float temp0_7[0x4] = _mm_unpacklo_ps(temp0_4, temp0_5[0].q)
    temp0[0] = temp0[0] * zmm10[0]
    int64_t var_c8_1 = temp0_6.q
    float var_e8 = zmm6[0]
    float var_e4_1 = zmm4[0]
    float var_bc_1 = zmm6[0]
    float var_98_1[0x4] = temp0_7
    int32_t var_108
    int32_t var_f8
    int32_t zmm10_1
    result, zmm10_1, zmm11, zmm13 = sub_14167f140(rcx, &var_d8, &var_b8, &var_e8, temp0[0], &arg5, 
        &var_108, &var_f8, 0, &var_118, 0)
    
    if (result.b == 0)
        result.b = 0
    else
        float zmm6_1 = arg5 f* zmm13.d
        
        if (zmm6_1 f>= zmm10_1 || zmm6_1 f== zmm11.d)
            result.b = 0
        else
            float zmm1_1[0x4] = var_108
            zmm1_1[0] = zmm1_1[0] f* *(arg1 + 0x28)
            int32_t var_100
            uint128_t zmm0_1
            zmm0_1.d = var_100.d f* *(arg1 + 0x30)
            int32_t var_104
            uint128_t zmm2_1
            zmm2_1.d = var_104.d f* *(arg1 + 0x2c)
            uint128_t zmm7_1 = var_f8
            float zmm9_1[0x4] = var_f0_1
            *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
            arg7[1].d = zmm0_1.d
            zmm7_1.d = zmm7_1.d f* *(arg1 + 0x34)
            int32_t var_f4
            uint128_t zmm8_1
            zmm8_1.d = var_f4.d f* *(arg1 + 0x38)
            zmm9_1[0] = zmm9_1[0] f* *(arg1 + 0x3c)
            zmm0_1.d = zmm7_1.d f* zmm7_1.d
            zmm2_1.d = zmm8_1.d f* zmm8_1.d
            zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm9_1[0]
            
            if (zmm2_1.d f== 1f)
                goto label_14174aae2
            
            float var_110_2
            
            if (zmm2_1.d f>= 9.99999994e-09f)
                uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                uint128_t zmm3
                zmm3.d = zmm2_1.d f* 0.5f
                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                zmm1_1 = zmm3
                zmm1_1[0] = zmm1_1[0] f* zmm0_1.d
                zmm2_1.d = 0.5f - zmm1_1[0]
                zmm0_1.d = zmm5_1.d f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm1_1 = zmm5_1
                zmm1_1[0] = zmm1_1[0] f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm1_1[0]
                zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3.d)
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm7_1.d = zmm7_1.d f* zmm5_1.d
                zmm8_1.d = zmm8_1.d f* zmm5_1.d
                zmm9_1[0] = zmm9_1[0] f* zmm5_1.d
            label_14174aae2:
                var_110_2 = zmm9_1[0]
                var_118:4.d = zmm8_1.d
                var_118.d = zmm7_1.d
            else
                var_118.d = data_143dbb1f8.d
                var_110_2 = data_143dbb200.d
                var_118:4.d = data_143dbb1fc[0]
            
            *arg8 = var_118
            arg8[1].d = var_110_2
            *arg6 = zmm6_1
            result.b = 1

return result
