// 函数: sub_141ab2980
// 地址: 0x141ab2980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4] = *arg3
int128_t zmm9
int128_t zmm10
int128_t zmm11

if (arg5 == 1)
    zmm10 = 0x3f800000
    zmm9 = zx.o(0)
    zmm11 = zx.o(0)
else
    zmm10 = zx.o(0)
    
    if (arg5 == 2)
        zmm11 = 0x3f800000
        zmm9 = zx.o(0)
    else
        zmm9 = 0x3f800000
        zmm11 = zx.o(0)

float zmm8[0x4] = *arg4
float zmm3 = zmm8[0]
float zmm5[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
float zmm7[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
float zmm0 = zmm5[0] f* zmm10.d
float zmm1 = zmm7[0]
int128_t zmm6
zmm6.d = zmm11.d f* zmm7[0]
float zmm2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
zmm6.d = zmm6.d f- zmm0
zmm6.d = zmm6.d f+ zmm6.d
float zmm4 = zmm9.d * zmm5[0] - zmm11.d * zmm8[0]
zmm0 = zmm9.d * zmm7[0]
zmm7[0] = zmm7[0] f* zmm6.d
zmm3 = zmm3 f* zmm10.d - zmm0
zmm0 = zmm5[0]
zmm4 = zmm4 + zmm4
zmm5[0] = zmm5[0] f* zmm6.d
zmm3 = zmm3 + zmm3
zmm1 = zmm1 * zmm3 - zmm0 * zmm4 + zmm2[0] f* zmm6.d f+ zmm9.d
zmm0 = zmm8[0] * zmm3
zmm8[0] = zmm8[0] * zmm4
zmm5[0] = zmm5[0] - zmm0
float var_c8 = zmm1
zmm1 = zmm2[0]
zmm2[0] = zmm2[0] * zmm3
zmm8[0] = zmm8[0] - zmm7[0]
zmm2[0] = zmm2[0] f+ zmm11.d
zmm7 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
zmm6.d = zmm11.d f* zmm7[0]
zmm3 = zmm12[0]
zmm8[0] = zmm8[0] + zmm2[0]
zmm5[0] = zmm5[0] + zmm1 * zmm4 f+ zmm10.d
zmm1 = zmm7[0]
zmm2 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
float var_c0 = zmm8[0]
float var_c4 = zmm5[0]
zmm5 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
zmm6.d = zmm6.d f- zmm5[0] f* zmm10.d
zmm4 = zmm9.d * zmm5[0] - zmm11.d * zmm12[0]
zmm6.d = zmm6.d f+ zmm6.d
zmm3 = zmm3 f* zmm10.d - zmm9.d * zmm7[0]
zmm4 = zmm4 + zmm4
zmm3 = zmm3 + zmm3
zmm1 = zmm1 * zmm3 - zmm5[0] * zmm4
zmm0 = zmm2[0] f* zmm6.d
zmm5[0] = zmm5[0] f* zmm6.d
zmm7[0] = zmm7[0] f* zmm6.d
zmm5[0] = zmm5[0] - zmm12[0] * zmm3
float var_d8 = zmm1 + zmm0 f+ zmm9.d
zmm0 = zmm12[0] * zmm4
zmm1 = zmm2[0] * zmm4
zmm2[0] = zmm2[0] * zmm3
zmm0 = zmm0 - zmm7[0]
zmm2[0] = zmm2[0] f+ zmm11.d
zmm5[0] = zmm5[0] + zmm1 f+ zmm10.d
float var_d4 = zmm5[0]
float var_d0 = zmm0 + zmm2[0]
float var_b8[0x4][0x4]
sub_140ad6660(&var_b8, &var_c8, &var_d8)
float zmm2_1[0x4] = var_b8[0]
float zmm3_1[0x4] = *arg4
float zmm0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float zmm7_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b)
float zmm1_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
zmm7_1 = _mm_mul_ps(zmm7_1, zmm0_1)
zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm3_1)
zmm7_1 = __mulps_xmmps_memps(zmm7_1, data_143f2b850)
zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
zmm7_1 = _mm_add_ps(zmm7_1, zmm0_1)
zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
zmm3_1 = _mm_mul_ps(zmm3_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f2b840)
zmm2_1 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f2b830)
zmm7_1 = _mm_add_ps(zmm7_1, zmm1_1)
zmm1_1 = _mm_shuffle_ps(zmm12, zmm12, 0x55) ^ 0x80000000
zmm7_1 = _mm_add_ps(zmm7_1, zmm3_1)
zmm3_1 = zmm12 ^ 0x80000000
zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
zmm3_1[0] = zmm1_1[0]
zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
zmm3_1[0] = (zmm2_1 ^ 0x80000000)[0]
zmm0_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x1b)
zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x27)
zmm3_1[0] = zmm12[0]
zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x39)
zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), zmm0_1)
zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm7_1)
zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f2b850)
zmm1_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
*arg2 = _mm_add_ps(
    _mm_add_ps(_mm_add_ps(zmm2_1, zmm0_1), 
        __mulps_xmmps_memps(_mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm7_1, zmm7_1, 0x4e)), 
            data_143f2b840)), 
    __mulps_xmmps_memps(
    _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), _mm_shuffle_ps(zmm7_1, zmm7_1, 0xb1)), 
    data_143f2b830))
return arg2
