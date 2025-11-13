// 函数: sub_1422f0150
// 地址: 0x1422f0150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg3 + 4)
int32_t zmm3 = *(arg3 + 8)
int32_t var_1c = 0x3f800000
float var_28[0x4]
var_28[0] = (*arg3)[0]
float temp0[0x4] = _mm_shuffle_ps(var_28, var_28, 0xe1)
temp0[0] = zmm2[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm3
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), *(arg1 + 0x3f0))
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), *(arg1 + 0x3e0))
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), *(arg1 + 0x3d0))
float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(temp0_4, temp0_6), 
    _mm_add_ps(temp0_8, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *(arg1 + 0x3c0))))
int96_t var_18 = temp0_13[0].12
zmm2 = _mm_shuffle_ps(temp0_13, temp0_13, 0xff)

if (not(zmm2[0] != 0f))
    zmm2 = 0x38d1b717

float zmm0[0x4] = var_18.d
float zmm1[0x4] = var_18:4.d
float zmm5 = 1f / zmm2[0]
arg2[3] = zmm2[0]
zmm0[0] = zmm0[0] * zmm5
zmm1[0] = zmm1[0] * zmm5
*arg2 = zmm0[0]
zmm0 = var_18:8.d
zmm0[0] = zmm0[0] * zmm5
arg2[1] = zmm1[0]
arg2[2] = zmm0[0]
return arg2
