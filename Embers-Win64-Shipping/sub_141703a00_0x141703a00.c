// 函数: sub_141703a00
// 地址: 0x141703a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = 0x38d1b717
char rax = *(arg2 + 8) | 0x80
arg1[1].b = rax
*(arg1 + 9) = rax
*arg1 = &data_142fc5020
*(arg1 + 0xa) = 0x100
*(arg1 + 0xc) = 1
arg1[2] = arg2
arg1[3] = 0
arg1[4] = 0
arg1[8].d = arg4
__builtin_memcpy(arg1 + 0x44, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
*(arg1 + 0xa) = *(arg1[2] + 0xa)
*(arg1 + 0xb) = *(arg1[2] + 0xb)
uint32_t zmm2[0x4] = *arg3

if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f>= 9.99999975e-05f))
    zmm2 = 0x38d1b717

arg1[5].d = zmm2[0]
uint32_t zmm4[0x4] = 0x3f800000
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
zmm4[0] = 1f / zmm1[0]
*(arg1 + 0x3c) = zmm4[0]
arg4 = *(arg2 + 0x1c)
uint32_t zmm6[0x4] = *(arg2 + 0x18)
zmm4 = *(arg2 + 0x10)
zmm5 = *(arg2 + 0x14)
zmm6[0] = zmm6[0] f- arg4
zmm6[0] = zmm6[0] f+ arg4
zmm4[0] = zmm4[0] f- arg4
zmm1 = zmm5
zmm1[0] = zmm1[0] f- arg4
zmm4[0] = zmm4[0] f+ arg4
zmm6[0] = zmm6[0] f* arg1[6].d
zmm5[0] = zmm5[0] f+ arg4
zmm4[0] = zmm4[0] f* arg1[5].d
zmm1[0] = zmm1[0] f* *(arg1 + 0x2c)
uint32_t var_20 = zmm6[0]
zmm0 = _mm_unpacklo_ps(zmm4, zmm1[0].q)
*(arg1 + 0x44) = zmm0.q
arg1[0xa] = zmm0.q
*(arg1 + 0x4c) = var_20
arg1[0xb].d = var_20
zmm6[0] = zmm6[0] f* arg1[6].d
zmm4[0] = zmm4[0] f* arg1[5].d
zmm5[0] = zmm5[0] f* *(arg1 + 0x2c)
zmm2 = arg1[9].d
float temp0_4[0x4] = _mm_min_ss((*(arg1 + 0x44))[0], zmm4[0])
zmm0 = *(arg1 + 0x4c)
zmm2 = _mm_min_ss(zmm2[0], zmm5[0])
zmm0 = _mm_min_ss(zmm0[0], zmm6[0])
float temp0_7[0x4] = _mm_unpacklo_ps(temp0_4, zmm2[0].q)
zmm2 = *(arg1 + 0x54)
*(arg1 + 0x44) = temp0_7.q
zmm2 = _mm_max_ss(zmm2[0], zmm5[0])
uint32_t var_20_1 = zmm0[0]
float temp0_9[0x4] = _mm_max_ss(arg1[0xa].d[0], zmm4[0])
zmm0 = _mm_max_ss(arg1[0xb].d[0], zmm6[0])
*(arg1 + 0x4c) = var_20_1
arg1[0xa] = (_mm_unpacklo_ps(temp0_9, zmm2[0].q)).q
arg1[0xb].d = zmm0[0]
return arg1
