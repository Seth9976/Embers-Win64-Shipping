// 函数: sub_141e55490
// 地址: 0x141e55490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg3 + 8)
float zmm2[0x4] = *(arg3 + 4)
float zmm5[0x4] = *arg3
float temp0[0x4] = __mulps_xmmps_memps(*arg2, data_143f39a10)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_4[0x4] =
    __subps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm0[0].q), temp0_1[0].q), arg2[1])
uint128_t zmm1 = _mm_shuffle_ps(temp0, temp0, 0xd2)
float zmm9[0x4] = arg4
zmm5 = __andps_xmmxud_memxud(temp0_4, data_143f399d0)
float temp0_7[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm1)
float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_7)
float temp0_12[0x4] = _mm_shuffle_ps(temp0, temp0, 0xff)
float temp0_13[0x4] = _mm_sub_ps(temp0_11, temp0_9)
float temp0_14[0x4] = _mm_add_ps(temp0_13, temp0_13)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, temp0_14)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), zmm1)
zmm1 = _mm_shuffle_ps(temp0_14, temp0_14, 0xd2)
float temp0_19[0x4] = _mm_add_ps(temp0_15, zmm5)
zmm5 = *(arg1 + 0x14)
zmm2 = zx.o(0)
zmm1 = _mm_mul_ps(zmm1, temp0_7)
float zmm8[0x4] = zmm5 ^ 0x80000000
arg4 = *(arg1 + 0x18) ^ 0x80000000
zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, temp0_17), temp0_19)
float zmm4[0x4] = *(arg1 + 0x1c) ^ 0x80000000
int96_t var_38 = zmm1.12

if (not(zmm1.d f>= zmm8[0]))
    zmm2 = zmm1
    zmm2[0] = zmm2[0] - zmm8[0]
    zmm2[0] = zmm2[0] * zmm2[0]
else if (not(zmm1.d f<= zmm5[0]))
    zmm2 = zmm1
    zmm2[0] = zmm2[0] - zmm5[0]
    zmm2[0] = zmm2[0] * zmm2[0]

zmm0 = var_38:4.d

if (not(zmm0[0] >= arg4[0]))
    zmm0[0] = zmm0[0] - arg4[0]
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm2[0] = zmm2[0] + zmm0[0]
else if (not(zmm0[0] f<= *(arg1 + 0x18)))
    zmm0[0] = zmm0[0] f- *(arg1 + 0x18)
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm2[0] = zmm2[0] + zmm0[0]

zmm0 = var_38:8.d

if (not(zmm0[0] >= zmm4[0]))
    zmm0[0] = zmm0[0] - zmm4[0]
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm2[0] = zmm2[0] + zmm0[0]
else if (not(zmm0[0] f<= *(arg1 + 0x1c)))
    zmm0[0] = zmm0[0] f- *(arg1 + 0x1c)
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm2[0] = zmm2[0] + zmm0[0]

if (not(__andps_xmmxud_memxud(zmm2, data_142d3f770).d f<= 9.99999994e-09f))
    zmm1 = *(arg1 + 0x24)
    zmm1.d = zmm1.d f* zmm1.d
    
    if (not(zmm2[0] f< zmm1.d))
        return 

return sub_141e55300(arg1, _mm_sqrt_ss(0, zmm2[0]), *(arg1 + 0x24), zmm9[0]) __tailcall
