// 函数: sub_1420cfeb0
// 地址: 0x1420cfeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4[0] <= 0f || arg3[0] <= 0f)
    float zmm7[0x4] = *(arg2 + 4)
    float zmm6[0x4] = *arg2
    int128_t zmm8 = *(arg2 + 8)
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm6[0] = zmm6[0] + zmm7[0]
    zmm6[0] = zmm6[0] + zmm8.d f* zmm8.d
    
    if (not(zmm6[0] != 1f))
        int32_t rax_13 = *(arg2 + 8)
        *arg1 = *arg2
        arg1[1].d = rax_13
    else if (zmm6[0] >= 9.99999994e-09f)
        float temp0_6[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
        arg3 = 0x3f000000
        zmm6[0] = zmm6[0] * 0.5f
        temp0_6[0] = temp0_6[0] * temp0_6[0]
        arg3[0] = 0.5f - zmm6[0] * temp0_6[0]
        temp0_6[0] = temp0_6[0] * arg3[0]
        temp0_6[0] = temp0_6[0] + temp0_6[0]
        zmm6[0] = zmm6[0] * temp0_6[0] * temp0_6[0]
        temp0_6[0] = temp0_6[0] * (0.5f - zmm6[0])
        temp0_6[0] = temp0_6[0] + temp0_6[0]
        zmm6[0] = zmm6[0] * temp0_6[0]
        zmm7[0] = zmm7[0] * temp0_6[0]
        zmm8.d = zmm8.d f* temp0_6[0]
        *arg1 = zmm6[0]
        *(arg1 + 4) = zmm7[0]
        arg1[1].d = zmm8.d
    else
        int32_t rax_14 = data_143dbb200
        *arg1 = data_143dbb1f8.q
        arg1[1].d = rax_14
else
    int32_t rdx_1 = *(arg5 + 4) * 0xbb38435 + 0x3619636b
    float zmm9[0x4] = rdx_1 u>> 9 | 0x3f800000
    zmm9[0] = zmm9[0] - 1f
    zmm9[0] = zmm9[0] * 6.28318548f
    *(arg5 + 4) = rdx_1 * 0xbb38435 + 0x3619636b
    float zmm0[0x4] = (rdx_1 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
    zmm0[0] = zmm0[0] - 1f
    zmm0[0] = zmm0[0] + zmm0[0]
    zmm0[0] = zmm0[0] - 1f
    
    if (not(zmm0[0] < -1f))
        _mm_min_ss(zmm0[0], 0x3f800000)
    
    float zmm0_1[0x4]
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    int32_t zmm10_1
    zmm0_1, zmm6_1, zmm7_1, zmm8_1, zmm10_1 = __libm_sse2_sincosf_(zmm9)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
    zmm0_1[0] = zmm0_1[0] / zmm6_1[0]
    temp0_2[0] = temp0_2[0] f/ zmm10_1
    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm0_1[0] = zmm0_1[0] + temp0_2[0]
    zmm8_1[0] = zmm8_1[0] / zmm0_1[0]
    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm8_1[0])
    int128_t zmm0_3
    int512_t zmm7_2
    zmm0_3, zmm7_2 = sub_140a454f0(acosf(zmm7_1[0]), temp0_3)
    zmm7_2.o = zmm0_3
    void var_e8
    float var_98[0x10]
    float* rax_9 = sub_14077e760(&var_98, sub_140adf3c0(arg2, &var_e8))
    int128_t zmm2 = *(rax_9 + 0x10)
    int128_t zmm0_4 = *(rax_9 + 0x30)
    int128_t var_d8 = *rax_9
    int128_t var_c8_1 = zmm2
    int128_t var_b8_1 = *(rax_9 + 0x20)
    int128_t var_a8_1 = zmm0_4
    sub_140a04880(&var_d8, &var_e8, 1)
    void var_f8
    uint128_t zmm7_3
    int32_t zmm8_2
    zmm7_3, zmm8_2 = sub_140a04880(&var_d8, &var_f8, 2)
    zmm7_3.d = zmm7_3.d f* 57.2957764f
    uint64_t var_108
    uint128_t zmm9_1
    zmm9_1.d = sub_140adf070(arg2, &var_108, zmm7_3, &var_f8).d f* 57.2957764f
    int32_t* rax_10 = sub_140adf070(&var_108, &var_f8, zmm9_1, &var_e8)
    uint128_t zmm0_5 = zx.o(*rax_10)
    float rax_11 = rax_10[2]
    var_108 = zmm0_5.q
    uint128_t zmm7_4 = var_108.d
    uint128_t zmm6_2 = _mm_shuffle_ps(zmm0_5, zmm0_5, 0x55)
    zmm0_5.d = zmm7_4.d f* zmm7_4.d
    uint128_t zmm2_3
    zmm2_3.d = zmm6_2.d f* zmm6_2.d
    zmm2_3.d = zmm2_3.d f+ zmm0_5.d
    zmm2_3.d = zmm2_3.d f+ rax_11 * rax_11
    float var_100_2
    
    if (zmm2_3.d f!= zmm8_2)
        float zmm1_3
        
        if (zmm2_3.d f>= 9.99999994e-09f)
            float zmm3[0x4] = zx.o(0)
            zmm3[0] = zmm2_3.d
            float temp0_5[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            zmm0_5.d = temp0_5.d f* temp0_5[0]
            zmm2_3.d = 0.5f - zmm3[0] f* zmm0_5.d
            zmm0_5.d = temp0_5.d f* zmm2_3.d
            temp0_5[0] = temp0_5[0] f+ zmm0_5.d
            zmm3[0] = zmm3[0] * temp0_5[0] * temp0_5[0]
            zmm0_5.d = temp0_5.d f* (0.5f - zmm3[0])
            temp0_5[0] = temp0_5[0] f+ zmm0_5.d
            zmm1_3 = temp0_5[0]
            zmm0_5.d = temp0_5.d f* zmm7_4.d
            temp0_5[0] = temp0_5[0] * rax_11
            var_108.d = zmm0_5.d
            zmm1_3 = zmm1_3 f* zmm6_2.d
            var_100_2 = temp0_5[0]
        else
            zmm1_3 = data_143dbb1fc
            var_108.d = data_143dbb1f8.d
            var_100_2 = data_143dbb200.d
        
        var_108:4.d = zmm1_3
    else
        var_108.d = zmm7_4.d
        var_108:4.d = zmm6_2.d
        var_100_2 = rax_11
    
    *arg1 = var_108
    arg1[1].d = var_100_2

return arg1
