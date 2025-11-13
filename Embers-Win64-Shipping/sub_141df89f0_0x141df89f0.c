// 函数: sub_141df89f0
// 地址: 0x141df89f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int64_t rcx = sx.q((arg4 << 2).d)
int64_t rax_1 = *(r10 + 0x10)
int128_t* r9_1 = sx.q(*(rax_1 + (rcx << 2) + 8)) + *(r10 + 0x38)
int32_t rdx = *(rax_1 + (rcx << 2) + 0xc)
uint128_t zmm0
float zmm2[0x4]

if (rdx == 1)
    zmm2 = *r9_1
    float zmm4 = *(r9_1 + 4)
    uint128_t zmm5 = *(r9_1 + 8)
    zmm0.d = zmm2.d f* zmm2[0]
    float zmm3 = 1f f- zmm0.d
    zmm0.d = zmm5.d f* zmm5.d
    float zmm1 = (zx.o(0)).d
    zmm3 = zmm3 - zmm4 * zmm4 f- zmm0.d
    
    if (not(zmm3 <= 0f))
        zmm1 = _mm_sqrt_ss(0, zmm3)
    
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
    temp0_2[0] = zmm4
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    temp0_3[0] = zmm5.d
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
    temp0_4[0] = zmm1
    *arg2 = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
    return rax_1

int128_t zmm7
int128_t var_28 = zmm7
int128_t zmm8
int128_t var_38 = zmm8

if (rdx s>= 2)
    zmm0 = *(arg3 + 0x1c)

int64_t rax_4
float var_88[0x4]
uint64_t rcx_1

if (rdx s< 2 || zmm0.d f<= 0f)
    rcx_1 = 0
label_141df8ab8:
    rax_4 = sub_141e0df90(sx.q((rcx_1 * 3).d * 2) + r9_1, &var_88)
    *arg2 = var_88
else
    uint64_t rdx_2 = zx.q(rdx - 1)
    
    if (not(zmm0.d f< 1f))
        rcx_1 = zx.q(rdx_2.d)
        goto label_141df8ab8
    
    uint128_t zmm6
    zmm6.d = _mm_cvtepi32_ps(zx.o(rdx_2.d)).d f* zmm0.d
    zmm2 = zmm6
    int32_t rcx_4 = int.d(zmm2[0])
    
    if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm2[0]))
        zmm2 =
            _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
    
    rcx_1 = zx.q(rdx_2.d)
    int32_t rax_7 = int.d(zmm2.d)
    
    if (rax_7 s<= rdx_2.d)
        rcx_1 = zx.q(rax_7)
    
    if (*(arg3 + 4) != 1)
        zmm6.d = zmm6.d f- zmm2[0]
    
    int32_t rax_8 = (rcx_1 + 1).d
    
    if (rax_8 s<= rdx_2.d)
        rdx_2 = zx.q(rax_8)
    
    if (rcx_1.d == rdx_2.d)
        goto label_141df8ab8
    
    int32_t var_98
    sub_141e0df90(sx.q((rcx_1 * 3).d * 2) + r9_1, &var_98)
    int32_t zmm6_1
    rax_4, zmm6_1 = sub_141e0df90(sx.q((rdx_2 * 3).d * 2) + r9_1, &var_88)
    int32_t var_94
    float zmm3_1[0x4] = var_94
    float zmm9[0x4] = var_98
    uint32_t zmm0_2[0x4] = zmm3_1
    int128_t zmm10 = var_88[0]
    int128_t zmm11 = var_88[1]
    int32_t var_90
    float zmm4_1[0x4] = var_90
    int128_t zmm12 = var_88[2]
    int32_t var_8c
    float zmm5_1[0x4] = var_8c
    zmm0_2[0] = zmm0_2[0] f* zmm11.d
    zmm9[0] = zmm9[0] f* zmm10.d
    zmm4_1[0] = zmm4_1[0] f* zmm12.d
    zmm9[0] = zmm9[0] f+ zmm0_2[0]
    zmm0_2 = zmm5_1
    zmm9[0] = zmm9[0] + zmm4_1[0]
    float zmm1_1[0x4] = var_88[3]
    zmm0_2[0] = zmm0_2[0] f* zmm1_1[0]
    zmm9[0] = zmm9[0] f+ zmm0_2[0]
    
    if (zmm9[0] < 0f)
        zmm0_2 = 0xbf800000
    else
        zmm0_2 = 0x3f800000
    
    zmm1_1[0] = zmm1_1[0] f* zmm6_1
    zmm8.d = 1f f- zmm6_1
    zmm10.d = zmm10.d f* zmm6_1
    zmm11.d = zmm11.d f* zmm6_1
    zmm8.d = zmm8.d f* zmm0_2[0]
    zmm9[0] = zmm9[0] f* zmm8.d
    zmm5_1[0] = zmm5_1[0] f* zmm8.d
    zmm9[0] = zmm9[0] f+ zmm10.d
    zmm4_1[0] = zmm4_1[0] f* zmm8.d
    zmm5_1[0] = zmm5_1[0] + zmm1_1[0]
    zmm3_1[0] = zmm3_1[0] f* zmm8.d
    float temp0_11[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
    zmm12.d = zmm12.d f* zmm6_1
    zmm3_1[0] = zmm3_1[0] f+ zmm11.d
    zmm4_1[0] = zmm4_1[0] f+ zmm12.d
    temp0_11[0] = zmm3_1[0]
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc6)
    temp0_12[0] = zmm4_1[0]
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x27)
    temp0_13[0] = zmm5_1[0]
    zmm5_1 = data_143f39360
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x39)
    float temp0_15[0x4] = _mm_mul_ps(temp0_14, temp0_14)
    float temp0_17[0x4] = _mm_add_ps(temp0_15, _mm_shuffle_ps(temp0_15, temp0_15, 0x4e))
    float temp0_19[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0x39), temp0_17)
    float temp0_20[0x4] = _mm_rsqrt_ps(temp0_19)
    float temp0_21[0x4] = _mm_mul_ps(temp0_19, zmm5_1)
    float temp0_26[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_20, temp0_20), temp0_21)), 
            temp0_20), 
        temp0_20)
    float temp0_29[0x4] = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_26, temp0_26), temp0_21))
    zmm0_2 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_19, 2)
    *arg2 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_29, temp0_26), temp0_26), temp0_14)
            ^ data_143f39350, 
        zmm0_2) ^ data_143f39350
return rax_4
