// 函数: sub_14175df90
// 地址: 0x14175df90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = nullptr

if (*(arg2 + 0xc) u>= 1)
    rax = arg2

float zmm6[0x4]

if (rax == 0)
    zmm6 = data_142d3f660
else
    zmm6 = *(*(*rax + 0x218) + sx.q(rax[1].d) * 0x10)

int64_t* arg_8 = arg2
float (* rax_2)[0x4] = sub_141749180(&arg_8)
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x1b)
float zmm2[0x4] = *rax_2
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0)
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
float temp0_5[0x4] = __mulps_xmmps_memps(temp0_2, data_143ef7c70)
float temp0_6[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_7[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_8[0x4] = _mm_add_ps(temp0_5, temp0_4)
float temp0_9[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x4e)
float temp0_11[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(zmm6, zmm6, 0xb1))
float temp0_12[0x4] = _mm_mul_ps(temp0_6, temp0_9)
float temp0_13[0x4] = __mulps_xmmps_memps(temp0_11, data_143ef7c50)
*arg1 = _mm_add_ps(_mm_add_ps(temp0_8, __mulps_xmmps_memps(temp0_12, data_143ef7c60)), temp0_13)
return arg1
