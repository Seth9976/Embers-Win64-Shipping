// 函数: sub_141e15930
// 地址: 0x141e15930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_10 = arg2.d
uint128_t zmm6
uint128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7
uint128_t zmm8
uint128_t var_58 = zmm8
uint128_t zmm9
uint128_t var_68 = zmm9
uint128_t zmm10 = 0x80000000
uint128_t zmm11
uint128_t var_88 = zmm11
uint128_t zmm12
uint128_t var_98 = zmm12
uint128_t result_3
uint128_t result_4 = result_3
uint128_t zmm15 = arg2
uint64_t var_118
uint64_t var_e8
float var_e0
uint64_t var_d8
uint128_t zmm0
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5

if (arg1[0xa].b != 0)
    int32_t* rsi_1 = *arg1
    int32_t* rax
    
    if (rsi_1 == 0)
        int32_t var_d0_1 = arg1[7].d
        rax = &var_d8
        var_d8 = arg1[6]
    else
        rax, zmm10 = sub_141e13530(rsi_1, &var_d8, &arg1[6])
    
    int32_t* rdi_1 = arg1[1]
    int32_t rax_2 = rax[2]
    uint64_t var_108_1 = *rax
    int32_t* rax_3
    
    if (rdi_1 == 0)
        int32_t var_d0_2 = *(arg1 + 0x44)
        rax_3 = &var_d8
        var_d8 = *(arg1 + 0x3c)
    else
        rax_3, zmm10 = sub_141e13530(rdi_1, &var_d8, arg1 + 0x3c)
    
    int32_t rax_5 = rax_3[2]
    var_118 = *rax_3
    zmm0 = zx.o(arg1[6])
    int32_t rax_6 = arg1[7].d
    uint64_t* rax_7
    
    if (rsi_1 == 0)
        int32_t var_d0_3 = rax_6
        rax_7 = &var_d8
        var_d8 = zmm0.q
    else
        zmm12 = rsi_1[5]
        zmm9 = rsi_1[6]
        arg2 = zmm12
        result_3 = rsi_1[4]
        zmm5 = rsi_1[7]
        var_e8 = zmm0.q
        zmm4 = var_e8.d
        zmm11 = rax_6
        rax_7 = &var_e8
        zmm7.d = zmm4.d f* zmm9.d
        zmm10.d = zmm11.d f* zmm12.d
        zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm0.d = zmm8.d f* zmm9.d
        zmm6.d = zmm8.d f* result_3.d
        zmm10.d = zmm10.d f- zmm0.d
        zmm0.d = zmm11.d f* result_3.d
        zmm7.d = zmm7.d f- zmm0.d
        zmm0.d = zmm4.d f* zmm12.d
        zmm10.d = zmm10.d f+ zmm10.d
        zmm6.d = zmm6.d f- zmm0.d
        zmm0 = zmm9
        zmm7.d = zmm7.d f+ zmm7.d
        zmm9.d = zmm9.d f* zmm10.d
        zmm2.d = zmm5.d f* zmm10.d
        zmm6.d = zmm6.d f+ zmm6.d
        zmm12.d = zmm12.d f* zmm10.d
        zmm10 = 0x80000000
        zmm2.d = zmm2.d f+ zmm4.d
        zmm3.d = zmm5.d f* zmm7.d
        arg2.d = arg2.d f* zmm6.d
        zmm5.d = zmm5.d f* zmm6.d
        zmm3.d = zmm3.d f+ zmm8.d
        zmm6.d = zmm6.d f* result_3.d
        result_3.d = result_3.d f* zmm7.d
        zmm5.d = zmm5.d f+ zmm11.d
        zmm0.d = zmm0.d f* zmm7.d
        zmm9.d = zmm9.d f- zmm6.d
        result_3.d = result_3.d f- zmm12.d
        arg2.d = arg2.d f- zmm0.d
        zmm9.d = zmm9.d f+ zmm3.d
        result_3.d = result_3.d f+ zmm5.d
        arg2.d = arg2.d f+ zmm2.d
        var_e8:4.d = zmm9.d
        int32_t var_e0_2 = result_3.d
        var_e8.d = arg2.d
    
    int32_t rax_8 = rax_7[1].d
    uint64_t var_f8_1 = *rax_7
    zmm0 = zx.o(*(arg1 + 0x3c))
    int32_t result_2 = *(arg1 + 0x44)
    int32_t result_1
    
    if (rdi_1 == 0)
        var_d8 = zmm0.q
        result_1 = result_2
    else
        zmm10 = rdi_1[4]
        zmm12 = rdi_1[5]
        zmm7 = rdi_1[6]
        var_e8 = zmm0.q
        zmm6 = var_e8.d
        zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm9.d = zmm6.d f* zmm7.d
        zmm5.d = zmm8.d f* zmm10.d
        result_3 = result_2
        zmm0.d = zmm8.d f* zmm7.d
        zmm11.d = result_3.d f* zmm12.d
        zmm11.d = zmm11.d f- zmm0.d
        zmm0.d = result_3.d f* zmm10.d
        zmm9.d = zmm9.d f- zmm0.d
        zmm0.d = zmm6.d f* zmm12.d
        zmm11.d = zmm11.d f+ zmm11.d
        zmm5.d = zmm5.d f- zmm0.d
        zmm0 = rdi_1[7]
        zmm9.d = zmm9.d f+ zmm9.d
        zmm2.d = zmm11.d f* zmm0.d
        zmm5.d = zmm5.d f+ zmm5.d
        zmm6.d = zmm6.d f+ zmm2.d
        zmm3.d = zmm9.d f* zmm0.d
        zmm4.d = zmm5.d f* zmm0.d
        zmm8.d = zmm8.d f+ zmm3.d
        arg2.d = zmm5.d f* zmm12.d
        zmm0.d = zmm9.d f* zmm7.d
        result_3.d = result_3.d f+ zmm4.d
        zmm9.d = zmm9.d f* zmm10.d
        arg2.d = arg2.d f- zmm0.d
        zmm5.d = zmm5.d f* zmm10.d
        zmm10 = 0x80000000
        zmm0.d = zmm11.d f* zmm7.d
        zmm11.d = zmm11.d f* zmm12.d
        arg2.d = arg2.d f+ zmm6.d
        zmm0.d = zmm0.d f- zmm5.d
        zmm9.d = zmm9.d f- zmm11.d
        var_d8.d = arg2.d
        zmm0.d = zmm0.d f+ zmm8.d
        zmm9.d = zmm9.d f+ result_3.d
        var_d8:4.d = zmm0.d
        result_1 = zmm9.d
    
    zmm7.d = var_118.d.d f- var_108_1.d
    zmm8.d = var_118:4.d.d f- var_108_1:4.d
    zmm9.d = rax_5.d f- rax_2
    result = zx.q(result_1)
    var_e8 = var_d8
    zmm2.d = zmm8.d f* zmm8.d
    var_e0 = result.d
    zmm0.d = zmm7.d f* zmm7.d
    arg2.d = zmm9.d f* zmm9.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ arg2.d
    zmm6.d = _mm_sqrt_ss(zx.o(0).d, zmm2.d).d f* arg1[9].d
    zmm6.d = zmm6.d f* zmm15.d
    zmm6 ^= zmm10
    
    if (not(zmm2.d f== 1f))
        if (zmm2.d f>= 9.99999994e-09f)
            zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
            zmm3.d = zmm2.d f* 0.5f
            zmm0.d = zmm5.d f* zmm5.d
            arg2.d = zmm3.d f* zmm0.d
            zmm2.d = 0.5f f- arg2.d
            zmm0.d = zmm5.d f* zmm2.d
            zmm5.d = zmm5.d f+ zmm0.d
            arg2.d = zmm5.d f* zmm5.d
            zmm3.d = zmm3.d f* arg2.d
            zmm4.d = 0.5f f- zmm3.d
            zmm0.d = zmm5.d f* zmm4.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm7.d = zmm7.d f* zmm5.d
            zmm8.d = zmm8.d f* zmm5.d
            zmm9.d = zmm9.d f* zmm5.d
        else
            zmm7 = data_143dbb1f8
            zmm8 = data_143dbb1fc
            zmm9 = data_143dbb200
    
    zmm7.d = zmm7.d f* zmm6.d
    zmm8.d = zmm8.d f* zmm6.d
    zmm9.d = zmm9.d f* zmm6.d
    
    if (rsi_1 != 0)
        zmm3 = var_f8_1:4.d
        zmm2 = rax_8
        zmm6 = zmm7 ^ zmm10
        zmm0.d = zmm6.d f+ rsi_1[8]
        zmm5 = zmm8 ^ zmm10
        zmm4 = zmm9 ^ zmm10
        arg2.d = zmm5.d f+ rsi_1[9]
        rsi_1[8] = zmm0.d
        zmm0.d = zmm4.d f+ rsi_1[0xa]
        rsi_1[9] = arg2.d
        arg2.d = zmm3.d f* zmm4.d
        rsi_1[0xa] = zmm0.d
        zmm0.d = zmm2.d f* zmm5.d
        zmm2.d = zmm2.d f* zmm6.d
        arg2.d = arg2.d f- zmm0.d
        zmm3.d = zmm3.d f* zmm6.d
        arg2.d = arg2.d f+ rsi_1[0xb]
        rsi_1[0xb] = arg2.d
        arg2 = var_f8_1.d
        zmm0 = arg2
        arg2.d = arg2.d f* zmm5.d
        zmm0.d = zmm0.d f* zmm4.d
        arg2.d = arg2.d f- zmm3.d
        zmm2.d = zmm2.d f- zmm0.d
        arg2.d = arg2.d f+ rsi_1[0xd]
        zmm2.d = zmm2.d f+ rsi_1[0xc]
        rsi_1[0xd] = arg2.d
        rsi_1[0xc] = zmm2.d
        rdi_1 = arg1[1]
    
    if (rdi_1 != 0)
        zmm3 = var_e8:4.d
        zmm0.d = zmm7.d f+ rdi_1[8]
        zmm2 = var_e0
        arg2.d = zmm8.d f+ rdi_1[9]
        rdi_1[8] = zmm0.d
        zmm0.d = zmm9.d f+ rdi_1[0xa]
        rdi_1[9] = arg2.d
        arg2.d = zmm3.d f* zmm9.d
        zmm3.d = zmm3.d f* zmm7.d
        rdi_1[0xa] = zmm0.d
        zmm0.d = zmm2.d f* zmm8.d
        zmm2.d = zmm2.d f* zmm7.d
        arg2.d = arg2.d f- zmm0.d
        arg2.d = arg2.d f+ rdi_1[0xb]
        rdi_1[0xb] = arg2.d
        arg2 = var_e8.d
        zmm0 = arg2
        arg2.d = arg2.d f* zmm8.d
        zmm0.d = zmm0.d f* zmm9.d
        arg2.d = arg2.d f- zmm3.d
        zmm2.d = zmm2.d f- zmm0.d
        arg2.d = arg2.d f+ rdi_1[0xd]
        zmm2.d = zmm2.d f+ rdi_1[0xc]
        rdi_1[0xd] = arg2.d
        rdi_1[0xc] = zmm2.d

if (*(arg1 + 0x51) != 0)
    uint32_t rcx_2 = zx.d(*(arg1 + 0x2c))
    zmm15 = zx.o(0)
    var_118 = 0
    int32_t var_110_2 = 0
    int32_t var_110_4
    
    if (rcx_2 == 0)
        void* rax_11 = arg1[1]
        arg2 = *(rax_11 + 0x18)
        zmm0 = *(rax_11 + 0x14)
        zmm4.d = arg2.d f+ arg2.d
        zmm6 = zmm0 ^ zmm10
        zmm6.d = zmm6.d f+ zmm6.d
        zmm3.d = zmm6.d f* zmm0.d
        zmm0.d = zmm4.d f* arg2.d
        arg2.d = zmm4.d f* *(rax_11 + 0x1c)
        zmm4.d = zmm4.d f* *(rax_11 + 0x10)
        zmm3.d = zmm3.d f- zmm0.d
        zmm0 = zmm6
        zmm6.d = zmm6.d f* *(rax_11 + 0x1c)
        zmm0.d = zmm0.d f* *(rax_11 + 0x10)
        zmm3.d = zmm3.d f+ 1f
        zmm6.d = zmm6.d f+ zmm4.d
        arg2.d = arg2.d f- zmm0.d
        var_118.d = zmm3.d
        var_110_4 = zmm6.d
        var_118:4.d = arg2.d
    else if (rcx_2 == 1)
        void* rax_10 = arg1[1]
        zmm4 = *(rax_10 + 0x10)
        zmm3 = *(rax_10 + 0x18)
        zmm6.d = zmm4.d f+ zmm4.d
        zmm8 = zmm3 ^ zmm10
        zmm8.d = zmm8.d f+ zmm8.d
        zmm0.d = zmm6.d f* *(rax_10 + 0x14)
        arg2 = zmm8
        zmm5.d = zmm8.d f* *(rax_10 + 0x1c)
        zmm8.d = zmm8.d f* *(rax_10 + 0x14)
        zmm5.d = zmm5.d f+ zmm0.d
        arg2.d = arg2.d f* zmm3.d
        zmm0 = zmm6
        zmm6.d = zmm6.d f* *(rax_10 + 0x1c)
        zmm0.d = zmm0.d f* zmm4.d
        var_118.d = zmm5.d
        zmm6.d = zmm6.d f- zmm8.d
        arg2.d = arg2.d f- zmm0.d
        arg2.d = arg2.d f+ 1f
        var_110_4 = zmm6.d
        var_118:4.d = arg2.d
    else if (rcx_2 == 2)
        void* rax_9 = arg1[1]
        zmm7 = *(rax_9 + 0x14)
        zmm6 = *(rax_9 + 0x10)
        zmm5.d = zmm7.d f+ zmm7.d
        zmm8 = zmm6 ^ zmm10
        zmm8.d = zmm8.d f+ zmm8.d
        zmm4.d = zmm5.d f* *(rax_9 + 0x1c)
        zmm0.d = zmm8.d f* *(rax_9 + 0x18)
        zmm2.d = zmm8.d f* *(rax_9 + 0x1c)
        zmm4.d = zmm4.d f- zmm0.d
        zmm8.d = zmm8.d f* zmm6.d
        zmm0 = zmm5
        zmm5.d = zmm5.d f* zmm7.d
        zmm0.d = zmm0.d f* *(rax_9 + 0x18)
        zmm8.d = zmm8.d f- zmm5.d
        var_118.d = zmm4.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm8.d = zmm8.d f+ 1f
        var_118:4.d = zmm2.d
        int32_t var_110_3 = zmm8.d
    zmm12 = *(arg1 + 0x14)
    zmm7 = arg1[3].d
    zmm10 = arg1[2].d
    zmm0 = zx.o(arg1[4])
    int32_t result_5 = arg1[5].d
    var_d8 = zmm0.q
    zmm6 = var_d8.d
    result_3 = result_5
    zmm9.d = zmm6.d f* zmm7.d
    zmm11.d = result_3.d f* zmm12.d
    zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm0.d = zmm8.d f* zmm7.d
    zmm5.d = zmm8.d f* zmm10.d
    zmm11.d = zmm11.d f- zmm0.d
    zmm0.d = result_3.d f* zmm10.d
    zmm9.d = zmm9.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm12.d
    zmm11.d = zmm11.d f+ zmm11.d
    zmm5.d = zmm5.d f- zmm0.d
    zmm0 = *(arg1 + 0x1c)
    zmm9.d = zmm9.d f+ zmm9.d
    zmm2.d = zmm11.d f* zmm0.d
    zmm5.d = zmm5.d f+ zmm5.d
    zmm6.d = zmm6.d f+ zmm2.d
    zmm3.d = zmm9.d f* zmm0.d
    zmm4.d = zmm5.d f* zmm0.d
    zmm8.d = zmm8.d f+ zmm3.d
    arg2.d = zmm5.d f* zmm12.d
    zmm0.d = zmm9.d f* zmm7.d
    result_3.d = result_3.d f+ zmm4.d
    zmm5.d = zmm5.d f* zmm10.d
    arg2.d = arg2.d f- zmm0.d
    zmm9.d = zmm9.d f* zmm10.d
    zmm0 = zmm11
    zmm11.d = zmm11.d f* zmm12.d
    zmm0.d = zmm0.d f* zmm7.d
    arg2.d = arg2.d f+ zmm6.d
    zmm9.d = zmm9.d f- zmm11.d
    zmm0.d = zmm0.d f- zmm5.d
    var_d8.d = arg2.d
    zmm9.d = zmm9.d f+ result_3.d
    zmm0.d = zmm0.d f+ zmm8.d
    int32_t var_d0_5 = zmm9.d
    var_d8:4.d = zmm0.d
    sub_140ad6800(&var_e8, &var_118, &var_d8)
    float _X = -1f
    int32_t var_dc
    zmm6 = var_dc
    
    if (not(zmm6.d f< -1f))
        _X = _mm_min_ss(zmm6.d, 0x3f800000)
    
    int128_t zmm0_1 = acosf(_X)
    zmm6.d = zmm6.d f* zmm6.d
    int128_t zmm2_1
    zmm2_1.d = zmm0_1.d f+ zmm0_1.d
    zmm0_1 = _mm_sqrt_ss(0, _mm_max_ss(1f f- zmm6.d, 0))
    float zmm1
    
    if (zmm0_1.d f< 9.99999975e-05f)
        zmm0_1 = 0x3f800000
        zmm1 = (zx.o(0)).d
    else
        int128_t zmm14
        zmm14.d = 1f f/ zmm0_1.d
        zmm0_1.d = var_e8.d.d f* zmm14.d
        zmm15.d = var_e8:4.d.d f* zmm14.d
        zmm1 = var_e0 f* zmm14.d
    
    zmm2_1.d = zmm2_1.d f* *(arg1 + 0x4c)
    void* rax_12 = *arg1
    int128_t zmm3_1
    zmm3_1.d = zmm2_1.d f* zmm0_1.d
    int128_t zmm4_1
    zmm4_1.d = zmm2_1.d f* zmm15.d
    zmm2_1.d = zmm2_1.d f* zmm1
    zmm3_1.d = zmm3_1.d f* arg_10
    zmm4_1.d = zmm4_1.d f* arg_10
    zmm2_1.d = zmm2_1.d f* arg_10
    zmm3_1 ^= 0x80000000
    zmm4_1 ^= 0x80000000
    zmm2_1 ^= 0x80000000
    
    if (rax_12 != 0)
        zmm0_1.d = zmm3_1.d f+ *(rax_12 + 0x2c)
        zmm1 = zmm4_1.d f+ *(rax_12 + 0x30)
        *(rax_12 + 0x2c) = zmm0_1.d
        zmm0_1.d = zmm2_1.d f+ *(rax_12 + 0x34)
        *(rax_12 + 0x30) = zmm1
        *(rax_12 + 0x34) = zmm0_1.d
    
    result = arg1[1]
    
    if (result != 0)
        zmm0_1.d = (*(result + 0x2c)).d f- zmm3_1.d
        zmm1 = result[6].d f- zmm4_1.d
        *(result + 0x2c) = zmm0_1.d
        zmm0_1.d = (*(result + 0x34)).d f- zmm2_1.d
        result[6].d = zmm1
        *(result + 0x34) = zmm0_1.d

return result
