// 函数: sub_140ae3940
// 地址: 0x140ae3940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = arg2
uint128_t zmm0
uint128_t zmm1

if (arg3.d f<= 0f)
    uint128_t zmm7 = *(arg2 + 4)
    uint128_t zmm6 = *arg2
    uint128_t zmm8 = *(arg2 + 8)
    arg3.d = zmm6.d f* zmm6.d
    zmm0.d = zmm7.d f* zmm7.d
    zmm1.d = zmm8.d f* zmm8.d
    arg3.d = arg3.d f+ zmm0.d
    arg3.d = arg3.d f+ zmm1.d
    
    if (not(arg3.d f!= 1f))
        int32_t rax_7 = *(arg2 + 8)
        *arg1 = *arg2
        arg1[1].d = rax_7
    else if (arg3.d f>= 9.99999994e-09f)
        uint128_t zmm5 = _mm_rsqrt_ss(arg3.d, arg3.d)
        uint128_t zmm3
        zmm3.d = arg3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        arg3.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* arg3.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
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
    _mm_cvtepi32_ps(zx.o(rand()))
    zmm1 = 0xbf800000
    zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    zmm0.d = zmm0.d f+ zmm0.d
    zmm0.d = zmm0.d f- 1f
    
    if (not(zmm0.d f< -1f))
        zmm1 = __minss_xmmss_memss(zmm0.d, 0x3f800000)
    
    uint32_t zmm0_2[0x4]
    int512_t zmm7_1
    zmm0_2, zmm7_1 = sub_140a454f0(acosf(zmm1.d), arg3)
    zmm7_1.o = zmm0_2
    uint32_t zmm0_3[0x4] = sub_140a3f4a0(*(rdi + 4), *rdi)
    float zmm1_2[0x4] = *(rdi + 4)
    float zmm2 = *rdi
    zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
    zmm0_3[0] = zmm0_3[0] f* 57.2957764f
    uint32_t var_e4_1 = zmm0_3[0]
    float zmm0_4
    float zmm6_1
    zmm0_4, zmm6_1 = sub_140a3f4a0(*(rdi + 8), _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1_2[0]))
    int32_t var_e0_1 = 0
    float var_e8 = zmm0_4 * zmm6_1
    float var_78[0x6]
    float* rax_3
    uint128_t zmm6_2
    uint128_t zmm7_2
    uint128_t zmm8_1
    rax_3, zmm6_2, zmm7_2, zmm8_1 = sub_14077e760(&var_78, &var_e8)
    zmm7_2.d = zmm7_2.d f* zmm6_2.d
    uint128_t zmm2_1 = *rax_3
    float zmm3_1[0x4] = *(rax_3 + 0x10)
    int32_t var_c8 = zmm2_1.d
    int32_t var_c4_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    uint128_t zmm0_5 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
    float var_d8 = zmm3_1[0]
    int32_t var_c0_1 = zmm2_1.d
    float var_d0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)[0]
    int32_t var_d4_1 = zmm0_5.d
    sub_140adf070(rdi, &var_e8, zmm7_2, &var_d8)
    zmm8_1.d = zmm8_1.d f* 0.0109866634f
    int32_t* rax_4 = sub_140adf070(&var_e8, &var_d8, zmm8_1, &var_c8)
    uint128_t zmm0_6 = zx.o(*rax_4)
    int32_t rax_5 = rax_4[2]
    var_e8.q = zmm0_6.q
    uint128_t zmm7_3 = var_e8
    zmm6_2 = _mm_shuffle_ps(zmm0_6, zmm0_6, 0x55)
    zmm0_6.d = zmm7_3.d f* zmm7_3.d
    zmm8_1 = rax_5
    uint128_t zmm2_3
    zmm2_3.d = zmm6_2.d f* zmm6_2.d
    zmm2_3.d = zmm2_3.d f+ zmm0_6.d
    zmm2_3.d = zmm2_3.d f+ zmm8_1.d f* zmm8_1.d
    
    if (zmm2_3.d f== 1f)
        goto label_140ae3b96
    
    int32_t var_e0_3
    
    if (zmm2_3.d f>= 9.99999994e-09f)
        float zmm3_2[0x4] = zx.o(0)
        zmm3_2[0] = zmm2_3.d
        float temp0_10[0x4] = _mm_rsqrt_ss(zmm3_2[0], zmm3_2[0])
        zmm3_2[0] = zmm3_2[0] * 0.5f
        zmm0_6.d = temp0_10.d f* temp0_10[0]
        zmm2_3.d = 0.5f - zmm3_2[0] f* zmm0_6.d
        zmm0_6.d = temp0_10.d f* zmm2_3.d
        temp0_10[0] = temp0_10[0] f+ zmm0_6.d
        zmm3_2[0] = zmm3_2[0] * temp0_10[0] * temp0_10[0]
        zmm0_6.d = temp0_10.d f* (0.5f - zmm3_2[0])
        temp0_10[0] = temp0_10[0] f+ zmm0_6.d
        zmm7_3.d = zmm7_3.d f* temp0_10[0]
        zmm6_2.d = zmm6_2.d f* temp0_10[0]
        zmm8_1.d = zmm8_1.d f* temp0_10[0]
    label_140ae3b96:
        var_e0_3 = zmm8_1.d
        int32_t var_e4_3 = zmm6_2.d
        var_e8 = zmm7_3.d
    else
        float zmm1_3 = data_143dbb1fc
        var_e8 = data_143dbb1f8.d
        var_e0_3 = data_143dbb200.d
        float var_e4_2 = zmm1_3
    
    *arg1 = var_e8.q
    arg1[1].d = var_e0_3
return arg1
