// 函数: sub_1420cfaf0
// 地址: 0x1420cfaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = arg2
uint64_t* result = arg1
float zmm8[0x4]

if (arg3[0] <= 0f)
    float zmm7[0x4] = (*arg2)[1]
    float zmm6[0x4] = *arg2
    zmm8 = (*arg2)[2]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm6[0] = zmm6[0] + zmm7[0]
    zmm6[0] = zmm6[0] + zmm8[0]
    
    if (not(zmm6[0] != 1f))
        float rax_13 = (*arg2)[2]
        *arg1 = *arg2
        arg1[2] = rax_13
    else if (zmm6[0] >= 9.99999994e-09f)
        float temp0_4[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
        arg3 = 0x3f000000
        zmm6[0] = zmm6[0] * 0.5f
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        zmm6[0] = zmm6[0] * temp0_4[0]
        arg3[0] = 0.5f - zmm6[0]
        temp0_4[0] = temp0_4[0] * arg3[0]
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        zmm6[0] = zmm6[0] * temp0_4[0]
        temp0_4[0] = temp0_4[0] * (0.5f - zmm6[0])
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        zmm6[0] = zmm6[0] * temp0_4[0]
        zmm7[0] = zmm7[0] * temp0_4[0]
        zmm8[0] = zmm8[0] * temp0_4[0]
        *arg1 = zmm6[0]
        arg1[1] = zmm7[0]
        arg1[2] = zmm8[0]
    else
        int32_t rax_14 = data_143dbb200
        *arg1 = data_143dbb1f8.q
        arg1[2] = rax_14
else
    float zmm1[0x4] = 0xbf800000
    int32_t r8_2 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
    zmm8 = r8_2 u>> 9 | 0x3f800000
    zmm8[0] = zmm8[0] - 1f
    *(arg4 + 4) = r8_2 * 0xbb38435 + 0x3619636b
    float zmm0[0x4] = (r8_2 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
    zmm0[0] = zmm0[0] - 1f
    zmm0[0] = zmm0[0] + zmm0[0]
    zmm0[0] = zmm0[0] - 1f
    
    if (not(zmm0[0] < -1f))
        zmm1 = _mm_min_ss(zmm0[0], 0x3f800000)
    
    int128_t zmm0_2
    int512_t zmm6_1
    zmm0_2, zmm6_1 = sub_140a454f0(acosf(zmm1[0]), arg3)
    zmm6_1.o = zmm0_2
    void var_d8
    float var_88[0x10]
    float* rax_9 = sub_14077e760(&var_88, sub_140adf3c0(rdi, &var_d8))
    int128_t zmm2 = *(rax_9 + 0x10)
    int128_t zmm0_3 = *(rax_9 + 0x30)
    int128_t var_c8 = *rax_9
    int128_t var_b8_1 = zmm2
    int128_t var_a8_1 = *(rax_9 + 0x20)
    int128_t var_98_1 = zmm0_3
    sub_140a04880(&var_c8, &var_d8, 1)
    void var_e8
    uint128_t zmm6_2
    uint128_t zmm8_1
    zmm6_2, zmm8_1 = sub_140a04880(&var_c8, &var_e8, 2)
    zmm6_2.d = zmm6_2.d f* 57.2957764f
    uint64_t var_f8
    sub_140adf070(rdi, &var_f8, zmm6_2, &var_e8)
    zmm8_1.d = zmm8_1.d f* 360f
    int32_t* rax_10
    int32_t zmm7_1
    rax_10, zmm7_1 = sub_140adf070(&var_f8, &var_e8, zmm8_1, &var_d8)
    uint128_t zmm0_4 = zx.o(*rax_10)
    float rax_11 = rax_10[2]
    var_f8 = zmm0_4.q
    zmm8_1 = var_f8.d
    zmm6_2 = _mm_shuffle_ps(zmm0_4, zmm0_4, 0x55)
    zmm0_4.d = zmm8_1.d f* zmm8_1.d
    uint128_t zmm2_3
    zmm2_3.d = zmm6_2.d f* zmm6_2.d
    zmm2_3.d = zmm2_3.d f+ zmm0_4.d
    zmm2_3.d = zmm2_3.d f+ rax_11 * rax_11
    float var_f0_2
    
    if (zmm2_3.d f!= zmm7_1)
        float zmm1_2
        
        if (zmm2_3.d f>= 9.99999994e-09f)
            float zmm3_1[0x4] = zx.o(0)
            zmm3_1[0] = zmm2_3.d
            float temp0_3[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0_4.d = temp0_3.d f* temp0_3[0]
            zmm2_3.d = 0.5f - zmm3_1[0] f* zmm0_4.d
            zmm0_4.d = temp0_3.d f* zmm2_3.d
            temp0_3[0] = temp0_3[0] f+ zmm0_4.d
            zmm3_1[0] = zmm3_1[0] * temp0_3[0] * temp0_3[0]
            zmm0_4.d = temp0_3.d f* (0.5f - zmm3_1[0])
            temp0_3[0] = temp0_3[0] f+ zmm0_4.d
            zmm1_2 = temp0_3[0]
            zmm0_4.d = temp0_3.d f* zmm8_1.d
            temp0_3[0] = temp0_3[0] * rax_11
            var_f8.d = zmm0_4.d
            zmm1_2 = zmm1_2 f* zmm6_2.d
            var_f0_2 = temp0_3[0]
        else
            zmm1_2 = data_143dbb1fc
            var_f8.d = data_143dbb1f8.d
            var_f0_2 = data_143dbb200.d
        
        var_f8:4.d = zmm1_2
    else
        var_f8.d = zmm8_1.d
        var_f8:4.d = zmm6_2.d
        var_f0_2 = rax_11
    
    *result = var_f8
    result[1].d = var_f0_2
return result
