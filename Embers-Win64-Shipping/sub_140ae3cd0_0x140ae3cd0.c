// 函数: sub_140ae3cd0
// 地址: 0x140ae3cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
uint128_t zmm8

if (arg4.d f<= 0f || arg3.d f<= 0f)
    uint128_t zmm7 = *(arg2 + 4)
    uint128_t zmm6 = *arg2
    zmm8 = *(arg2 + 8)
    arg3.d = zmm6.d f* zmm6.d
    zmm0.d = zmm7.d f* zmm7.d
    arg3.d = arg3.d f+ zmm0.d
    arg3.d = arg3.d f+ zmm8.d f* zmm8.d
    
    if (not(arg3.d f!= 1f))
        int32_t rax_7 = *(arg2 + 8)
        *arg1 = *arg2
        arg1[1].d = rax_7
    else if (arg3.d f>= 9.99999994e-09f)
        uint128_t zmm5 = _mm_rsqrt_ss(arg3.d, arg3.d)
        arg4.d = arg3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        arg3.d = 0.5f - arg4.d f* zmm0.d
        zmm0.d = zmm5.d f* arg3.d
        zmm5.d = zmm5.d f+ zmm0.d
        arg4.d = arg4.d f* zmm5.d f* zmm5.d
        zmm0.d = zmm5.d f* (0.5f f- arg4.d)
        zmm5.d = zmm5.d f+ zmm0.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm7.d = zmm7.d f* zmm5.d
        zmm8.d = zmm8.d f* zmm5.d
        *arg1 = zmm6.d
        *(arg1 + 4) = zmm7.d
        arg1[1].d = zmm8.d
    else
        int32_t rax_8 = data_143dbb200
        *arg1 = data_143dbb1f8.q
        arg1[1].d = rax_8
else
    zmm8.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000191753454f
    zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    zmm0.d = zmm0.d f+ zmm0.d
    zmm0.d = zmm0.d f- 1f
    
    if (not(zmm0.d f< -1f))
        _mm_min_ss(zmm0.d, 0x3f800000)
    
    float zmm0_1[0x4]
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    float zmm9_1[0x4]
    int32_t zmm10_1
    zmm0_1, zmm6_1, zmm7_1, zmm9_1, zmm10_1 = __libm_sse2_sincosf_(zmm8)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
    zmm0_1[0] = zmm0_1[0] / zmm6_1[0]
    temp0_4[0] = temp0_4[0] f/ zmm10_1
    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
    temp0_4[0] = temp0_4[0] * temp0_4[0]
    zmm0_1[0] = zmm0_1[0] + temp0_4[0]
    zmm9_1[0] = zmm9_1[0] / zmm0_1[0]
    float temp0_5[0x4] = _mm_sqrt_ss(0, zmm9_1[0])
    uint32_t zmm0_3[0x4]
    int512_t zmm7_2
    zmm0_3, zmm7_2 = sub_140a454f0(acosf(zmm7_1[0]), temp0_5)
    zmm7_2.o = zmm0_3
    uint32_t zmm0_4[0x4] = sub_140a3f4a0(*(arg2 + 4), *arg2)
    float zmm1_3[0x4] = *(arg2 + 4)
    float zmm2 = *arg2
    zmm1_3[0] = zmm1_3[0] * zmm1_3[0]
    zmm0_4[0] = zmm0_4[0] f* 57.2957764f
    uint32_t var_104_1 = zmm0_4[0]
    float zmm0_5
    float zmm6_2
    zmm0_5, zmm6_2 = sub_140a3f4a0(*(arg2 + 8), _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1_3[0]))
    int32_t var_100_1 = 0
    float var_108 = zmm0_5 * zmm6_2
    float var_98[0x10]
    float* rax_3
    uint128_t zmm6_3
    uint128_t zmm7_3
    uint128_t zmm8_1
    rax_3, zmm6_3, zmm7_3, zmm8_1 = sub_14077e760(&var_98, &var_108)
    zmm7_3.d = zmm7_3.d f* zmm6_3.d
    uint128_t zmm2_1 = *rax_3
    float zmm3[0x4] = *(rax_3 + 0x10)
    int32_t var_e8 = zmm2_1.d
    int32_t var_e4_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    uint128_t zmm0_6 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float var_f8 = zmm3[0]
    int32_t var_e0_1 = zmm2_1.d
    float var_f0_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
    int32_t var_f4_1 = zmm0_6.d
    sub_140adf070(arg2, &var_108, zmm7_3, &var_f8)
    zmm8_1.d = zmm8_1.d f* zmm6_3.d
    int32_t* rax_4
    float zmm9_2
    rax_4, zmm9_2 = sub_140adf070(&var_108, &var_f8, zmm8_1, &var_e8)
    uint128_t zmm0_7 = zx.o(*rax_4)
    int32_t rax_5 = rax_4[2]
    var_108.q = zmm0_7.q
    uint128_t zmm7_4 = var_108
    zmm6_3 = _mm_shuffle_ps(zmm0_7, zmm0_7, 0x55)
    zmm0_7.d = zmm7_4.d f* zmm7_4.d
    zmm8_1 = rax_5
    uint128_t zmm2_3
    zmm2_3.d = zmm6_3.d f* zmm6_3.d
    zmm2_3.d = zmm2_3.d f+ zmm0_7.d
    zmm2_3.d = zmm2_3.d f+ zmm8_1.d f* zmm8_1.d
    
    if (zmm2_3.d f== zmm9_2)
        goto label_140ae3f89
    
    int32_t var_100_3
    
    if (zmm2_3.d f>= 9.99999994e-09f)
        float zmm3_1[0x4] = zx.o(0)
        zmm3_1[0] = zmm2_3.d
        float temp0_12[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * 0.5f
        zmm0_7.d = temp0_12.d f* temp0_12[0]
        zmm2_3.d = 0.5f - zmm3_1[0] f* zmm0_7.d
        zmm0_7.d = temp0_12.d f* zmm2_3.d
        temp0_12[0] = temp0_12[0] f+ zmm0_7.d
        zmm3_1[0] = zmm3_1[0] * temp0_12[0] * temp0_12[0]
        zmm0_7.d = temp0_12.d f* (0.5f - zmm3_1[0])
        temp0_12[0] = temp0_12[0] f+ zmm0_7.d
        zmm7_4.d = zmm7_4.d f* temp0_12[0]
        zmm6_3.d = zmm6_3.d f* temp0_12[0]
        zmm8_1.d = zmm8_1.d f* temp0_12[0]
    label_140ae3f89:
        var_100_3 = zmm8_1.d
        int32_t var_104_3 = zmm6_3.d
        var_108 = zmm7_4.d
    else
        float zmm1_4 = data_143dbb1fc
        var_108 = data_143dbb1f8.d
        var_100_3 = data_143dbb200.d
        float var_104_2 = zmm1_4
    
    *arg1 = var_108.q
    arg1[1].d = var_100_3
return arg1
