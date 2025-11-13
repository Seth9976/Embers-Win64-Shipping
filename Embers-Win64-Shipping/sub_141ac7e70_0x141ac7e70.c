// 函数: sub_141ac7e70
// 地址: 0x141ac7e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_78
sub_141ab2980(arg1, &var_78, arg3, arg4, arg5)
int32_t var_6c
float zmm7[0x4] = var_6c
int32_t zmm10 = 0xbf800000
float _X

if (zmm7[0] >= -1f)
    _X = _mm_min_ss(zmm7[0], 0x3f800000)
else
    _X = -1f

float zmm3[0x4] = acosf(_X)
zmm7[0] = zmm7[0] * zmm7[0]
float zmm1[0x4] = 0x3f800000
zmm3[0] = zmm3[0] + zmm3[0]
zmm1[0] = 1f - zmm7[0]
float temp0_3[0x4] = _mm_sqrt_ss(0, _mm_max_ss(zmm1[0], 0)[0])
float zmm4[0x4]
float zmm8[0x4]

if (temp0_3[0] < 9.99999975e-05f)
    zmm7 = 0x3f800000
    zmm8 = zx.o(0)
    zmm4 = zx.o(0)
else
    zmm4 = 0x3f800000
    zmm4[0] = 1f / temp0_3[0]
    zmm7 = zmm4
    zmm8 = zmm4
    zmm7[0] = zmm7[0] f* var_78
    int32_t var_74
    zmm8[0] = zmm8[0] f* var_74
    int32_t var_70
    zmm4[0] = zmm4[0] f* var_70

float var_70_1 = zmm4[0]
int64_t var_88 = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
float zmm0[0x4]
int32_t zmm9

if (arg5 == 1)
    zmm0 = zx.o(0)
    zmm1 = 0x3f800000
    zmm9 = (zx.o(0)).d
else
    zmm1 = zx.o(0)
    
    if (arg5 == 2)
        zmm0 = zx.o(0)
        zmm9 = 0x3f800000
    else
        zmm0 = 0x3f800000
        zmm9 = (zx.o(0)).d

zmm7[0] = zmm7[0] * zmm0[0]
zmm8[0] = zmm8[0] * zmm1[0]
zmm4[0] = zmm4[0] f* zmm9
zmm7[0] = zmm7[0] + zmm8[0]
zmm7[0] = zmm7[0] + zmm4[0]

if (zmm7[0] >= 0f)
    zmm4 = var_70_1
    zmm8 = var_88:4.d
    zmm7 = var_88.d
else
    zmm7 ^= 0x80000000
    zmm8 ^= 0x80000000
    zmm4 ^= 0x80000000
    zmm3 ^= 0x80000000

float zmm2[0x4] = 0x40490fdb

if (not(zmm3[0] <= 3.14159274f))
    do
        zmm3[0] = zmm3[0] + -6.28318548f
    while (zmm3[0] > 3.14159274f)

zmm1 = 0xc0490fdb

if (not(zmm3[0] >= -3.14159274f))
    do
        zmm3[0] = zmm3[0] + 6.28318548f
    while (zmm3[0] < -3.14159274f)

zmm3[0] = zmm3[0] f* arg6
zmm3[0] = zmm3[0] * 0.5f
bool cond:2 = zmm3[0] < 0f
zmm3[0] = zmm3[0] * 0.159154937f

if (cond:2)
    zmm3[0] = zmm3[0] - 0.5f
else
    zmm3[0] = zmm3[0] + 0.5f

float temp0_6[0x4] = _mm_cvtepi32_ps(zx.o(int.d(zmm3[0])))
temp0_6[0] = temp0_6[0] * 6.28318548f
zmm3[0] = zmm3[0] - temp0_6[0]

if (not(zmm3[0] <= 1.57079637f))
    zmm2[0] = 3.14159274f - zmm3[0]
    zmm3 = zmm2
else if (zmm3[0] >= -1.57079637f)
    zmm10 = 0x3f800000
else
    zmm1[0] = -3.14159274f - zmm3[0]
    zmm3 = zmm1

zmm1 = 0x3638b88e
zmm3[0] = zmm3[0] * zmm3[0]
zmm3[0] = zmm3[0] * 2.3889859e-08f
zmm1[0] = 2.75255616e-06f - zmm3[0]
zmm3[0] = zmm3[0] * 2.60516146e-07f
zmm1[0] = zmm1[0] * zmm3[0]
zmm1[0] = zmm1[0] - 0.000198408743f
zmm1[0] = zmm1[0] * zmm3[0]
zmm1[0] = zmm1[0] + 0.00833333097f
zmm1[0] = zmm1[0] * zmm3[0]
zmm1[0] = zmm1[0] - 0.166666672f
zmm1[0] = zmm1[0] * zmm3[0]
zmm1[0] = zmm1[0] + 1f
zmm1[0] = zmm1[0] * zmm3[0]
zmm7[0] = zmm7[0] * zmm1[0]
zmm4[0] = zmm4[0] * zmm1[0]
zmm8[0] = zmm8[0] * zmm1[0]
zmm1 = 0x37cfb4c2
zmm1[0] = 2.47604949e-05f - zmm3[0]
float temp0_7[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
temp0_7[0] = zmm8[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
temp0_8[0] = zmm4[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
zmm1[0] = zmm1[0] * zmm3[0]
zmm1[0] = zmm1[0] - 0.00138883782f
zmm1[0] = zmm1[0] * zmm3[0]
zmm1[0] = zmm1[0] + 0.0416666381f
zmm1[0] = zmm1[0] * zmm3[0]
zmm1[0] = zmm1[0] - 0.5f
zmm1[0] = zmm1[0] * zmm3[0]
zmm2 = *arg7
zmm1[0] = zmm1[0] + 1f
uint32_t zmm6[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
zmm1[0] = zmm1[0] f* zmm10
temp0_9[0] = zmm1[0]
float temp0_11[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x39)
zmm6 = _mm_mul_ps(zmm6, _mm_shuffle_ps(temp0_12, temp0_12, 0x1b))
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_12)
zmm6 = __mulps_xmmps_memps(zmm6, data_143f2b850)
float temp0_18[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm6 = _mm_add_ps(zmm6, temp0_16)
float temp0_21[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_12, temp0_12, 0x4e))
float temp0_22[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xb1)
float temp0_23[0x4] = __mulps_xmmps_memps(temp0_21, data_143f2b840)
float temp0_24[0x4] = _mm_mul_ps(temp0_18, temp0_22)
zmm6 = _mm_add_ps(_mm_add_ps(zmm6, temp0_23), __mulps_xmmps_memps(temp0_24, data_143f2b830))
*arg2 = zmm6
uint32_t zmm5[0x4] = data_143f2b8b0
float temp0_28[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_30[0x4] = _mm_add_ps(temp0_28, _mm_shuffle_ps(temp0_28, temp0_28, 0x4e))
float temp0_32[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0x39), temp0_30)
float temp0_33[0x4] = _mm_rsqrt_ps(temp0_32)
float temp0_34[0x4] = _mm_mul_ps(temp0_32, zmm5)
float temp0_39[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_33, temp0_33), temp0_34)), temp0_33), 
    temp0_33)
zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_39, temp0_39), temp0_34))
float temp0_44[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_32, 2)
*arg2 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5, temp0_39), temp0_39), zmm6) ^ data_143f2b8a0, temp0_44)
    ^ data_143f2b8a0
return arg2
