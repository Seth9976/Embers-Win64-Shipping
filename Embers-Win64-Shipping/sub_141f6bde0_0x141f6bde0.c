// 函数: sub_141f6bde0
// 地址: 0x141f6bde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
float zmm6[0x4]

if (arg2[0] >= 0f)
    zmm6 = _mm_min_ss(arg2[0], 0x3f800000)
else
    zmm6 = zx.o(0)

bool cond:1 = zmm6[0] <= 0f
*(arg1 + 0x10) = zmm6[0]
int32_t* result

if (cond:1 || *(arg1 + 0x18) == 0)
    result = arg5
    *(arg1 + 0x30) = *arg3
    *(arg1 + 0x40) = arg3[1]
    *(arg1 + 0x50) = arg3[2]
    *(arg1 + 0x60) = arg3[3]
    *(arg1 + 0x70) = arg3[4]
    *(arg1 + 0x80) = arg3[5]
    *(arg1 + 0x90) = arg3[6]
    *(arg1 + 0xa0) = arg3[7]
    *(arg1 + 0xb0) = arg3[8]
    arg2 = *result
    *(arg1 + 0x10) = 0
    *(arg1 + 0x24) = arg2[0]
else if (zmm6[0] >= 1f)
    result = arg6
    *(arg1 + 0x30) = *arg4
    *(arg1 + 0x40) = arg4[1]
    *(arg1 + 0x50) = arg4[2]
    *(arg1 + 0x60) = arg4[3]
    *(arg1 + 0x70) = arg4[4]
    *(arg1 + 0x80) = arg4[5]
    *(arg1 + 0x90) = arg4[6]
    *(arg1 + 0xa0) = arg4[7]
    *(arg1 + 0xb0) = arg4[8]
    *(arg1 + 0x24) = (*result).d
else
    float zmm0[0x4] = 0x3f800000
    zmm0[0] = 1f - zmm6[0]
    float var_278 = zmm0[0]
    float var_1a8[0x4]
    memset(&var_1a8, 0, 0x90)
    float zmm2[0x4] = *(arg1 + 0x10)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    int64_t i_17 = 3
    int64_t var_268
    __builtin_memset(&var_268, 0, 0x30)
    int64_t i_9 = 3
    int128_t* rax_2 = arg4
    float zmm0_1[0x4]
    int64_t i
    
    do
        zmm0_1 = *rax_2
        rax_2 = &rax_2[1]
        *(&var_268 - arg4 + rax_2 - 0x10) = _mm_mul_ps(zmm0_1, temp0_2)
        i = i_9
        i_9 -= 1
    while (i != 1)
    int64_t rax_3 = 0
    int64_t rbx_1 = 0
    var_1a8 = var_268.o
    int64_t i_10 = 3
    int64_t var_248
    float var_188_1[0x4] = var_248.o
    int64_t var_258
    float var_198_1[0x4] = var_258.o
    __builtin_memset(&var_268, 0, 0x30)
    int64_t i_1
    
    do
        zmm0_1 = *(rax_3 + arg4 + 0x30)
        rax_3 += 0x10
        *(&var_278 + rax_3) = _mm_mul_ps(zmm0_1, temp0_2)
        i_1 = i_10
        i_10 -= 1
    while (i_1 != 1)
    int64_t rax_4 = 0
    int64_t i_11 = 3
    float var_178[0x4] = var_268.o
    int64_t var_248_1
    float var_158_1[0x4] = var_248_1.o
    int64_t var_258_1
    float var_168_1[0x4] = var_258_1.o
    __builtin_memset(&var_268, 0, 0x30)
    int64_t i_2
    
    do
        zmm0_1 = *(rax_4 + arg4 + 0x60)
        rax_4 += 0x10
        *(&var_278 + rax_4) = _mm_mul_ps(zmm0_1, temp0_2)
        i_2 = i_11
        i_11 -= 1
    while (i_2 != 1)
    float var_148[0x4] = var_268.o
    int64_t var_248_2
    float var_128_1[0x4] = var_248_2.o
    int64_t var_258_2
    float var_138_1[0x4] = var_258_2.o
    float var_238[0x4]
    memset(&var_238, 0, 0x90)
    zmm2 = var_278
    float temp0_6[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    __builtin_memset(&var_268, 0, 0x30)
    int64_t i_12 = 3
    float (* rax_5)[0x4] = arg3
    float zmm0_2[0x4]
    int64_t i_3
    
    do
        zmm0_2 = *rax_5
        rax_5 = &rax_5[1]
        *(&var_268 - arg3 + rax_5 - 0x10) = _mm_mul_ps(zmm0_2, temp0_6)
        i_3 = i_12
        i_12 -= 1
    while (i_3 != 1)
    int64_t rax_6 = 0
    int64_t i_13 = 3
    var_238 = var_268.o
    int64_t var_248_3
    float var_218_1[0x4] = var_248_3.o
    int64_t var_258_3
    float var_228_1[0x4] = var_258_3.o
    __builtin_memset(&var_268, 0, 0x30)
    int64_t i_4
    
    do
        zmm0_2 = *(arg3 + rax_6 + 0x30)
        rax_6 += 0x10
        *(&var_278 + rax_6) = _mm_mul_ps(zmm0_2, temp0_6)
        i_4 = i_13
        i_13 -= 1
    while (i_4 != 1)
    int64_t rax_7 = 0
    int64_t i_14 = 3
    float var_208[0x4] = var_268.o
    int64_t var_248_4
    float var_1e8_1[0x4] = var_248_4.o
    int64_t var_258_4
    float var_1f8_1[0x4] = var_258_4.o
    __builtin_memset(&var_268, 0, 0x30)
    int64_t i_5
    
    do
        zmm0_2 = *(arg3 + rax_7 + 0x60)
        rax_7 += 0x10
        *(&var_278 + rax_7) = _mm_mul_ps(zmm0_2, temp0_6)
        i_5 = i_14
        i_14 -= 1
    while (i_5 != 1)
    float var_1d8[0x4] = var_268.o
    int64_t var_248_5
    float var_1b8_1[0x4] = var_248_5.o
    int64_t var_258_5
    float var_1c8_1[0x4] = var_258_5.o
    void var_118
    memset(&var_118, 0, 0x90)
    int64_t rax_8 = 0
    int64_t i_15 = 3
    __builtin_memset(&var_268, 0, 0x30)
    int64_t i_6
    
    do
        *(&var_268 + rax_8) = __addps_xmmps_memps(*(&var_238 + rax_8), *(&var_1a8 + rax_8))
        rax_8 += 0x10
        i_6 = i_15
        i_15 -= 1
    while (i_6 != 1)
    int128_t zmm8 = var_268.o
    int64_t rax_9 = 0
    int64_t i_16 = 3
    __builtin_memset(&var_268, 0, 0x30)
    int64_t i_7
    
    do
        *(&var_268 + rax_9) = __addps_xmmps_memps(*(&var_208 + rax_9), *(&var_178 + rax_9))
        rax_9 += 0x10
        i_7 = i_16
        i_16 -= 1
    while (i_7 != 1)
    int128_t zmm3 = var_268.o
    __builtin_memset(&var_268, 0, 0x30)
    int64_t i_8
    
    do
        *(&var_268 + rbx_1) = __addps_xmmps_memps(*(&var_1d8 + rbx_1), *(&var_148 + rbx_1))
        rbx_1 += 0x10
        i_8 = i_17
        i_17 -= 1
    while (i_8 != 1)
    int128_t zmm0_3 = var_268.o
    int128_t zmm7
    zmm7.d = 1f - zmm6[0]
    *(arg1 + 0x30) = zmm8
    int64_t var_258_6
    *(arg1 + 0x40) = var_258_6.o
    int64_t var_248_6
    *(arg1 + 0x50) = var_248_6.o
    *(arg1 + 0x60) = zmm3
    int64_t var_258_7
    *(arg1 + 0x70) = var_258_7.o
    int64_t var_248_7
    *(arg1 + 0x80) = var_248_7.o
    *(arg1 + 0x90) = zmm0_3
    int64_t var_258_8
    *(arg1 + 0xa0) = var_258_8.o
    int64_t var_248_8
    *(arg1 + 0xb0) = var_248_8.o
    zmm7.d = zmm7.d f* *arg5
    result = arg6
    zmm6[0] = zmm6[0] f* *result
    zmm7.d = zmm7.d f+ zmm6[0]
    *(arg1 + 0x24) = zmm7.d

__security_check_cookie(rax_1 ^ &var_298)
return result
