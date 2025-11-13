// 函数: sub_141ddff00
// 地址: 0x141ddff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *arg1[2]
int64_t r9_1 = sx.q(arg2) * 2
int64_t rdx = *arg1[1]
float zmm9[0x4] = *(r8 + (r9_1 << 3) + 4)
float zmm3[0x4] = *(rdx + (r9_1 << 3))
uint32_t zmm5[0x4] = *(rdx + (r9_1 << 3) + 4)
int128_t zmm8 = *(r8 + (r9_1 << 3))
float zmm10[0x4] = *(r8 + (r9_1 << 3) + 8)
float zmm6[0x4] = *(rdx + (r9_1 << 3) + 8)
float zmm11[0x4] = *(r8 + (r9_1 << 3) + 0xc)
int128_t zmm7 = *(rdx + (r9_1 << 3) + 0xc)
zmm9[0] = zmm9[0] f* zmm5[0]
zmm3[0] = zmm3[0] f* zmm8.d
zmm10[0] = zmm10[0] * zmm6[0]
zmm3[0] = zmm3[0] + zmm9[0]
zmm11[0] = zmm11[0] f* zmm7.d
zmm3[0] = zmm3[0] + zmm10[0]
zmm3[0] = zmm3[0] + zmm11[0]
float zmm0[0x4] = arg3
float zmm1[0x4]

if (zmm3[0] < 0f)
    zmm1 = 0xbf800000
    zmm0 ^= data_142d3f780
else
    zmm1 = 0x3f800000

int64_t* rax_2 = *arg1
zmm1[0] = zmm1[0] - zmm0[0]
zmm8.d = zmm8.d f* arg3[0]
int64_t rcx = *rax_2
zmm3[0] = zmm3[0] * zmm1[0]
zmm5[0] = zmm5[0] f* zmm1[0]
zmm3[0] = zmm3[0] f+ zmm8.d
zmm6[0] = zmm6[0] * zmm1[0]
zmm7.d = zmm7.d f* zmm1[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm9[0] = zmm9[0] * arg3[0]
zmm10[0] = zmm10[0] * arg3[0]
zmm5[0] = zmm5[0] f+ zmm9[0]
zmm11[0] = zmm11[0] * arg3[0]
zmm6[0] = zmm6[0] + zmm10[0]
zmm7.d = zmm7.d f+ zmm11[0]
temp0[0] = zmm5[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm6[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm7.d
*(rcx + (r9_1 << 3)) = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
zmm5 = data_143f390d0
int64_t rcx_1 = **arg1
zmm6 = *(rcx_1 + (r9_1 << 3))
float temp0_4[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_6[0x4] = _mm_add_ps(temp0_4, _mm_shuffle_ps(temp0_4, temp0_4, 0x4e))
float temp0_8[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x39), temp0_6)
float temp0_9[0x4] = _mm_rsqrt_ps(temp0_8)
float temp0_10[0x4] = _mm_mul_ps(temp0_8, zmm5)
float temp0_15[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_9, temp0_9), temp0_10)), temp0_9), 
    temp0_9)
zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_15, temp0_15), temp0_10))
float result[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_8, 2)
*(rcx_1 + (r9_1 << 3)) = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5, temp0_15), temp0_15), zmm6) ^ data_143f390c0, result)
    ^ data_143f390c0
return result
