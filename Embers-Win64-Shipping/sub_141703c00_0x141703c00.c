// 函数: sub_141703c00
// 地址: 0x141703c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = 0x38d1b717
char rax = *(arg2 + 8) | 0x80
arg1[1].b = rax
*(arg1 + 9) = rax
*arg1 = &data_142fc4d40
*(arg1 + 0xa) = 0x100
*(arg1 + 0xc) = 1
arg1[2] = arg2
arg1[3] = 0
arg1[4] = 0
arg1[8].d = arg4.d
__builtin_memcpy(arg1 + 0x44, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
*(arg1 + 0xa) = *(arg1[2] + 0xa)
*(arg1 + 0xb) = *(arg1[2] + 0xb)
uint32_t zmm2[0x4] = *arg3

if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f>= 9.99999975e-05f))
    zmm2 = 0x38d1b717

arg1[5].d = zmm2[0]
uint32_t zmm0[0x4] = 0x3f800000
zmm0[0] = 1f f/ zmm2[0]
*(arg1 + 0x34) = zmm0[0]
zmm2 = *(arg3 + 4)

if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f>= 9.99999975e-05f))
    zmm2 = 0x38d1b717

zmm0 = 0x3f800000
*(arg1 + 0x2c) = zmm2[0]
zmm0[0] = 1f f/ zmm2[0]
arg1[7].d = zmm0[0]
uint32_t zmm5[0x4] = *(arg3 + 8)

if (not(_mm_and_ps(zmm5, 0x7fffffff)[0] f< 9.99999975e-05f))
    zmm1 = zmm5

arg1[6].d = zmm1[0]
uint128_t zmm4
zmm4.d = 1f / zmm1[0]
*(arg1 + 0x3c) = zmm4.d
int32_t rax_3 = *(arg2 + 0x68)
zmm2 = zx.o(*(arg2 + 0x60))
zmm2[0] = zmm2[0] f* arg1[5].d
arg4 = zx.o(*(arg2 + 0x6c))
int32_t rax_4 = *(arg2 + 0x74)
zmm5 = arg4
zmm1 = *(arg2 + 0x64)
zmm1[0] = zmm1[0] f* *(arg1 + 0x2c)
zmm0 = rax_3
zmm0[0] = zmm0[0] f* arg1[6].d
zmm4 = _mm_shuffle_ps(arg4, arg4, 0x55)
uint32_t var_30 = zmm0[0]
zmm0 = _mm_unpacklo_ps(zmm2, zmm1[0].q)
*(arg1 + 0x44) = zmm0.q
arg1[0xa] = zmm0.q
*(arg1 + 0x4c) = var_30
arg1[0xb].d = var_30
zmm5[0] = zmm5[0] f* arg1[5].d
zmm4.d = zmm4.d f* *(arg1 + 0x2c)
arg4.d = rax_4.d f* arg1[6].d
float temp0_5[0x4] = __minss_xmmss_memss(zmm5[0], *(arg1 + 0x44))
zmm0 = *(arg1 + 0x4c)
zmm2 = _mm_min_ss(arg1[9].d[0], zmm4.d)
zmm5 = __maxss_xmmss_memss(zmm5[0], arg1[0xa].d)
zmm0 = _mm_min_ss(zmm0[0], arg4.d)
float temp0_9[0x4] = _mm_unpacklo_ps(temp0_5, zmm2[0].q)
uint32_t var_30_1 = zmm0[0]
zmm2 = _mm_max_ss((*(arg1 + 0x54))[0], zmm4.d)
zmm0 = arg1[0xb].d
*(arg1 + 0x44) = temp0_9.q
zmm0 = _mm_max_ss(zmm0[0], arg4.d)
*(arg1 + 0x4c) = var_30_1
arg1[0xa] = (_mm_unpacklo_ps(zmm5, zmm2[0].q)).q
arg1[0xb].d = zmm0[0]
return arg1
