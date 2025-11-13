// 函数: sub_141a9a5d0
// 地址: 0x141a9a5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg2 + 0x18)
int32_t zmm6
int32_t var_28 = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
int32_t rsi = -1
float var_78 = arg3[0]
int32_t rax = *(arg1 + 0xd0)
float var_98 = arg4[0]
int32_t rdx_2

if (rax s>= 0)
    rdx_2 = *(arg1 + 0xd4)
else
    int32_t rcx = rax * 2
    
    if ((rcx & 0xfffffffe) == 0xfffffffe)
        rdx_2 = -1
    else
        rdx_2 = *(*(r15 + 0x80) + (sx.q(rcx) s>> 1 << 2))

int64_t r14 = sx.q(rdx_2)

if (*(r14 + *(arg2 + 0x20)) == 0)
    sub_141a98300(arg2 + 8, rdx_2)

float zmm5[0x4] = *(*(arg2 + 8) + r14 * 0x30)

if (*(arg1 + 0xe4) == 0)
    float zmm1[0x4] = zx.o(*(arg1 + 0xd8))
    int32_t rax_5 = *(arg1 + 0xe0)
    _mm_shuffle_ps(zmm1, zmm1, 0x55)
    int32_t var_e0_1 = rax_5
    int32_t var_e8_1 = zmm1.d
else
    float zmm0[0x4] = *(arg1 + 0xe0)
    float zmm4[0x4] = *(arg1 + 0xd8)
    float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0xdc), zx.o(0)[0].q)
    float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm0[0].q), temp0[0].q)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xc9), temp0_4)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xd2), temp0_3)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_10[0x4] = _mm_sub_ps(temp0_8, temp0_6)
    float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
    float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_3)
    float temp0_16[0x4] = _mm_mul_ps(temp0_13, temp0_4)
    float temp0_17[0x4] = _mm_add_ps(temp0_12, temp0_2)
    float temp0_19[0x4] = _mm_add_ps(_mm_sub_ps(temp0_15, temp0_16), temp0_17)
    _mm_shuffle_ps(temp0_19, temp0_19, 0x55)
    _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)

float var_d8
int32_t zmm6_1
float zmm7_1[0x4]
float zmm11
float zmm13
zmm6_1, zmm7_1, zmm11, zmm13 = sub_141abbed0(arg1, &var_d8, arg2 + 8, arg1 + 0xe8)
int32_t rcx_6 = *(arg1 + 0xd0)

if (rcx_6 s>= 0)
    rsi = *(arg1 + 0xd4)
else
    int32_t rcx_7 = rcx_6 * 2
    
    if ((rcx_7 & 0xfffffffe) != 0xfffffffe)
        rsi = *(*(r15 + 0x80) + (sx.q(rcx_7) s>> 1 << 2))

int64_t r14_1 = sx.q(rsi)

if (*(r14_1 + *(arg2 + 0x20)) == 0)
    zmm6_1, zmm7_1, zmm11, zmm13 = sub_141a98300(arg2 + 8, rsi)

uint128_t zmm5_1 = *(r14_1 * 0x30 + *(arg2 + 8))
float result[0x4]
uint128_t result_1
float result_3[0x4]
float zmm9[0x4]
float zmm10[0x4]

if (*(arg1 + 0x114) == 0)
    result_1 = zx.o(*(arg1 + 0x108))
    int32_t rax_11 = *(arg1 + 0x110)
    result = result_1
    zmm9 = _mm_shuffle_ps(result, result, 0x55)
    zmm10 = rax_11
    result_3 = result_1.d
else
    float temp0_25[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x108), (*(arg1 + 0x110))[0].q), 
        _mm_unpacklo_ps(*(arg1 + 0x10c), zx.o(0).q)[0].q)
    float temp0_26[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    result_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xc9), temp0_26)
    float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xd2), result_1)
    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_33[0x4] = _mm_sub_ps(temp0_31, temp0_29)
    float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
    zmm5_1 = _mm_mul_ps(zmm5_1, temp0_34)
    float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xd2), result_1)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
    zmm5_1 = _mm_add_ps(zmm5_1, temp0_25)
    result_3 = _mm_add_ps(_mm_sub_ps(temp0_37, _mm_mul_ps(temp0_38, temp0_26)), zmm5_1)
    zmm9 = _mm_shuffle_ps(result_3, result_3, 0x55)
    zmm10 = _mm_shuffle_ps(result_3, result_3, 0xaa)

result_3[0] = result_3[0] * zmm7_1[0]
zmm7_1 = 0xbf800000
int32_t zmm12 = (zx.o(0)).d
zmm9[0] = zmm9[0] * zmm11
result_1.d = zmm10.d f* zmm13
result_3[0] = result_3[0] + zmm9[0]
result_3[0] = result_3[0] f+ result_1.d
float result_2[0x4]

if (not(result_3[0] f<= zmm6_1))
    if (result_3[0] >= -1f)
        result_2 = _mm_min_ss(result_3[0], 0x3f800000)
    else
        result_2 = 0xbf800000
    
    zmm12 = asinf(result_2[0])[0]

float zmm3_1[0x4] = var_d8
int32_t result_4
result_2 = result_4
zmm3_1[0] = zmm3_1[0] * result_3[0]
int32_t var_d4
result_1.d = var_d4.d f* zmm9[0]
result_2[0] = result_2[0] * zmm10[0]
zmm3_1[0] = zmm3_1[0] f+ result_1.d
zmm3_1[0] = zmm3_1[0] + result_2[0]

if (not(zmm3_1[0] f<= zmm6_1))
    if (not(zmm3_1[0] < -1f))
        zmm7_1 = _mm_min_ss(zmm3_1[0], 0x3f800000)
    
    zmm6_1 = asinf(zmm7_1[0])[0]

result_2 = *(arg1 + 0x130)
zmm6_1 = zmm6_1 f- zmm12
zmm3_1 = *(arg1 + 0x134)

if (zmm6_1 f>= result_2[0])
    result_1 = _mm_min_ss(zmm3_1.d, zmm6_1)
else
    result_1 = result_2

result = *(arg1 + 0x120)
result_1.d = result_1.d f- result_2[0]
result[0] = result[0] f- *(arg1 + 0x11c)
int64_t* rdx_5 = *(arg2 + 0x60)
zmm3_1[0] = zmm3_1[0] - result_2[0]
uint32_t rcx_13 = zx.d(*(arg1 + 0x12c))
result[0] = result[0] f* result_1.d
result[0] = result[0] / zmm3_1[0]
result[0] = result[0] f* *(arg1 + 0x2c)
int16_t rdx_6

if (rcx_13 s>= rdx_5[1].d)
    rdx_6 = -1
else
    rdx_6 = *(*rdx_5 + (zx.q(rcx_13.w) << 1))

if (rdx_6 != 0xffff)
    int64_t rax_13 = *(arg2 + 0x50)
    uint64_t rcx_15 = zx.q(rdx_6)
    *(rax_13 + (rcx_15 << 3)) = result[0]
    *(rax_13 + (rcx_15 << 3) + 4) = 1

return result
